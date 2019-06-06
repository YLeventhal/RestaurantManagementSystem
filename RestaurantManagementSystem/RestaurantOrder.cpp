#include "RestaurantOrder.h"


RestaurantOrder::RestaurantOrder(const string& name,  OrderItem*  dishes,const int& cnt):
		TableName(name), Dishes(dishes),NumDishes(cnt)
{}
RestaurantOrder::~RestaurantOrder()
{}/*
RestaurantOrder::RestaurantOrder(const RestaurantOrder& o)
{}

ostream& RestaurantOrder::Print(ostream& s) const
{
	
}
RestaurantOrder& RestaurantOrder::operator=(const RestaurantOrder& o)
{
	
}*/
