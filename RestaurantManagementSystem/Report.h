/*
 *  Report.h
 *  hw4
 *
 *  Created by Masha Nikolski on 29/6/07 for @234122.
 *
 *  FUNCTIONALITY: 
 *		Includes definitions and printing purpose functions for hw4.
 * 
 *	FUNCTION LIST:
 * -----------------------------------------------------------------------------
 *	void ReportTable(ostream& s, 
 *					 const string& name, 
 *					 int cap, 
 *					 RSTableStatus st, 
 *					 int numPeople = 0);
 *
 *	Prints information about a table.
 *
 *  Parameters: 
 *		s - stream to print to.
 *      name - table name.
 *		cap - table maximum capacity.
 *		st - table status, one of the following TABLE_FREE, TABLE_WAIT_SERVICE, 
 *			or TABLE_WAIT_CHECK.
 *		numPeople - number of people occuping the table.
 *
 *  Return value:
 *		void
 *
 * -----------------------------------------------------------------------------
 *	void ReportWaitingList(ostream& s, const queue<int>& line);
 *
 *	Prints information about a queue of people outside the restaurant.
 *
 *  Parameters: 
 *		s - stream to print to.
 *      line - queue of integers indicating sizes of groups waiting to enter 
 *			the restaurant.
 *
 *  Return value:
 *		void
 *
 *	Remarks:
 *		The queue can be empty.
 * 
 * -----------------------------------------------------------------------------
 *	void ReportServedList(ostream& s, const queue<string>& line);
 *
 *	Prints information about a queue of tables waiting to be served (order to be
 *	taken).
 *
 *  Parameters: 
 *		s - stream to print to.
 *      line - queue of strings indicating tables' names.
 *
 *  Return value:
 *		void
 *
 *	Remarks:
 *		The queue can be empty.
 * 
 * -----------------------------------------------------------------------------
 *	void ReportCheckList(ostream& s, const queue<string>& line);
 *
 *	Prints information about a queue of tables waiting to get their check.
 *
 *  Parameters: 
 *		s - stream to print to.
 *      line - queue of strings indicating tables' names.
 *
 *  Return value:
 *		void
 *
 *	Remarks:
 *		The queue can be empty.
 * 
 * -----------------------------------------------------------------------------
 *	void ReportOrderList(ostream& s, const queue<RestaurantOrder>& orders);
 *
 *	Prints information about a queue of orders.
 *
 *  Parameters: 
 *		s - stream to print to.
 *      line - queue of valid orders. If the orders are in non valid state
 *			(as defined in RestaurantOrder.h) function behaviour is undefined.
 *
 *  Return value:
 *		void
 *
 *	Remarks:
 *		The queue can be empty.
 * 
 * -----------------------------------------------------------------------------
 *	void ReportProfit(ostream& s, const RestaurantOrder& order);
 *
 *	Prints information about profits.
 *
 *  Parameters: 
 *		s - stream to print to.
 *      order - valid RestaurantOrder object. If the object is in non valid state
 *			(as defined in RestaurantOrder.h) function behaviour is undefined.
 *
 *  Return value:
 *		void
 *
 *	Remarks:
 *		If there are no profits pass a RestaurantOrder parameter with 0 dishes.
 * 
 * -----------------------------------------------------------------------------
 *
 */

#ifndef REPORT_H
#define REPORT_H
#define Queue queue
#include <queue>
#include <vector>
#include "RestaurantOrder.h"


#include <iostream>
#include <string>

using std::ostream;
using std::string;
using namespace std;

// Possible return values in Restaurant functions.
typedef enum{
	ILLEGAL_GROUP_SIZE = -1,
	NO_FREE_TABLE,
	NO_WAITING_GROUP,
	ILLEGAL_ORDER,
	SERVED_LIST_IS_EMPTY,
	CHECK_LIST_IS_EMPTY,
	BAD_PARAMETER,
	SUCCESS
} RSResult;

// Possible status for a table in a restaurant.
typedef enum {
	TABLE_FREE,
	TABLE_WAIT_SERVICE,
	TABLE_WAIT_CHECK
} RSTableStatus;

void ReportTable(ostream& s, const string& name, int cap, RSTableStatus st, int numPeople = 0);
void ReportWaitingList(ostream& s, const queue<int>& line);
void ReportServedList(ostream& s, const queue<string>& line);
void ReportCheckList(ostream& s, const queue<string>& line);
void ReportOrderList(ostream& s, const queue<RestaurantOrder>& orders);
void ReportProfit(ostream& s, const RestaurantOrder& order);

#endif //REPORT_H
