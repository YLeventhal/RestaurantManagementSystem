/*
 *  Report.cpp
 *  hw4
 *
 *  Created by Masha Nikolski on 29/6/07.
 *
 */
//#pragma once
#include <queue>
#include <vector>


#include "Report.h"

#include <iostream>
#include <string>
using namespace std;

static string ToString(RSTableStatus s);

ostream& operator <<(ostream& os, const queue<int>& pq)
{
	queue<int> temp = pq;
	
	while (!temp.empty())
	{
		os << temp.front() << endl;
		temp.pop();
	}
	return os;
}

ostream& operator <<(ostream& os, const queue<string>& pq)
{
	queue<string> temp = pq;
	
	while (!temp.empty())
	{
		os << temp.front() << endl;
		temp.pop();
	}
	return os;
}

ostream& operator <<(ostream& os, const queue<RestaurantOrder>& pq)
{
	queue<RestaurantOrder> temp = pq;
	
	while (!temp.empty())
	{
		for (int i = 0; i <temp.front().NumDishes;i++)
		{
			os <<"Dish name: " << temp.front().Dishes[i].name;
			os <<"Prisc: " << temp.front().Dishes[i].price;
			os <<"ammount: " << temp.front().Dishes[i].ammount;
		}
		os << endl;
		temp.pop();
	}
	return os;
}
ostream& operator <<(ostream& os, const RestaurantOrder& pq)
{
	for (int i = 0; i <pq.NumDishes;i++)
	{
		os <<"Dish name: " << pq.Dishes[i].name;
		os <<"Prisc: " << pq.Dishes[i].price;
		os <<"ammount: " << pq.Dishes[i].ammount;
	}
	os << endl;
	return os;
}

string ToString(RSTableStatus s)
{
	switch (s) {
		case TABLE_FREE:
			return "free";
		case TABLE_WAIT_SERVICE:
			return "waiting to be served";
		case TABLE_WAIT_CHECK:
			return "waiting for a check";
		default:
			return "TABLE_STATUS_ERROR";
	}
}

void ReportTable(ostream& s, const string& name, int cap, RSTableStatus st, int numPeople)
{
	if (st == TABLE_FREE)
		s << "Table " << name << ": " 
			<< "capacity = " << cap << ", status = " << ToString(st)  << "." << endl;
	else
		s << "Table " << name << ": " 
			<< "capacity = " << cap << ", occupied by " << numPeople << ", status = " << ToString(st)  << "." << endl;
}

void ReportWaitingList(ostream& s, const queue<int>& line)
{	
	if (line.empty())
		s << "There is no one waiting to enter the restaurant." << endl;
	else {
		s << "List of groups waiting for a table: ";
		s << line << endl;
	}
}

void ReportServedList(ostream& s, const queue<string>& line)
{
	if (line.empty())
		s << "There is no one waiting for service." << endl;
	else {
		s << "List of tables waiting for service: ";
		s << line << endl;
	}
}

void ReportCheckList(ostream& s, const queue<string>& line)
{
	if (line.empty())
		s << "There is no table waiting for a check." << endl;
	else {
		s << "List of tables waiting for a check: ";
		s << line << endl;
	}
}

void ReportOrderList(ostream& s, const queue<RestaurantOrder>& orders)
{
	if (orders.empty())
		s << "There are no opened orders." << endl;
	else {
		s << "List of opened orders" << endl;
		s << orders << endl;
	}
}


void ReportProfit(ostream& s, const RestaurantOrder& order)
{
	s << order << endl;
}

