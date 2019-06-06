
//#define PASS tables
//#define pass menu
//#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include "RestaurantOrder.h"
#include "Restaurant.h"



using namespace std;

		

Table::Table(const string name, const int capacity, RSTableStatus s):
	p_name(name),p_capacity(capacity)
{}

Table::~Table()
{}


bool Table::operator <(const Table &b) const
{
	if(p_capacity == b.p_capacity)
	{
		return p_name < b.p_name ;
	}
	else
	{
		return p_capacity < b.p_capacity;
	}
	
}




Dish::Dish(const string type_dish, const string dish_name, const double price):
	m_type_dish(type_dish), m_dish_name(dish_name), m_price(price)
{}
Dish::~Dish()
{}




Restaurant::Restaurant(const char* tfile, const char* mfile)
{
	int i, j , NumOf, TableCapa;
	string tableName, dishName, dishCategory;
	double dishPrice;
	
	ifstream a;
	a.open(tfile);
	a >> NumOf;

	// redeclared i
	for(int i = 0; i<NumOf; i++)
	{
		a >> tableName;
		a >> TableCapa;
		vTable.push_back(Table(tableName,TableCapa));
	}
	a.close();
	sort(vTable.begin(),vTable.end());
	Max_size = vTable[NumOf-1].p_capacity;
	
	a.open(mfile);

	// what is 6...should use magic numbers for clarity
	for (i = 0; i < 6 ;i++)
	{
		a>>dishCategory;
		a>>NumOf;
		for (j = 0; j < NumOf; j++)
		{
			a >> dishName;
			a >> dishPrice;
			vDish.push_back(Dish(dishCategory, dishName, dishPrice));
		}
	}
	a.close();
	
}



Restaurant::~Restaurant()
{}


void Restaurant::PrintOpenOrders() const
{
	// this is unnecessary because in operator overload creates a temp copy
	queue<RestaurantOrder> OpenOrders = vRestaurantOrderOpen;
	ReportOrderList(cout,OpenOrders);
}
void Restaurant::PrintTables() const
{
	// this is unnecessary because in operator overload creates a temp copy
	vector <Table>TempTable = vTable;
	// why unsigned int
	for(unsigned int i=0; i < TempTable.size(); i++)
		ReportTable(cout, TempTable[i].p_name, TempTable[i].p_capacity, TempTable[i].status, TempTable[i].sitting);
}

// return a reference and pass in a reference because we dont want to empty the pq passed in. define the inner queue/list on the heap
queue<string>/*&*/ list(priority_queue <Table> Served)
{
	// iterate and dont pop and also pass i reference not copy
	queue<string> list;// = new queue<string>
	while (!Served.empty())
	{
		list.push(Served.top().p_name);
		Served.pop();
	}
	return list;
}

void Restaurant::PrintServedList() const
{
	// this needs to be explained that the method ReportServedList accepts a queue and not a priority queue
	// and rather overload the assignment opereator of queue ie. operator=(priority_queue<T>& pq);
	queue<string>NewList=list(qServedList);
	ReportServedList(cout,NewList);
}


void Restaurant::PrintProfits() const
{
	// iterate and dont copy or loop till size()
	// use temp for both loops by redefininig but not redeclaring
		queue<RestaurantOrder> temp = vRestaurantOrderOpen;
		while (!temp.empty())
		{
			ReportProfit(cout, (temp.front()));
			temp.pop();
		}
		
		queue<RestaurantOrder> temp1 = vRestaurantOrderClose;
		while (!temp1.empty())
		{
			ReportProfit(cout, (temp1.front()));
			temp1.pop();
		}
	
}

void Restaurant::PrintWaitList() const
{	// this is unnecessary because in operator overload creates a temp copy

	queue <int>temp = qWaitList;
	ReportWaitingList(cout, temp);
}

void Restaurant::change_status(string T_name, RSTableStatus T_status)
{
	vector<Table>::iterator iter;
	for (iter = vTable.begin(); iter != vTable.end(); iter++)
		if (iter->p_name == T_name)
		{
			iter->status = T_status;
		}
}

double Restaurant::get_price(string dish_name)
{
	vector <Dish>::const_iterator iter;
	for (iter = vDish.begin(); iter != vDish.end(); iter++)
	{
		if ((*iter).m_dish_name == dish_name)
		{
			return (*iter).m_price;
		}
	}
	return 0;
}



bool Restaurant::dish_name_exists(string dish_name)
{
	vector <Dish>::const_iterator iter;
	for (iter = vDish.begin(); iter != vDish.end(); iter++)
	{
		if ((*iter).m_dish_name == dish_name)
			return true;
	}
	return false;
}



RSResult Restaurant::GetOrder(int nSize, const string* items, const int* itemsNum)
{

	// NULL pointer passed
	if (items == NULL || itemsNum == NULL)
	{
		return BAD_PARAMETER;
	}

	//>>>>>>> can put both loop checks in one loop

	//there is no such dish on the menu. 
	for (int i = 0; i < nSize; i++)
	{
		if (!(dish_name_exists(items[i])))
			return ILLEGAL_ORDER;
	}

	//>>>>this should come first

	//Order size is smaller than one
	if (nSize < 1)
		return ILLEGAL_ORDER;
	// any dish quantity is smaller than one
	for (int i = 0; i <= nSize; i++)
	{
		if (itemsNum[i] == 0)
			return ILLEGAL_ORDER;
	}

	//>>>>and this should come first

	//SERVED_LIST_IS_EMPTY
	if (qServedList.empty())
	{
		return SERVED_LIST_IS_EMPTY;
	}
	OrderItem* list_orders = new OrderItem[nSize];
	for (int i = 0; i < nSize; i++)
	{
		list_orders[i] = OrderItem(items[i], get_price(items[i]), itemsNum[i]);
	}
	vRestaurantOrderOpen.push(RestaurantOrder(qServedList.top().p_name, list_orders, nSize));
	change_status(qServedList.top().p_name, TABLE_WAIT_CHECK);
	qServedList.pop();
	
	//>>>>> passed this address to restaurant order and then deleted what is stored at this address
	// ie. the restorder is pointing at freed heap
	delete []list_orders;
	list_orders = 0;
	
	return SUCCESS;
}

RSResult Restaurant:: AddToWaitList(int nGroupSize)
{
	//int maxTable = MaxTable();
	if (nGroupSize > 0 && nGroupSize < Max_size)
	{
		qWaitList.push(nGroupSize);
		return SUCCESS;
	}
	else
		return ILLEGAL_GROUP_SIZE;
}


RSResult Restaurant::GetCheck()
{
	if (qCheckList.empty())
	{
		return CHECK_LIST_IS_EMPTY;
	}
	else
	{
		change_status(qCheckList.top().p_name, TABLE_FREE);
		qCheckList.pop();
		// NEED TO CHANGE RES OPEN ORDERS

		return SUCCESS;
	}
}

RSResult Restaurant::SitAtTable()
{
	
	vector<Table>::iterator StatTable;
	if	(qWaitList.empty())
	{
		return NO_WAITING_GROUP;
	}
	for (StatTable = vTable.begin();  StatTable != vTable.end(); StatTable++)
	{
		//>>>>>>>>>>>>>>>>unify the conditional tests

		if ((*StatTable).status == TABLE_FREE)
		{
			if (qWaitList.front() <= (*StatTable).p_capacity)
			{
				(*StatTable).status = TABLE_WAIT_SERVICE;
				qServedList.push(*StatTable);
				qWaitList.pop();
				return SUCCESS;
			}
		}
	}
	return NO_FREE_TABLE;
}


/*void Restaurant::change_status(string T_name, RSTableStatus T_status)
{
	vector <Table>::iterator iter;
	for (iter = vTable.begin(); iter != vTable.end(); iter++)
		if (iter->p_name == T_name)
		{
			iter->status = T_status;
		}
}*/

ostream& operator <<(ostream& os, const Table& aTable)
{
	os << aTable.p_name << " " << aTable.p_capacity << endl;
	return os;
}
void Restaurant::PrintCheckList() const
{
	queue<string>NewList=list(qCheckList);
	ReportCheckList(cout, NewList);
}
	
ostream& operator <<(ostream& os, const priority_queue<Table>& pq)
{
	priority_queue<Table> temp = pq;
	
	while (!temp.empty())
	{
		os << temp.top();
		temp.pop();
	}
	return os;
}
/*


	
	
	
int main()
{
	Restaurant c("tables.in","menu.in");
	int i;
	
	vector<Table>list = (c.vTable);
	
	for(i=0;i<list.size();i++)
	cout <<list[i];

	return 0;
}





*/































