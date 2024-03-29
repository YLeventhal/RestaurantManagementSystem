/*
 *  RestaurantOrder.h
 *  hw4
 *
 *  Created by Masha Nikolski on 11/7/07 for @234122.
 *
 *  FUNCTIONALITY: 
 *		Implements an order taken from one table in a restaurant.
 *		Includes information about various dishes included in the order, 
 *		their price and the ammount of each dish.
 *	
 *	MEMBERS:
 * -----------------------------------------------------------------------------
 *  RestaurantOrder(const string& name, const OrderItem* dishes, const int& cnt);
 *
 *	Constructor
 *
 *  Parameters: 
 *		name - table name, that made the order.
 *		dishes - an array of objects of type OrderItem; each object containing 
 *			information about one dish type. See class OrderItem for details.
 *		cnt - Size of dishes. 
 *
 *	Remarks:
 *		1. cnt must be non negative.
 *		2. If cnt is positive, dishes must be a valid (not NULL) array.
 *		3. If cnt equals 0, all other parameters are ignored.
 *		4. If cnt is negative function behaviour is undefined.
 *
 *	Example:
 *		Those are legal calls to RestaurantOrder constructor:
 *		OrderItem order("Coffee", 3.5, 2);
 *		RestaurantOrder o1("Table1", &order, 1);
 *      RestaurantOrder o2("", NULL, 0);
 *
 * -----------------------------------------------------------------------------
 *  RestaurantOrder(const RestaurantOrder& o);
 *	
 *	Copy constructor
 *
 *  Parameters: 
 *		o - restaurant order.
 *
 * -----------------------------------------------------------------------------
 *	virtual ~RestaurantOrder();
 *
 *	Destructor
 *
 * -----------------------------------------------------------------------------
 *	ostream& Print(ostream& s) const;
 *
 *	Prints the order to a stream. 
 *
 *  Parameters: 
 *		s - stream to print the order to.
 *
 *  Return value:
 *		ostream& - reference to the modified stream.
 *
 * -----------------------------------------------------------------------------
 *	RestaurantOrder& operator=(const RestaurantOrder& o);
 *
 *	RestaurantOrder operator=.
 *
 *  Parameters: 
 *		o - RestaurantOrder.
 *
 *  Return value:
 *		RestaurantOrder& - reference to the modified order.
 *
 * -----------------------------------------------------------------------------
 *
 * GLOBAL OPERATORS:
 * -----------------------------------------------------------------------------
 *  ostream& operator<<(ostream& s, const RestaurantOrder& o);
 *
 *	Prints the order to a stream. 
 *
 *  Parameters: 
 *		s - stream to print the order to.
 *      o - order to print.
 *
 *  Return value:
 *		ostream& - reference to the modified stream.
 *
 * -----------------------------------------------------------------------------
 *
 */

#ifndef RESTAURANT_ORDER
#define RESTAURANT_ORDER

#include <queue>
#include <vector>


#include "OrderItem.h"
#include <iostream>
#include <string>
class RestaurantOrder {
public:	
	RestaurantOrder(const string& name = "", 
					 OrderItem* dishes = NULL, 
					const int& cnt = 0);
	//RestaurantOrder(const RestaurantOrder& o);
	virtual ~RestaurantOrder();
	//friend ostream& operator <<(ostream& os, const queue<RestaurantOrder>& pq);
//	ostream& Print(ostream& s) const;
	//RestaurantOrder& operator=(const RestaurantOrder& o);
	
//protected:
	string     TableName;
	OrderItem* Dishes; 
	int        NumDishes;
	
private:
	//void copy(const RestaurantOrder& o);
};
//ostream& operator<<(ostream& s, const RestaurantOrder& o);

#endif // RESTAURANT_ORDER
