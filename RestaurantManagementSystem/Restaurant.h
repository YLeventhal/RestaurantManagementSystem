#pragma once
#include <queue>
#include <vector>
#include "Report.h"

#include <iostream>
#include <string>


class Dish
{
	public:
		Dish(const string type_dish = "", const string dish_name= "", const double price = 0.0);
		~Dish();
		string m_type_dish;
		string m_dish_name;
		double m_price;
};

class Table
{
	public:
		Table(const string name = "", const int capacity = 0,RSTableStatus s = TABLE_FREE);
		~Table();
		
		RSTableStatus status;
		string p_name;
		int p_capacity;
		int sitting;
		
		
		bool operator <(const Table &b) const;
};

class Restaurant
{
	public:
		Restaurant(const char* tfile = "", const char* mfile = "");
		~Restaurant();
		RSResult AddToWaitList(int nGroupSize);
		RSResult SitAtTable();
		RSResult GetOrder(int nSize, const string* items, const int* itemsNum);
		RSResult GetCheck();
		void PrintWaitList() const;
		void PrintServedList() const;
		void PrintCheckList() const;
		void PrintOpenOrders() const;
		void PrintProfits() const;
		void PrintTables() const;
		// Should be private with getters
		vector<Table> vTable;
		vector<Dish> vDish;
		queue<RestaurantOrder> vRestaurantOrderOpen;
		queue<RestaurantOrder> vRestaurantOrderClose;
		queue<int> qWaitList;
		priority_queue<Table> qServedList;
		priority_queue<Table> qCheckList;
		// Lacks proper description
		int Max_size;

		// why freind these instead of making them member functions
		friend ostream& operator <<(ostream& os, const queue<int>& pq);
		friend ostream& operator <<(ostream& os, const queue<string>& pq);
		friend ostream& operator <<(ostream& os, const queue<RestaurantOrder>& pq);
	private:
		// const on parameter and on func
		double get_price(string dish_name);
		// const on parameter and on func
		bool dish_name_exists(string dish_name);
		// const on parameter T_name and on func
		void change_status(string T_name, RSTableStatus status);
};
