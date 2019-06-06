/*
 *  Test.h
 *  hw4
 *
 *  Created by Masha Nikolski on 3/7/07 for @234122.
 *
 *  FUNCTIONALITY: 
 *		Tests class Restaurant; prints functions' output to cout, and error 
 *		messages to cerr.
 *		
 *		Function names corresppond to functions in class Restaurant with 
 *		added prefix _test.
 *
 *		All the functions receive as their first parameter an object of type
 *		Restaurant; other parameters are similar to parameters of a corresponding
 *		class Restaurant function.
 * 
 *	FUNCTION LIST:
 * -----------------------------------------------------------------------------
 *	void _testAddToWaitList(Restaurant& r, int nGroupSize);
 *	void _testSitAtTable(Restaurant& r);
 *	void _testGetOrder(Restaurant& r, int nSize, const string* items, const int* itemsNum);
 *	void _testGetCheck(Restaurant& r);
 *	void _testPrintWaitList(const Restaurant& r);
 *	void _testPrintServedList(const Restaurant& r);
 *	void _testPrintCheckList(const Restaurant& r);
 *  void _testPrintTables(const Restaurant& r);
 *	void _testPrintOpenOrders(const Restaurant& r);
 *	void _testPrintProfits(const Restaurant& r);
 *
 *  Tests all the printing functions one after another.
 *	void _testPrintAll(const Restaurant& r, const string& resName);
 *
 * -----------------------------------------------------------------------------
 */

#ifndef TEST_RESTAURANT_H
#define TEST_RESTAURANT_H

#include "Restaurant.h"

void _testAddToWaitList(Restaurant& r, int nGroupSize);
void _testSitAtTable(Restaurant& r);
void _testGetOrder(Restaurant& r, int nSize, const string* items, const int* itemsNum);
void _testGetCheck(Restaurant& r);

void _testPrintWaitList(const Restaurant& r);
void _testPrintServedList(const Restaurant& r);
void _testPrintCheckList(const Restaurant& r);

void _testPrintTables(const Restaurant& r);
void _testPrintOpenOrders(const Restaurant& r);
void _testPrintProfits(const Restaurant& r);

void _testPrintAll(const Restaurant& r, const string& resName);


#endif
