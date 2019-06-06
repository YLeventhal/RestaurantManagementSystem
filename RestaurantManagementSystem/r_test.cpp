#include "Test.h"


void _testAddToWaitList(Restaurant& r, int nGroupSize)
{
	r.AddToWaitList(nGroupSize);
}
void _testSitAtTable(Restaurant& r)
{
	r.SitAtTable();
}
void _testGetOrder(Restaurant& r, int nSize, const string* items, const int* itemsNum)
{
	r.GetOrder(nSize,items,itemsNum);
}
void _testGetCheck(Restaurant& r)
{
	r.GetCheck();
}

void _testPrintWaitList(const Restaurant& r)
{
	r.PrintWaitList();
}
void _testPrintServedList(const Restaurant& r)
{
		r.PrintServedList();
}
void _testPrintCheckList(const Restaurant& r)
{
	r.PrintCheckList();
}

void _testPrintTables(const Restaurant& r)
{
	r.PrintTables();
}
void _testPrintOpenOrders(const Restaurant& r)
{
		r.PrintOpenOrders();
}
void _testPrintProfits(const Restaurant& r)
{
	r.PrintProfits();
}

void _testPrintAll(const Restaurant& r, const string& resName)
{
	r.PrintProfits();
}

