/*
 *  r_test.cpp
 *  hw4
 *
 *  Created by Masha Nikolski on 3/7/07 for @234122.
 *
 *  lines 17 to ($last_line-2) by Erez F. on 6.8.07
 *
 */




#include "Test.h"

int main()
{
	Restaurant r("tables.in", "menu.in");
        // END OF FIRST PART
const string items0[] = {"pro365","pro956",};
const int itemsNum0[] = {5,8,};

_testGetOrder(r,-80, items0, itemsNum0);
std::cerr << "last output should be ERROR from command0" << std::endl;
 // last command was command number 0
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1" << std::endl;
 // last command was command number 1
_testGetCheck(r);
std::cerr << "last output should be ERROR from command2" << std::endl;
 // last command was command number 2
_testPrintServedList(r);
std::cout << "last command was number: 3 " << std::endl;
// last command was command number 3
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command4" << std::endl;
 // last command was command number 4

_testPrintTables(r);
std::cout << "last command was number: 5 " << std::endl;
// last command was command number 5
_testGetCheck(r);
std::cerr << "last output should be ERROR from command6" << std::endl;
 // last command was command number 6
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command7" << std::endl;
 // last command was command number 7
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command8" << std::endl;
 // last command was command number 8
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command9" << std::endl;
 // last command was command number 9
_testAddToWaitList(r,90);
std::cout << "last command was number: 10 " << std::endl;
// last command was command number 10
const string items11[] = {"pro535","pro390",};
const int itemsNum11[] = {-35,10,};
_testGetOrder(r,2, items11, itemsNum11);
std::cerr << "last output should be ERROR from command11" << std::endl;
 // last command was command number 11
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command12" << std::endl;
 // last command was command number 12
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command13" << std::endl;
 // last command was command number 13
const string items14[] = {"pro713","pro987",};
const int itemsNum14[] = {6,1,};
_testGetOrder(r,2, items14, itemsNum14);
std::cerr << "last output should be ERROR from command14" << std::endl;
 // last command was command number 14
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command15" << std::endl;
 // last command was command number 15
_testSitAtTable(r);
std::cout << "last command was number: 16 " << std::endl;
// last command was command number 16
const string items17[] = {"pro303","pro740","pro351","pro137",};
const int itemsNum17[] = {6,7,1,6,};
_testGetOrder(r,4, items17, itemsNum17);
std::cout << "last command was number: 17 " << std::endl;
// last command was command number 17
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command18" << std::endl;
 // last command was command number 18
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command19" << std::endl;
 // last command was command number 19
_testPrintTables(r);
std::cout << "last command was number: 20 " << std::endl;
// last command was command number 20
const string items21[] = {"pro959","pro230",};
const int itemsNum21[] = {6,8,};
_testGetOrder(r,2, items21, itemsNum21);
std::cerr << "last output should be ERROR from command21" << std::endl;
 // last command was command number 21
_testPrintCheckList(r);
std::cout << "last command was number: 22 " << std::endl;
// last command was command number 22
_testPrintTables(r);
std::cout << "last command was number: 23 " << std::endl;
// last command was command number 23
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command24" << std::endl;
 // last command was command number 24
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command25" << std::endl;
 // last command was command number 25
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command26" << std::endl;
 // last command was command number 26
_testAddToWaitList(r,60);
std::cout << "last command was number: 27 " << std::endl;
// last command was command number 27
const string items28[] = {"pro543","pro702",};
const int itemsNum28[] = {8,6,};
_testGetOrder(r,2, items28, itemsNum28);
std::cerr << "last output should be ERROR from command28" << std::endl;
 // last command was command number 28
_testGetCheck(r);
std::cout << "last command was number: 29 " << std::endl;
// last command was command number 29
_testAddToWaitList(r,80);
std::cout << "last command was number: 30 " << std::endl;
// last command was command number 30
const string items31[] = {"bad product!",};
const int itemsNum31[] = {2,};
_testGetOrder(r,1, items31, itemsNum31);
std::cerr << "last output should be ERROR from command31" << std::endl;
 // last command was command number 31
const string items32[] = {"pro351","pro757",};
const int itemsNum32[] = {1,-86,};
_testGetOrder(r,2, items32, itemsNum32);
std::cerr << "last output should be ERROR from command32" << std::endl;
 // last command was command number 32
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command33" << std::endl;
 // last command was command number 33
_testPrintTables(r);
std::cout << "last command was number: 34 " << std::endl;
// last command was command number 34
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command35" << std::endl;
 // last command was command number 35
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command36" << std::endl;
 // last command was command number 36
const string items37[] = {"pro230","pro241","pro736","pro328",};
const int itemsNum37[] = {5,4,5,5,};
_testGetOrder(r,4, items37, itemsNum37);
std::cerr << "last output should be ERROR from command37" << std::endl;
 // last command was command number 37
_testGetCheck(r);
std::cerr << "last output should be ERROR from command38" << std::endl;
 // last command was command number 38
_testPrintServedList(r);
std::cout << "last command was number: 39 " << std::endl;
// last command was command number 39
_testSitAtTable(r);
std::cout << "last command was number: 40 " << std::endl;
// last command was command number 40
_testAddToWaitList(r,99);
std::cout << "last command was number: 41 " << std::endl;
// last command was command number 41
_testSitAtTable(r);
std::cout << "last command was number: 42 " << std::endl;
// last command was command number 42
const string items43[] = {"pro768","pro491","pro947","pro709","pro956",};
const int itemsNum43[] = {2,2,3,2,9,};
_testGetOrder(r,5, items43, itemsNum43);
std::cout << "last command was number: 43 " << std::endl;
// last command was command number 43
const string items44[] = {"pro595","pro213","pro457","pro77","pro402",};
const int itemsNum44[] = {7,8,9,1,2,};
_testGetOrder(r,-71, items44, itemsNum44);
std::cerr << "last output should be ERROR from command44" << std::endl;
 // last command was command number 44
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command45" << std::endl;
 // last command was command number 45
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command46" << std::endl;
 // last command was command number 46
const string items47[] = {"pro719","pro695","pro502","pro592","pro6",};
const int itemsNum47[] = {1,4,5,-4,5,};
_testGetOrder(r,5, items47, itemsNum47);
std::cerr << "last output should be ERROR from command47" << std::endl;
 // last command was command number 47
_testGetCheck(r);
std::cout << "last command was number: 48 " << std::endl;
// last command was command number 48
_testGetCheck(r);
std::cerr << "last output should be ERROR from command49" << std::endl;
 // last command was command number 49
_testPrintWaitList(r);
std::cout << "last command was number: 50 " << std::endl;
// last command was command number 50
const string items51[] = {"pro534","pro720","pro821",};
const int itemsNum51[] = {7,5,-59,};
_testGetOrder(r,-72, items51, itemsNum51);
std::cerr << "last output should be ERROR from command51" << std::endl;
 // last command was command number 51
_testPrintCheckList(r);
std::cout << "last command was number: 52 " << std::endl;
// last command was command number 52
_testPrintCheckList(r);
std::cout << "last command was number: 53 " << std::endl;
// last command was command number 53
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command54" << std::endl;
 // last command was command number 54
const string items55[] = {"pro241","pro156","pro969","pro397",};
const int itemsNum55[] = {2,-3,5,10,};
_testGetOrder(r,4, items55, itemsNum55);
std::cerr << "last output should be ERROR from command55" << std::endl;
 // last command was command number 55
_testPrintCheckList(r);
std::cout << "last command was number: 56 " << std::endl;
// last command was command number 56
_testPrintCheckList(r);
std::cout << "last command was number: 57 " << std::endl;
// last command was command number 57
const string items58[] = {"pro120","pro390","pro330","pro895","pro457",};
const int itemsNum58[] = {2,9,9,10,6,};
_testGetOrder(r,5, items58, itemsNum58);
std::cout << "last command was number: 58 " << std::endl;
// last command was command number 58
_testPrintServedList(r);
std::cout << "last command was number: 59 " << std::endl;
// last command was command number 59
_testSitAtTable(r);
std::cout << "last command was number: 60 " << std::endl;
// last command was command number 60
_testGetCheck(r);
std::cout << "last command was number: 61 " << std::endl;
// last command was command number 61
_testPrintTables(r);
std::cout << "last command was number: 62 " << std::endl;
// last command was command number 62
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command63" << std::endl;
 // last command was command number 63
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command64" << std::endl;
 // last command was command number 64
const string items65[] = {"bad product!","pro156",};
const int itemsNum65[] = {3,6,};
_testGetOrder(r,2, items65, itemsNum65);
std::cerr << "last output should be ERROR from command65" << std::endl;
 // last command was command number 65
_testGetCheck(r);
std::cerr << "last output should be ERROR from command66" << std::endl;
 // last command was command number 66
const string items67[] = {"pro575","pro826","pro158",};
const int itemsNum67[] = {4,-56,7,};
_testGetOrder(r,3, items67, itemsNum67);
std::cerr << "last output should be ERROR from command67" << std::endl;
 // last command was command number 67
_testAddToWaitList(r,74);
std::cout << "last command was number: 68 " << std::endl;
// last command was command number 68
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command69" << std::endl;
 // last command was command number 69
const string items70[] = {"pro977","bad product!","pro760","pro545",};
const int itemsNum70[] = {2,5,7,4,};
_testGetOrder(r,4, items70, itemsNum70);
std::cerr << "last output should be ERROR from command70" << std::endl;
 // last command was command number 70
_testGetCheck(r);
std::cerr << "last output should be ERROR from command71" << std::endl;
 // last command was command number 71
_testGetCheck(r);
std::cerr << "last output should be ERROR from command72" << std::endl;
 // last command was command number 72
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command73" << std::endl;
 // last command was command number 73
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command74" << std::endl;
 // last command was command number 74
const string items75[] = {"pro375","pro966",};
const int itemsNum75[] = {6,10,};
_testGetOrder(r,2, items75, itemsNum75);
std::cout << "last command was number: 75 " << std::endl;
// last command was command number 75
_testPrintTables(r);
std::cout << "last command was number: 76 " << std::endl;
// last command was command number 76
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command77" << std::endl;
 // last command was command number 77
_testAddToWaitList(r,86);
std::cout << "last command was number: 78 " << std::endl;
// last command was command number 78
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command79" << std::endl;
 // last command was command number 79
const string items80[] = {"pro648",};
const int itemsNum80[] = {8,};
_testGetOrder(r,-61, items80, itemsNum80);
std::cerr << "last output should be ERROR from command80" << std::endl;
 // last command was command number 80
const string items81[] = {"pro768","pro545","pro929","pro390","pro351",};
const int itemsNum81[] = {1,4,7,10,8,};
_testGetOrder(r,-29, items81, itemsNum81);
std::cerr << "last output should be ERROR from command81" << std::endl;
 // last command was command number 81
_testAddToWaitList(r,68);
std::cout << "last command was number: 82 " << std::endl;
// last command was command number 82
_testSitAtTable(r);
std::cout << "last command was number: 83 " << std::endl;
// last command was command number 83
_testPrintCheckList(r);
std::cout << "last command was number: 84 " << std::endl;
// last command was command number 84
_testGetCheck(r);
std::cout << "last command was number: 85 " << std::endl;
// last command was command number 85
_testPrintOpenOrders(r);
std::cout << "last command was number: 86 " << std::endl;
// last command was command number 86
_testAddToWaitList(r,62);
std::cout << "last command was number: 87 " << std::endl;
// last command was command number 87
const string items88[] = {"pro294",};
const int itemsNum88[] = {5,};
_testGetOrder(r,1, items88, itemsNum88);
std::cout << "last command was number: 88 " << std::endl;
// last command was command number 88
_testSitAtTable(r);
std::cout << "last command was number: 89 " << std::endl;
// last command was command number 89
const string items90[] = {"pro987","pro120",};
const int itemsNum90[] = {9,2,};
_testGetOrder(r,2, items90, itemsNum90);
std::cout << "last command was number: 90 " << std::endl;
// last command was command number 90
_testGetCheck(r);
std::cout << "last command was number: 91 " << std::endl;
// last command was command number 91
const string items92[] = {"pro255","pro262","pro294","pro720",};
const int itemsNum92[] = {1,4,-46,1,};
_testGetOrder(r,4, items92, itemsNum92);
std::cerr << "last output should be ERROR from command92" << std::endl;
 // last command was command number 92
const string items93[] = {"pro375","pro535","pro713","pro255",};
const int itemsNum93[] = {2,-30,5,9,};
_testGetOrder(r,4, items93, itemsNum93);
std::cerr << "last output should be ERROR from command93" << std::endl;
 // last command was command number 93
_testPrintTables(r);
std::cout << "last command was number: 94 " << std::endl;
// last command was command number 94
const string items95[] = {"pro158","pro988","pro742","pro379","pro7",};
const int itemsNum95[] = {6,6,8,4,9,};
_testGetOrder(r,5, items95, itemsNum95);
std::cerr << "last output should be ERROR from command95" << std::endl;
 // last command was command number 95
_testPrintProfits(r);
std::cout << "last command was number: 96 " << std::endl;
// last command was command number 96
const string items97[] = {"pro208","pro136","pro713","pro335","pro120",};
const int itemsNum97[] = {5,7,4,6,8,};
_testGetOrder(r,5, items97, itemsNum97);
std::cerr << "last output should be ERROR from command97" << std::endl;
 // last command was command number 97
_testPrintOpenOrders(r);
std::cout << "last command was number: 98 " << std::endl;
// last command was command number 98
_testPrintOpenOrders(r);
std::cout << "last command was number: 99 " << std::endl;
// last command was command number 99
_testPrintServedList(r);
std::cout << "last command was number: 100 " << std::endl;
// last command was command number 100
const string items101[] = {"pro230","pro757","pro241","bad product!","pro417",};
const int itemsNum101[] = {10,6,5,-62,10,};
_testGetOrder(r,5, items101, itemsNum101);
std::cerr << "last output should be ERROR from command101" << std::endl;
 // last command was command number 101
_testGetCheck(r);
std::cout << "last command was number: 102 " << std::endl;
// last command was command number 102
const string items103[] = {"bad product!","pro987","pro959",};
const int itemsNum103[] = {6,7,-12,};
_testGetOrder(r,3, items103, itemsNum103);
std::cerr << "last output should be ERROR from command103" << std::endl;
 // last command was command number 103
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command104" << std::endl;
 // last command was command number 104
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command105" << std::endl;
 // last command was command number 105
const string items106[] = {"pro351","pro703","pro154",};
const int itemsNum106[] = {1,8,8,};
_testGetOrder(r,3, items106, itemsNum106);
std::cerr << "last output should be ERROR from command106" << std::endl;
 // last command was command number 106
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command107" << std::endl;
 // last command was command number 107
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command108" << std::endl;
 // last command was command number 108
_testGetCheck(r);
std::cerr << "last output should be ERROR from command109" << std::endl;
 // last command was command number 109
const string items110[] = {"pro158",};
const int itemsNum110[] = {4,};
_testGetOrder(r,-84, items110, itemsNum110);
std::cerr << "last output should be ERROR from command110" << std::endl;
 // last command was command number 110
_testGetCheck(r);
std::cerr << "last output should be ERROR from command111" << std::endl;
 // last command was command number 111
const string items112[] = {"pro733","bad product!",};
const int itemsNum112[] = {3,8,};
_testGetOrder(r,-97, items112, itemsNum112);
std::cerr << "last output should be ERROR from command112" << std::endl;
 // last command was command number 112
_testPrintCheckList(r);
std::cout << "last command was number: 113 " << std::endl;
// last command was command number 113
const string items114[] = {"bad product!",};
const int itemsNum114[] = {2,};
_testGetOrder(r,-83, items114, itemsNum114);
std::cerr << "last output should be ERROR from command114" << std::endl;
 // last command was command number 114
_testGetCheck(r);
std::cerr << "last output should be ERROR from command115" << std::endl;
 // last command was command number 115
_testPrintTables(r);
std::cout << "last command was number: 116 " << std::endl;
// last command was command number 116
_testSitAtTable(r);
std::cout << "last command was number: 117 " << std::endl;
// last command was command number 117
_testPrintOpenOrders(r);
std::cout << "last command was number: 118 " << std::endl;
// last command was command number 118
_testGetCheck(r);
std::cerr << "last output should be ERROR from command119" << std::endl;
 // last command was command number 119
const string items120[] = {"bad product!",};
const int itemsNum120[] = {7,};
_testGetOrder(r,1, items120, itemsNum120);
std::cerr << "last output should be ERROR from command120" << std::endl;
 // last command was command number 120
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command121" << std::endl;
 // last command was command number 121
_testGetCheck(r);
std::cerr << "last output should be ERROR from command122" << std::endl;
 // last command was command number 122
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command123" << std::endl;
 // last command was command number 123
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command124" << std::endl;
 // last command was command number 124
const string items125[] = {"pro457","pro138",};
const int itemsNum125[] = {8,5,};
_testGetOrder(r,-14, items125, itemsNum125);
std::cerr << "last output should be ERROR from command125" << std::endl;
 // last command was command number 125
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command126" << std::endl;
 // last command was command number 126
_testSitAtTable(r);
std::cout << "last command was number: 127 " << std::endl;
// last command was command number 127
const string items128[] = {"pro595","pro977",};
const int itemsNum128[] = {4,2,};
_testGetOrder(r,2, items128, itemsNum128);
std::cout << "last command was number: 128 " << std::endl;
// last command was command number 128
_testGetCheck(r);
std::cout << "last command was number: 129 " << std::endl;
// last command was command number 129
_testPrintProfits(r);
std::cout << "last command was number: 130 " << std::endl;
// last command was command number 130
_testGetCheck(r);
std::cerr << "last output should be ERROR from command131" << std::endl;
 // last command was command number 131
const string items132[] = {"pro248","pro279","pro736","pro977","pro255",};
const int itemsNum132[] = {9,8,1,-54,9,};
_testGetOrder(r,-59, items132, itemsNum132);
std::cerr << "last output should be ERROR from command132" << std::endl;
 // last command was command number 132
_testPrintProfits(r);
std::cout << "last command was number: 133 " << std::endl;
// last command was command number 133
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command134" << std::endl;
 // last command was command number 134
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command135" << std::endl;
 // last command was command number 135
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command136" << std::endl;
 // last command was command number 136
_testGetCheck(r);
std::cerr << "last output should be ERROR from command137" << std::endl;
 // last command was command number 137
_testPrintOpenOrders(r);
std::cout << "last command was number: 138 " << std::endl;
// last command was command number 138
_testGetCheck(r);
std::cerr << "last output should be ERROR from command139" << std::endl;
 // last command was command number 139
const string items140[] = {"pro154","pro740","pro981","pro539","pro457",};
const int itemsNum140[] = {8,5,8,3,3,};
_testGetOrder(r,5, items140, itemsNum140);
std::cout << "last command was number: 140 " << std::endl;
// last command was command number 140
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command141" << std::endl;
 // last command was command number 141
const string items142[] = {"pro709","pro605","pro981",};
const int itemsNum142[] = {-57,9,3,};
_testGetOrder(r,3, items142, itemsNum142);
std::cerr << "last output should be ERROR from command142" << std::endl;
 // last command was command number 142
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command143" << std::endl;
 // last command was command number 143
const string items144[] = {"pro397","pro810",};
const int itemsNum144[] = {4,-40,};
_testGetOrder(r,2, items144, itemsNum144);
std::cerr << "last output should be ERROR from command144" << std::endl;
 // last command was command number 144
_testPrintWaitList(r);
std::cout << "last command was number: 145 " << std::endl;
// last command was command number 145
const string items146[] = {"pro987","pro375","pro240","pro303","pro575",};
const int itemsNum146[] = {6,9,8,3,-45,};
_testGetOrder(r,5, items146, itemsNum146);
std::cerr << "last output should be ERROR from command146" << std::endl;
 // last command was command number 146
_testGetCheck(r);
std::cout << "last command was number: 147 " << std::endl;
// last command was command number 147
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command148" << std::endl;
 // last command was command number 148
const string items149[] = {"pro240","pro331","pro895","bad product!",};
const int itemsNum149[] = {6,2,8,9,};
_testGetOrder(r,-16, items149, itemsNum149);
std::cerr << "last output should be ERROR from command149" << std::endl;
 // last command was command number 149
const string items150[] = {"pro981","pro154","pro156",};
const int itemsNum150[] = {5,1,7,};
_testGetOrder(r,3, items150, itemsNum150);
std::cerr << "last output should be ERROR from command150" << std::endl;
 // last command was command number 150
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command151" << std::endl;
 // last command was command number 151
_testGetCheck(r);
std::cerr << "last output should be ERROR from command152" << std::endl;
 // last command was command number 152
const string items153[] = {"pro966","pro365","pro981",};
const int itemsNum153[] = {6,-100,10,};
_testGetOrder(r,3, items153, itemsNum153);
std::cerr << "last output should be ERROR from command153" << std::endl;
 // last command was command number 153
_testPrintOpenOrders(r);
std::cout << "last command was number: 154 " << std::endl;
// last command was command number 154
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command155" << std::endl;
 // last command was command number 155
_testPrintWaitList(r);
std::cout << "last command was number: 156 " << std::endl;
// last command was command number 156
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command157" << std::endl;
 // last command was command number 157
_testGetCheck(r);
std::cerr << "last output should be ERROR from command158" << std::endl;
 // last command was command number 158
const string items159[] = {"pro6","pro929","pro303",};
const int itemsNum159[] = {4,7,2,};
_testGetOrder(r,3, items159, itemsNum159);
std::cerr << "last output should be ERROR from command159" << std::endl;
 // last command was command number 159
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command160" << std::endl;
 // last command was command number 160
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command161" << std::endl;
 // last command was command number 161
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command162" << std::endl;
 // last command was command number 162
_testGetCheck(r);
std::cerr << "last output should be ERROR from command163" << std::endl;
 // last command was command number 163
_testGetCheck(r);
std::cerr << "last output should be ERROR from command164" << std::endl;
 // last command was command number 164
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command165" << std::endl;
 // last command was command number 165
_testGetCheck(r);
std::cerr << "last output should be ERROR from command166" << std::endl;
 // last command was command number 166
_testGetCheck(r);
std::cerr << "last output should be ERROR from command167" << std::endl;
 // last command was command number 167
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command168" << std::endl;
 // last command was command number 168
_testAddToWaitList(r,77);
std::cout << "last command was number: 169 " << std::endl;
// last command was command number 169
const string items170[] = {"pro742","pro325","pro402",};
const int itemsNum170[] = {7,10,10,};
_testGetOrder(r,3, items170, itemsNum170);
std::cerr << "last output should be ERROR from command170" << std::endl;
 // last command was command number 170
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command171" << std::endl;
 // last command was command number 171
_testGetCheck(r);
std::cerr << "last output should be ERROR from command172" << std::endl;
 // last command was command number 172
_testGetCheck(r);
std::cerr << "last output should be ERROR from command173" << std::endl;
 // last command was command number 173
_testPrintOpenOrders(r);
std::cout << "last command was number: 174 " << std::endl;
// last command was command number 174
_testSitAtTable(r);
std::cout << "last command was number: 175 " << std::endl;
// last command was command number 175
const string items176[] = {"pro148",};
const int itemsNum176[] = {4,};
_testGetOrder(r,1, items176, itemsNum176);
std::cout << "last command was number: 176 " << std::endl;
// last command was command number 176
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command177" << std::endl;
 // last command was command number 177
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command178" << std::endl;
 // last command was command number 178
const string items179[] = {"pro959","pro201","pro148",};
const int itemsNum179[] = {10,4,-86,};
_testGetOrder(r,3, items179, itemsNum179);
std::cerr << "last output should be ERROR from command179" << std::endl;
 // last command was command number 179
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command180" << std::endl;
 // last command was command number 180
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command181" << std::endl;
 // last command was command number 181
_testPrintTables(r);
std::cout << "last command was number: 182 " << std::endl;
// last command was command number 182
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command183" << std::endl;
 // last command was command number 183
const string items184[] = {"pro929","pro959","bad product!","pro397","pro508",};
const int itemsNum184[] = {4,6,3,9,5,};
_testGetOrder(r,5, items184, itemsNum184);
std::cerr << "last output should be ERROR from command184" << std::endl;
 // last command was command number 184
const string items185[] = {"pro855","pro491","pro720",};
const int itemsNum185[] = {5,6,8,};
_testGetOrder(r,3, items185, itemsNum185);
std::cerr << "last output should be ERROR from command185" << std::endl;
 // last command was command number 185
_testPrintServedList(r);
std::cout << "last command was number: 186 " << std::endl;
// last command was command number 186
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command187" << std::endl;
 // last command was command number 187
const string items188[] = {"bad product!",};
const int itemsNum188[] = {6,};
_testGetOrder(r,-15, items188, itemsNum188);
std::cerr << "last output should be ERROR from command188" << std::endl;
 // last command was command number 188
_testPrintServedList(r);
std::cout << "last command was number: 189 " << std::endl;
// last command was command number 189
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command190" << std::endl;
 // last command was command number 190
const string items191[] = {"pro702",};
const int itemsNum191[] = {1,};
_testGetOrder(r,1, items191, itemsNum191);
std::cerr << "last output should be ERROR from command191" << std::endl;
 // last command was command number 191
_testAddToWaitList(r,75);
std::cout << "last command was number: 192 " << std::endl;
// last command was command number 192
const string items193[] = {"pro457","pro977","pro966","pro605",};
const int itemsNum193[] = {5,-91,7,8,};
_testGetOrder(r,4, items193, itemsNum193);
std::cerr << "last output should be ERROR from command193" << std::endl;
 // last command was command number 193
const string items194[] = {"pro7","pro745","bad product!",};
const int itemsNum194[] = {8,7,1,};
_testGetOrder(r,3, items194, itemsNum194);
std::cerr << "last output should be ERROR from command194" << std::endl;
 // last command was command number 194
const string items195[] = {"pro77","pro966","pro255","pro201",};
const int itemsNum195[] = {9,2,6,-29,};
_testGetOrder(r,-28, items195, itemsNum195);
std::cerr << "last output should be ERROR from command195" << std::endl;
 // last command was command number 195
_testPrintCheckList(r);
std::cout << "last command was number: 196 " << std::endl;
// last command was command number 196
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command197" << std::endl;
 // last command was command number 197
const string items198[] = {"pro543",};
const int itemsNum198[] = {-45,};
_testGetOrder(r,1, items198, itemsNum198);
std::cerr << "last output should be ERROR from command198" << std::endl;
 // last command was command number 198
const string items199[] = {"bad product!","pro136",};
const int itemsNum199[] = {1,2,};
_testGetOrder(r,2, items199, itemsNum199);
std::cerr << "last output should be ERROR from command199" << std::endl;
 // last command was command number 199
const string items200[] = {"pro575","pro740",};
const int itemsNum200[] = {8,9,};
_testGetOrder(r,2, items200, itemsNum200);
std::cerr << "last output should be ERROR from command200" << std::endl;
 // last command was command number 200
const string items201[] = {"bad product!","pro390","pro240",};
const int itemsNum201[] = {-69,4,3,};
_testGetOrder(r,3, items201, itemsNum201);
std::cerr << "last output should be ERROR from command201" << std::endl;
 // last command was command number 201
_testPrintTables(r);
std::cout << "last command was number: 202 " << std::endl;
// last command was command number 202
const string items203[] = {"pro299","pro285","pro335","pro719",};
const int itemsNum203[] = {2,3,5,9,};
_testGetOrder(r,4, items203, itemsNum203);
std::cerr << "last output should be ERROR from command203" << std::endl;
 // last command was command number 203
const string items204[] = {"pro947","pro248","pro605",};
const int itemsNum204[] = {9,10,4,};
_testGetOrder(r,3, items204, itemsNum204);
std::cerr << "last output should be ERROR from command204" << std::endl;
 // last command was command number 204
_testPrintProfits(r);
std::cout << "last command was number: 205 " << std::endl;
// last command was command number 205
_testSitAtTable(r);
std::cout << "last command was number: 206 " << std::endl;
// last command was command number 206
_testPrintWaitList(r);
std::cout << "last command was number: 207 " << std::endl;
// last command was command number 207
_testPrintCheckList(r);
std::cout << "last command was number: 208 " << std::endl;
// last command was command number 208
const string items209[] = {"pro335","pro605","pro810","pro502",};
const int itemsNum209[] = {9,7,5,6,};
_testGetOrder(r,-8, items209, itemsNum209);
std::cerr << "last output should be ERROR from command209" << std::endl;
 // last command was command number 209
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command210" << std::endl;
 // last command was command number 210
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command211" << std::endl;
 // last command was command number 211
const string items212[] = {"pro262",};
const int itemsNum212[] = {1,};
_testGetOrder(r,-77, items212, itemsNum212);
std::cerr << "last output should be ERROR from command212" << std::endl;
 // last command was command number 212
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command213" << std::endl;
 // last command was command number 213
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command214" << std::endl;
 // last command was command number 214
const string items215[] = {"pro956","pro154",};
const int itemsNum215[] = {3,8,};
_testGetOrder(r,2, items215, itemsNum215);
std::cout << "last command was number: 215 " << std::endl;
// last command was command number 215
_testAddToWaitList(r,78);
std::cout << "last command was number: 216 " << std::endl;
// last command was command number 216
_testSitAtTable(r);
std::cout << "last command was number: 217 " << std::endl;
// last command was command number 217
_testPrintServedList(r);
std::cout << "last command was number: 218 " << std::endl;
// last command was command number 218
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command219" << std::endl;
 // last command was command number 219
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command220" << std::endl;
 // last command was command number 220
const string items221[] = {"pro912","pro987","bad product!","pro457","pro328",};
const int itemsNum221[] = {4,5,5,3,2,};
_testGetOrder(r,5, items221, itemsNum221);
std::cerr << "last output should be ERROR from command221" << std::endl;
 // last command was command number 221
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command222" << std::endl;
 // last command was command number 222
_testPrintProfits(r);
std::cout << "last command was number: 223 " << std::endl;
// last command was command number 223
const string items224[] = {"pro299",};
const int itemsNum224[] = {-81,};
_testGetOrder(r,1, items224, itemsNum224);
std::cerr << "last output should be ERROR from command224" << std::endl;
 // last command was command number 224
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command225" << std::endl;
 // last command was command number 225
const string items226[] = {"bad product!",};
const int itemsNum226[] = {4,};
_testGetOrder(r,1, items226, itemsNum226);
std::cerr << "last output should be ERROR from command226" << std::endl;
 // last command was command number 226
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command227" << std::endl;
 // last command was command number 227
const string items228[] = {"pro947","pro545","pro184",};
const int itemsNum228[] = {5,6,2,};
_testGetOrder(r,3, items228, itemsNum228);
std::cout << "last command was number: 228 " << std::endl;
// last command was command number 228
_testGetCheck(r);
std::cout << "last command was number: 229 " << std::endl;
// last command was command number 229
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command230" << std::endl;
 // last command was command number 230
_testAddToWaitList(r,57);
std::cout << "last command was number: 231 " << std::endl;
// last command was command number 231
const string items232[] = {"pro417","pro745",};
const int itemsNum232[] = {10,9,};
_testGetOrder(r,2, items232, itemsNum232);
std::cerr << "last output should be ERROR from command232" << std::endl;
 // last command was command number 232
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command233" << std::endl;
 // last command was command number 233
_testPrintTables(r);
std::cout << "last command was number: 234 " << std::endl;
// last command was command number 234
const string items235[] = {"pro390","pro702","pro535","pro929",};
const int itemsNum235[] = {7,6,2,4,};
_testGetOrder(r,4, items235, itemsNum235);
std::cerr << "last output should be ERROR from command235" << std::endl;
 // last command was command number 235
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command236" << std::endl;
 // last command was command number 236
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command237" << std::endl;
 // last command was command number 237
_testGetCheck(r);
std::cout << "last command was number: 238 " << std::endl;
// last command was command number 238
_testGetCheck(r);
std::cout << "last command was number: 239 " << std::endl;
// last command was command number 239
_testGetCheck(r);
std::cerr << "last output should be ERROR from command240" << std::endl;
 // last command was command number 240
_testPrintServedList(r);
std::cout << "last command was number: 241 " << std::endl;
// last command was command number 241
const string items242[] = {"pro77","pro508","pro826","pro535","pro702",};
const int itemsNum242[] = {9,8,3,9,7,};
_testGetOrder(r,-15, items242, itemsNum242);
std::cerr << "last output should be ERROR from command242" << std::endl;
 // last command was command number 242
_testAddToWaitList(r,50);
std::cout << "last command was number: 243 " << std::endl;
// last command was command number 243
const string items244[] = {"pro592",};
const int itemsNum244[] = {5,};
_testGetOrder(r,1, items244, itemsNum244);
std::cerr << "last output should be ERROR from command244" << std::endl;
 // last command was command number 244
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command245" << std::endl;
 // last command was command number 245
const string items246[] = {"pro154","pro745","pro863",};
const int itemsNum246[] = {6,4,7,};
_testGetOrder(r,3, items246, itemsNum246);
std::cerr << "last output should be ERROR from command246" << std::endl;
 // last command was command number 246
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command247" << std::endl;
 // last command was command number 247
_testPrintCheckList(r);
std::cout << "last command was number: 248 " << std::endl;
// last command was command number 248
_testSitAtTable(r);
std::cout << "last command was number: 249 " << std::endl;
// last command was command number 249
const string items250[] = {"pro956","pro543","pro148","pro379",};
const int itemsNum250[] = {7,2,8,5,};
_testGetOrder(r,4, items250, itemsNum250);
std::cout << "last command was number: 250 " << std::endl;
// last command was command number 250
const string items251[] = {"pro535","pro138","bad product!","pro331","pro810",};
const int itemsNum251[] = {9,1,2,3,8,};
_testGetOrder(r,5, items251, itemsNum251);
std::cerr << "last output should be ERROR from command251" << std::endl;
 // last command was command number 251
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command252" << std::endl;
 // last command was command number 252
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command253" << std::endl;
 // last command was command number 253
_testAddToWaitList(r,78);
std::cout << "last command was number: 254 " << std::endl;
// last command was command number 254
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command255" << std::endl;
 // last command was command number 255
_testPrintProfits(r);
std::cout << "last command was number: 256 " << std::endl;
// last command was command number 256
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command257" << std::endl;
 // last command was command number 257
_testAddToWaitList(r,89);
std::cout << "last command was number: 258 " << std::endl;
// last command was command number 258
_testAddToWaitList(r,50);
std::cout << "last command was number: 259 " << std::endl;
// last command was command number 259
_testPrintOpenOrders(r);
std::cout << "last command was number: 260 " << std::endl;
// last command was command number 260
_testGetCheck(r);
std::cout << "last command was number: 261 " << std::endl;
// last command was command number 261
const string items262[] = {"pro325","pro745","pro575","pro545","pro381",};
const int itemsNum262[] = {9,9,9,5,1,};
_testGetOrder(r,5, items262, itemsNum262);
std::cerr << "last output should be ERROR from command262" << std::endl;
 // last command was command number 262
_testAddToWaitList(r,60);
std::cout << "last command was number: 263 " << std::endl;
// last command was command number 263
_testPrintWaitList(r);
std::cout << "last command was number: 264 " << std::endl;
// last command was command number 264
const string items265[] = {"pro351",};
const int itemsNum265[] = {-28,};
_testGetOrder(r,-71, items265, itemsNum265);
std::cerr << "last output should be ERROR from command265" << std::endl;
 // last command was command number 265
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command266" << std::endl;
 // last command was command number 266
const string items267[] = {"bad product!","pro240",};
const int itemsNum267[] = {4,8,};
_testGetOrder(r,-84, items267, itemsNum267);
std::cerr << "last output should be ERROR from command267" << std::endl;
 // last command was command number 267
_testGetCheck(r);
std::cerr << "last output should be ERROR from command268" << std::endl;
 // last command was command number 268
const string items269[] = {"pro713","pro330","pro608","pro745",};
const int itemsNum269[] = {-74,5,10,2,};
_testGetOrder(r,-91, items269, itemsNum269);
std::cerr << "last output should be ERROR from command269" << std::endl;
 // last command was command number 269
const string items270[] = {"pro760","pro156","bad product!","pro457",};
const int itemsNum270[] = {2,3,9,2,};
_testGetOrder(r,-86, items270, itemsNum270);
std::cerr << "last output should be ERROR from command270" << std::endl;
 // last command was command number 270
_testGetCheck(r);
std::cerr << "last output should be ERROR from command271" << std::endl;
 // last command was command number 271
_testGetCheck(r);
std::cerr << "last output should be ERROR from command272" << std::endl;
 // last command was command number 272
_testAddToWaitList(r,73);
std::cout << "last command was number: 273 " << std::endl;
// last command was command number 273
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command274" << std::endl;
 // last command was command number 274
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command275" << std::endl;
 // last command was command number 275
_testGetCheck(r);
std::cerr << "last output should be ERROR from command276" << std::endl;
 // last command was command number 276
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command277" << std::endl;
 // last command was command number 277
const string items278[] = {"pro331","pro740","pro243","pro736",};
const int itemsNum278[] = {10,4,7,4,};
_testGetOrder(r,4, items278, itemsNum278);
std::cerr << "last output should be ERROR from command278" << std::endl;
 // last command was command number 278
_testGetCheck(r);
std::cerr << "last output should be ERROR from command279" << std::endl;
 // last command was command number 279
const string items280[] = {"pro742","pro695","pro966","pro987","pro154",};
const int itemsNum280[] = {3,5,8,4,7,};
_testGetOrder(r,5, items280, itemsNum280);
std::cerr << "last output should be ERROR from command280" << std::endl;
 // last command was command number 280
const string items281[] = {"pro381","pro520","pro208","pro929",};
const int itemsNum281[] = {8,7,2,8,};
_testGetOrder(r,-10, items281, itemsNum281);
std::cerr << "last output should be ERROR from command281" << std::endl;
 // last command was command number 281
_testSitAtTable(r);
std::cout << "last command was number: 282 " << std::endl;
// last command was command number 282
const string items283[] = {"pro328","pro543","pro335","pro736","bad product!",};
const int itemsNum283[] = {8,1,9,9,1,};
_testGetOrder(r,5, items283, itemsNum283);
std::cerr << "last output should be ERROR from command283" << std::endl;
 // last command was command number 283
const string items284[] = {"pro491","pro330","pro746",};
const int itemsNum284[] = {3,9,6,};
_testGetOrder(r,3, items284, itemsNum284);
std::cout << "last command was number: 284 " << std::endl;
// last command was command number 284
_testAddToWaitList(r,81);
std::cout << "last command was number: 285 " << std::endl;
// last command was command number 285
_testAddToWaitList(r,94);
std::cout << "last command was number: 286 " << std::endl;
// last command was command number 286
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command287" << std::endl;
 // last command was command number 287
const string items288[] = {"pro703","pro987","pro331",};
const int itemsNum288[] = {9,5,10,};
_testGetOrder(r,3, items288, itemsNum288);
std::cerr << "last output should be ERROR from command288" << std::endl;
 // last command was command number 288
const string items289[] = {"bad product!",};
const int itemsNum289[] = {4,};
_testGetOrder(r,-61, items289, itemsNum289);
std::cerr << "last output should be ERROR from command289" << std::endl;
 // last command was command number 289
_testPrintProfits(r);
std::cout << "last command was number: 290 " << std::endl;
// last command was command number 290
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command291" << std::endl;
 // last command was command number 291
_testGetCheck(r);
std::cout << "last command was number: 292 " << std::endl;
// last command was command number 292
_testGetCheck(r);
std::cerr << "last output should be ERROR from command293" << std::endl;
 // last command was command number 293
_testPrintTables(r);
std::cout << "last command was number: 294 " << std::endl;
// last command was command number 294
_testPrintOpenOrders(r);
std::cout << "last command was number: 295 " << std::endl;
// last command was command number 295
_testGetCheck(r);
std::cerr << "last output should be ERROR from command296" << std::endl;
 // last command was command number 296
_testAddToWaitList(r,83);
std::cout << "last command was number: 297 " << std::endl;
// last command was command number 297
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command298" << std::endl;
 // last command was command number 298
_testPrintProfits(r);
std::cout << "last command was number: 299 " << std::endl;
// last command was command number 299
_testGetCheck(r);
std::cerr << "last output should be ERROR from command300" << std::endl;
 // last command was command number 300
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command301" << std::endl;
 // last command was command number 301
const string items302[] = {"pro713","pro855","pro299","pro608",};
const int itemsNum302[] = {9,2,8,2,};
_testGetOrder(r,4, items302, itemsNum302);
std::cerr << "last output should be ERROR from command302" << std::endl;
 // last command was command number 302
_testGetCheck(r);
std::cerr << "last output should be ERROR from command303" << std::endl;
 // last command was command number 303
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command304" << std::endl;
 // last command was command number 304
_testGetCheck(r);
std::cerr << "last output should be ERROR from command305" << std::endl;
 // last command was command number 305
_testPrintCheckList(r);
std::cout << "last command was number: 306 " << std::endl;
// last command was command number 306
_testGetCheck(r);
std::cerr << "last output should be ERROR from command307" << std::endl;
 // last command was command number 307
_testPrintTables(r);
std::cout << "last command was number: 308 " << std::endl;
// last command was command number 308
_testAddToWaitList(r,52);
std::cout << "last command was number: 309 " << std::endl;
// last command was command number 309
const string items310[] = {"pro417","pro379","pro253","pro248","pro575",};
const int itemsNum310[] = {5,6,5,3,4,};
_testGetOrder(r,5, items310, itemsNum310);
std::cerr << "last output should be ERROR from command310" << std::endl;
 // last command was command number 310
_testGetCheck(r);
std::cerr << "last output should be ERROR from command311" << std::endl;
 // last command was command number 311
_testGetCheck(r);
std::cerr << "last output should be ERROR from command312" << std::endl;
 // last command was command number 312
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command313" << std::endl;
 // last command was command number 313
_testAddToWaitList(r,52);
std::cout << "last command was number: 314 " << std::endl;
// last command was command number 314
_testGetCheck(r);
std::cerr << "last output should be ERROR from command315" << std::endl;
 // last command was command number 315
const string items316[] = {"pro351","pro365",};
const int itemsNum316[] = {8,-59,};
_testGetOrder(r,2, items316, itemsNum316);
std::cerr << "last output should be ERROR from command316" << std::endl;
 // last command was command number 316
_testAddToWaitList(r,59);
std::cout << "last command was number: 317 " << std::endl;
// last command was command number 317
_testPrintCheckList(r);
std::cout << "last command was number: 318 " << std::endl;
// last command was command number 318
_testPrintProfits(r);
std::cout << "last command was number: 319 " << std::endl;
// last command was command number 319
const string items320[] = {"pro299","pro740","pro330","bad product!",};
const int itemsNum320[] = {10,2,7,2,};
_testGetOrder(r,-80, items320, itemsNum320);
std::cerr << "last output should be ERROR from command320" << std::endl;
 // last command was command number 320
_testGetCheck(r);
std::cerr << "last output should be ERROR from command321" << std::endl;
 // last command was command number 321
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command322" << std::endl;
 // last command was command number 322
_testPrintProfits(r);
std::cout << "last command was number: 323 " << std::endl;
// last command was command number 323
const string items324[] = {"bad product!",};
const int itemsNum324[] = {5,};
_testGetOrder(r,1, items324, itemsNum324);
std::cerr << "last output should be ERROR from command324" << std::endl;
 // last command was command number 324
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command325" << std::endl;
 // last command was command number 325
_testGetCheck(r);
std::cerr << "last output should be ERROR from command326" << std::endl;
 // last command was command number 326
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command327" << std::endl;
 // last command was command number 327
const string items328[] = {"pro977","pro709","pro335",};
const int itemsNum328[] = {-21,6,8,};
_testGetOrder(r,3, items328, itemsNum328);
std::cerr << "last output should be ERROR from command328" << std::endl;
 // last command was command number 328
const string items329[] = {"pro826","pro136","pro733","pro539","pro156",};
const int itemsNum329[] = {1,2,5,6,3,};
_testGetOrder(r,5, items329, itemsNum329);
std::cerr << "last output should be ERROR from command329" << std::endl;
 // last command was command number 329
_testAddToWaitList(r,80);
std::cout << "last command was number: 330 " << std::endl;
// last command was command number 330
_testGetCheck(r);
std::cerr << "last output should be ERROR from command331" << std::endl;
 // last command was command number 331
const string items332[] = {"pro167",};
const int itemsNum332[] = {5,};
_testGetOrder(r,-91, items332, itemsNum332);
std::cerr << "last output should be ERROR from command332" << std::endl;
 // last command was command number 332
_testGetCheck(r);
std::cerr << "last output should be ERROR from command333" << std::endl;
 // last command was command number 333
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command334" << std::endl;
 // last command was command number 334
_testGetCheck(r);
std::cerr << "last output should be ERROR from command335" << std::endl;
 // last command was command number 335
_testPrintOpenOrders(r);
std::cout << "last command was number: 336 " << std::endl;
// last command was command number 336
_testGetCheck(r);
std::cerr << "last output should be ERROR from command337" << std::endl;
 // last command was command number 337
const string items338[] = {"pro595","pro377","pro154",};
const int itemsNum338[] = {2,8,2,};
_testGetOrder(r,-80, items338, itemsNum338);
std::cerr << "last output should be ERROR from command338" << std::endl;
 // last command was command number 338
_testGetCheck(r);
std::cerr << "last output should be ERROR from command339" << std::endl;
 // last command was command number 339
_testPrintCheckList(r);
std::cout << "last command was number: 340 " << std::endl;
// last command was command number 340
_testPrintCheckList(r);
std::cout << "last command was number: 341 " << std::endl;
// last command was command number 341
_testGetCheck(r);
std::cerr << "last output should be ERROR from command342" << std::endl;
 // last command was command number 342
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command343" << std::endl;
 // last command was command number 343
const string items344[] = {"pro746","pro713",};
const int itemsNum344[] = {-49,9,};
_testGetOrder(r,2, items344, itemsNum344);
std::cerr << "last output should be ERROR from command344" << std::endl;
 // last command was command number 344
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command345" << std::endl;
 // last command was command number 345
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command346" << std::endl;
 // last command was command number 346
_testGetCheck(r);
std::cerr << "last output should be ERROR from command347" << std::endl;
 // last command was command number 347
_testGetCheck(r);
std::cerr << "last output should be ERROR from command348" << std::endl;
 // last command was command number 348
_testPrintTables(r);
std::cout << "last command was number: 349 " << std::endl;
// last command was command number 349
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command350" << std::endl;
 // last command was command number 350
_testGetCheck(r);
std::cerr << "last output should be ERROR from command351" << std::endl;
 // last command was command number 351
const string items352[] = {"pro959","pro433",};
const int itemsNum352[] = {2,-75,};
_testGetOrder(r,2, items352, itemsNum352);
std::cerr << "last output should be ERROR from command352" << std::endl;
 // last command was command number 352
_testAddToWaitList(r,56);
std::cout << "last command was number: 353 " << std::endl;
// last command was command number 353
_testSitAtTable(r);
std::cout << "last command was number: 354 " << std::endl;
// last command was command number 354
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command355" << std::endl;
 // last command was command number 355
_testPrintCheckList(r);
std::cout << "last command was number: 356 " << std::endl;
// last command was command number 356
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command357" << std::endl;
 // last command was command number 357
_testPrintTables(r);
std::cout << "last command was number: 358 " << std::endl;
// last command was command number 358
_testPrintOpenOrders(r);
std::cout << "last command was number: 359 " << std::endl;
// last command was command number 359
const string items360[] = {"pro390","bad product!","pro947",};
const int itemsNum360[] = {5,1,9,};
_testGetOrder(r,3, items360, itemsNum360);
std::cerr << "last output should be ERROR from command360" << std::endl;
 // last command was command number 360
const string items361[] = {"pro279","pro262","pro966","pro661","pro148",};
const int itemsNum361[] = {5,9,2,1,5,};
_testGetOrder(r,-83, items361, itemsNum361);
std::cerr << "last output should be ERROR from command361" << std::endl;
 // last command was command number 361
const string items362[] = {"pro156","pro374",};
const int itemsNum362[] = {10,5,};
_testGetOrder(r,-88, items362, itemsNum362);
std::cerr << "last output should be ERROR from command362" << std::endl;
 // last command was command number 362
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command363" << std::endl;
 // last command was command number 363
const string items364[] = {"pro703","pro457",};
const int itemsNum364[] = {4,9,};
_testGetOrder(r,-52, items364, itemsNum364);
std::cerr << "last output should be ERROR from command364" << std::endl;
 // last command was command number 364
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command365" << std::endl;
 // last command was command number 365
_testPrintCheckList(r);
std::cout << "last command was number: 366 " << std::endl;
// last command was command number 366
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command367" << std::endl;
 // last command was command number 367
const string items368[] = {"pro740","pro138",};
const int itemsNum368[] = {4,4,};
_testGetOrder(r,-20, items368, itemsNum368);
std::cerr << "last output should be ERROR from command368" << std::endl;
 // last command was command number 368
const string items369[] = {"pro895","pro863","pro299",};
const int itemsNum369[] = {7,3,6,};
_testGetOrder(r,-82, items369, itemsNum369);
std::cerr << "last output should be ERROR from command369" << std::endl;
 // last command was command number 369
const string items370[] = {"pro299","pro397","pro713",};
const int itemsNum370[] = {9,4,10,};
_testGetOrder(r,3, items370, itemsNum370);
std::cout << "last command was number: 370 " << std::endl;
// last command was command number 370
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command371" << std::endl;
 // last command was command number 371
_testPrintProfits(r);
std::cout << "last command was number: 372 " << std::endl;
// last command was command number 372
const string items373[] = {"bad product!","pro77","pro520",};
const int itemsNum373[] = {1,1,9,};
_testGetOrder(r,-100, items373, itemsNum373);
std::cerr << "last output should be ERROR from command373" << std::endl;
 // last command was command number 373
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command374" << std::endl;
 // last command was command number 374
const string items375[] = {"pro535","pro335","pro294",};
const int itemsNum375[] = {1,2,9,};
_testGetOrder(r,-9, items375, itemsNum375);
std::cerr << "last output should be ERROR from command375" << std::endl;
 // last command was command number 375
_testGetCheck(r);
std::cout << "last command was number: 376 " << std::endl;
// last command was command number 376
const string items377[] = {"pro208","pro826","pro491",};
const int itemsNum377[] = {9,1,7,};
_testGetOrder(r,3, items377, itemsNum377);
std::cerr << "last output should be ERROR from command377" << std::endl;
 // last command was command number 377
_testPrintOpenOrders(r);
std::cout << "last command was number: 378 " << std::endl;
// last command was command number 378
const string items379[] = {"pro956",};
const int itemsNum379[] = {5,};
_testGetOrder(r,-4, items379, itemsNum379);
std::cerr << "last output should be ERROR from command379" << std::endl;
 // last command was command number 379
_testGetCheck(r);
std::cerr << "last output should be ERROR from command380" << std::endl;
 // last command was command number 380
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command381" << std::endl;
 // last command was command number 381
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command382" << std::endl;
 // last command was command number 382
_testAddToWaitList(r,50);
std::cout << "last command was number: 383 " << std::endl;
// last command was command number 383
_testGetCheck(r);
std::cerr << "last output should be ERROR from command384" << std::endl;
 // last command was command number 384
const string items385[] = {"pro303","pro863","pro184","pro760","pro736",};
const int itemsNum385[] = {5,9,2,3,6,};
_testGetOrder(r,-90, items385, itemsNum385);
std::cerr << "last output should be ERROR from command385" << std::endl;
 // last command was command number 385
const string items386[] = {"bad product!","pro768","pro381","pro966","pro746",};
const int itemsNum386[] = {1,8,4,7,2,};
_testGetOrder(r,-27, items386, itemsNum386);
std::cerr << "last output should be ERROR from command386" << std::endl;
 // last command was command number 386
_testAddToWaitList(r,66);
std::cout << "last command was number: 387 " << std::endl;
// last command was command number 387
_testAddToWaitList(r,55);
std::cout << "last command was number: 388 " << std::endl;
// last command was command number 388
_testGetCheck(r);
std::cerr << "last output should be ERROR from command389" << std::endl;
 // last command was command number 389
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command390" << std::endl;
 // last command was command number 390
_testSitAtTable(r);
std::cout << "last command was number: 391 " << std::endl;
// last command was command number 391
const string items392[] = {"pro508",};
const int itemsNum392[] = {-56,};
_testGetOrder(r,1, items392, itemsNum392);
std::cerr << "last output should be ERROR from command392" << std::endl;
 // last command was command number 392
_testGetCheck(r);
std::cerr << "last output should be ERROR from command393" << std::endl;
 // last command was command number 393
_testPrintTables(r);
std::cout << "last command was number: 394 " << std::endl;
// last command was command number 394
const string items395[] = {"pro491","pro167","bad product!",};
const int itemsNum395[] = {7,5,9,};
_testGetOrder(r,3, items395, itemsNum395);
std::cerr << "last output should be ERROR from command395" << std::endl;
 // last command was command number 395
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command396" << std::endl;
 // last command was command number 396
_testAddToWaitList(r,86);
std::cout << "last command was number: 397 " << std::endl;
// last command was command number 397
const string items398[] = {"pro742","pro855","bad product!",};
const int itemsNum398[] = {8,7,7,};
_testGetOrder(r,3, items398, itemsNum398);
std::cerr << "last output should be ERROR from command398" << std::endl;
 // last command was command number 398
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command399" << std::endl;
 // last command was command number 399
const string items400[] = {"pro768","pro661","pro390","pro977",};
const int itemsNum400[] = {9,3,9,-23,};
_testGetOrder(r,4, items400, itemsNum400);
std::cerr << "last output should be ERROR from command400" << std::endl;
 // last command was command number 400
_testGetCheck(r);
std::cerr << "last output should be ERROR from command401" << std::endl;
 // last command was command number 401
_testGetCheck(r);
std::cerr << "last output should be ERROR from command402" << std::endl;
 // last command was command number 402
const string items403[] = {"bad product!","pro379","pro987",};
const int itemsNum403[] = {1,8,1,};
_testGetOrder(r,3, items403, itemsNum403);
std::cerr << "last output should be ERROR from command403" << std::endl;
 // last command was command number 403
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command404" << std::endl;
 // last command was command number 404
const string items405[] = {"pro325","pro608",};
const int itemsNum405[] = {-71,8,};
_testGetOrder(r,2, items405, itemsNum405);
std::cerr << "last output should be ERROR from command405" << std::endl;
 // last command was command number 405
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command406" << std::endl;
 // last command was command number 406
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command407" << std::endl;
 // last command was command number 407
const string items408[] = {"pro294","pro6",};
const int itemsNum408[] = {4,3,};
_testGetOrder(r,2, items408, itemsNum408);
std::cout << "last command was number: 408 " << std::endl;
// last command was command number 408
const string items409[] = {"pro740","pro502","pro248","bad product!",};
const int itemsNum409[] = {2,5,-75,7,};
_testGetOrder(r,4, items409, itemsNum409);
std::cerr << "last output should be ERROR from command409" << std::endl;
 // last command was command number 409
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command410" << std::endl;
 // last command was command number 410
const string items411[] = {"pro241","pro299","pro328","pro6",};
const int itemsNum411[] = {7,2,6,10,};
_testGetOrder(r,-100, items411, itemsNum411);
std::cerr << "last output should be ERROR from command411" << std::endl;
 // last command was command number 411
_testAddToWaitList(r,78);
std::cout << "last command was number: 412 " << std::endl;
// last command was command number 412
const string items413[] = {"pro77","pro129","pro243","pro440","pro136",};
const int itemsNum413[] = {6,6,10,9,7,};
_testGetOrder(r,5, items413, itemsNum413);
std::cerr << "last output should be ERROR from command413" << std::endl;
 // last command was command number 413
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command414" << std::endl;
 // last command was command number 414
_testSitAtTable(r);
std::cout << "last command was number: 415 " << std::endl;
// last command was command number 415
const string items416[] = {"pro328","pro374","pro390",};
const int itemsNum416[] = {5,3,4,};
_testGetOrder(r,3, items416, itemsNum416);
std::cout << "last command was number: 416 " << std::endl;
// last command was command number 416
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command417" << std::endl;
 // last command was command number 417
const string items418[] = {"pro981","pro457",};
const int itemsNum418[] = {6,5,};
_testGetOrder(r,2, items418, itemsNum418);
std::cerr << "last output should be ERROR from command418" << std::endl;
 // last command was command number 418
const string items419[] = {"pro895",};
const int itemsNum419[] = {6,};
_testGetOrder(r,-78, items419, itemsNum419);
std::cerr << "last output should be ERROR from command419" << std::endl;
 // last command was command number 419
_testPrintProfits(r);
std::cout << "last command was number: 420 " << std::endl;
// last command was command number 420
_testSitAtTable(r);
std::cout << "last command was number: 421 " << std::endl;
// last command was command number 421
const string items422[] = {"pro303","pro988","pro299","bad product!",};
const int itemsNum422[] = {6,4,2,1,};
_testGetOrder(r,4, items422, itemsNum422);
std::cerr << "last output should be ERROR from command422" << std::endl;
 // last command was command number 422
const string items423[] = {"bad product!","pro740","pro137","pro605","pro947",};
const int itemsNum423[] = {7,5,3,8,3,};
_testGetOrder(r,5, items423, itemsNum423);
std::cerr << "last output should be ERROR from command423" << std::endl;
 // last command was command number 423
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command424" << std::endl;
 // last command was command number 424
const string items425[] = {"pro240","pro539","pro595",};
const int itemsNum425[] = {-77,4,3,};
_testGetOrder(r,-8, items425, itemsNum425);
std::cerr << "last output should be ERROR from command425" << std::endl;
 // last command was command number 425
_testGetCheck(r);
std::cout << "last command was number: 426 " << std::endl;
// last command was command number 426
_testAddToWaitList(r,67);
std::cout << "last command was number: 427 " << std::endl;
// last command was command number 427
_testPrintCheckList(r);
std::cout << "last command was number: 428 " << std::endl;
// last command was command number 428
const string items429[] = {"pro158","pro241","pro956",};
const int itemsNum429[] = {8,3,7,};
_testGetOrder(r,3, items429, itemsNum429);
std::cout << "last command was number: 429 " << std::endl;
// last command was command number 429
_testSitAtTable(r);
std::cout << "last command was number: 430 " << std::endl;
// last command was command number 430
const string items431[] = {"pro299","pro539","pro213",};
const int itemsNum431[] = {8,6,2,};
_testGetOrder(r,3, items431, itemsNum431);
std::cout << "last command was number: 431 " << std::endl;
// last command was command number 431
const string items432[] = {"pro253","pro545","pro365","pro136","pro390",};
const int itemsNum432[] = {5,1,10,5,9,};
_testGetOrder(r,5, items432, itemsNum432);
std::cerr << "last output should be ERROR from command432" << std::endl;
 // last command was command number 432
const string items433[] = {"pro377","pro988","pro502","pro331","pro768",};
const int itemsNum433[] = {8,1,5,6,6,};
_testGetOrder(r,5, items433, itemsNum433);
std::cerr << "last output should be ERROR from command433" << std::endl;
 // last command was command number 433
const string items434[] = {"pro136","pro720","pro299",};
const int itemsNum434[] = {9,2,4,};
_testGetOrder(r,-68, items434, itemsNum434);
std::cerr << "last output should be ERROR from command434" << std::endl;
 // last command was command number 434
const string items435[] = {"pro262","pro988","pro184",};
const int itemsNum435[] = {-54,1,5,};
_testGetOrder(r,-38, items435, itemsNum435);
std::cerr << "last output should be ERROR from command435" << std::endl;
 // last command was command number 435
const string items436[] = {"pro330",};
const int itemsNum436[] = {3,};
_testGetOrder(r,1, items436, itemsNum436);
std::cerr << "last output should be ERROR from command436" << std::endl;
 // last command was command number 436
_testGetCheck(r);
std::cout << "last command was number: 437 " << std::endl;
// last command was command number 437
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command438" << std::endl;
 // last command was command number 438
const string items439[] = {"pro303",};
const int itemsNum439[] = {-31,};
_testGetOrder(r,-85, items439, itemsNum439);
std::cerr << "last output should be ERROR from command439" << std::endl;
 // last command was command number 439
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command440" << std::endl;
 // last command was command number 440
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command441" << std::endl;
 // last command was command number 441
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command442" << std::endl;
 // last command was command number 442
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command443" << std::endl;
 // last command was command number 443
_testPrintProfits(r);
std::cout << "last command was number: 444 " << std::endl;
// last command was command number 444
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command445" << std::endl;
 // last command was command number 445
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command446" << std::endl;
 // last command was command number 446
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command447" << std::endl;
 // last command was command number 447
const string items448[] = {"pro138","pro230","pro872","pro539","pro156",};
const int itemsNum448[] = {1,5,5,4,7,};
_testGetOrder(r,5, items448, itemsNum448);
std::cerr << "last output should be ERROR from command448" << std::endl;
 // last command was command number 448
_testAddToWaitList(r,79);
std::cout << "last command was number: 449 " << std::endl;
// last command was command number 449
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command450" << std::endl;
 // last command was command number 450
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command451" << std::endl;
 // last command was command number 451
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command452" << std::endl;
 // last command was command number 452
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command453" << std::endl;
 // last command was command number 453
_testGetCheck(r);
std::cout << "last command was number: 454 " << std::endl;
// last command was command number 454
const string items455[] = {"pro987",};
const int itemsNum455[] = {-77,};
_testGetOrder(r,-2, items455, itemsNum455);
std::cerr << "last output should be ERROR from command455" << std::endl;
 // last command was command number 455
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command456" << std::endl;
 // last command was command number 456
_testPrintTables(r);
std::cout << "last command was number: 457 " << std::endl;
// last command was command number 457
const string items458[] = {"pro120","pro608","pro520","pro184",};
const int itemsNum458[] = {1,4,3,8,};
_testGetOrder(r,4, items458, itemsNum458);
std::cerr << "last output should be ERROR from command458" << std::endl;
 // last command was command number 458
_testSitAtTable(r);
std::cout << "last command was number: 459 " << std::endl;
// last command was command number 459
const string items460[] = {"bad product!",};
const int itemsNum460[] = {4,};
_testGetOrder(r,1, items460, itemsNum460);
std::cerr << "last output should be ERROR from command460" << std::endl;
 // last command was command number 460
_testGetCheck(r);
std::cout << "last command was number: 461 " << std::endl;
// last command was command number 461
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command462" << std::endl;
 // last command was command number 462
const string items463[] = {"pro733","pro534","pro595",};
const int itemsNum463[] = {2,7,3,};
_testGetOrder(r,-41, items463, itemsNum463);
std::cerr << "last output should be ERROR from command463" << std::endl;
 // last command was command number 463
_testGetCheck(r);
std::cerr << "last output should be ERROR from command464" << std::endl;
 // last command was command number 464
_testSitAtTable(r);
std::cout << "last command was number: 465 " << std::endl;
// last command was command number 465
const string items466[] = {"bad product!",};
const int itemsNum466[] = {10,};
_testGetOrder(r,1, items466, itemsNum466);
std::cerr << "last output should be ERROR from command466" << std::endl;
 // last command was command number 466
_testAddToWaitList(r,82);
std::cout << "last command was number: 467 " << std::endl;
// last command was command number 467
const string items468[] = {"pro402","pro457","pro240","pro872","bad product!",};
const int itemsNum468[] = {3,8,10,3,2,};
_testGetOrder(r,5, items468, itemsNum468);
std::cerr << "last output should be ERROR from command468" << std::endl;
 // last command was command number 468
const string items469[] = {"pro746",};
const int itemsNum469[] = {1,};
_testGetOrder(r,-5, items469, itemsNum469);
std::cerr << "last output should be ERROR from command469" << std::endl;
 // last command was command number 469
const string items470[] = {"pro148","bad product!",};
const int itemsNum470[] = {10,6,};
_testGetOrder(r,2, items470, itemsNum470);
std::cerr << "last output should be ERROR from command470" << std::endl;
 // last command was command number 470
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command471" << std::endl;
 // last command was command number 471
_testPrintServedList(r);
std::cout << "last command was number: 472 " << std::endl;
// last command was command number 472
_testPrintOpenOrders(r);
std::cout << "last command was number: 473 " << std::endl;
// last command was command number 473
_testGetCheck(r);
std::cerr << "last output should be ERROR from command474" << std::endl;
 // last command was command number 474
const string items475[] = {"bad product!","pro720",};
const int itemsNum475[] = {9,3,};
_testGetOrder(r,2, items475, itemsNum475);
std::cerr << "last output should be ERROR from command475" << std::endl;
 // last command was command number 475
_testPrintTables(r);
std::cout << "last command was number: 476 " << std::endl;
// last command was command number 476
_testGetCheck(r);
std::cerr << "last output should be ERROR from command477" << std::endl;
 // last command was command number 477
_testGetCheck(r);
std::cerr << "last output should be ERROR from command478" << std::endl;
 // last command was command number 478
const string items479[] = {"pro184","pro129","pro745",};
const int itemsNum479[] = {4,8,8,};
_testGetOrder(r,-63, items479, itemsNum479);
std::cerr << "last output should be ERROR from command479" << std::endl;
 // last command was command number 479
const string items480[] = {"pro863","pro740","pro575",};
const int itemsNum480[] = {8,5,2,};
_testGetOrder(r,-8, items480, itemsNum480);
std::cerr << "last output should be ERROR from command480" << std::endl;
 // last command was command number 480
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command481" << std::endl;
 // last command was command number 481
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command482" << std::endl;
 // last command was command number 482
const string items483[] = {"pro158",};
const int itemsNum483[] = {-56,};
_testGetOrder(r,1, items483, itemsNum483);
std::cerr << "last output should be ERROR from command483" << std::endl;
 // last command was command number 483
_testGetCheck(r);
std::cerr << "last output should be ERROR from command484" << std::endl;
 // last command was command number 484
const string items485[] = {"pro184","pro768","pro279","bad product!","pro736",};
const int itemsNum485[] = {4,10,2,8,2,};
_testGetOrder(r,5, items485, itemsNum485);
std::cerr << "last output should be ERROR from command485" << std::endl;
 // last command was command number 485
const string items486[] = {"pro433","pro746","pro912","pro136",};
const int itemsNum486[] = {-5,6,6,10,};
_testGetOrder(r,-6, items486, itemsNum486);
std::cerr << "last output should be ERROR from command486" << std::endl;
 // last command was command number 486
const string items487[] = {"pro745","pro520","pro248","pro120","pro595",};
const int itemsNum487[] = {10,4,3,2,9,};
_testGetOrder(r,5, items487, itemsNum487);
std::cout << "last command was number: 487 " << std::endl;
// last command was command number 487
_testAddToWaitList(r,58);
std::cout << "last command was number: 488 " << std::endl;
// last command was command number 488
const string items489[] = {"pro545","pro381","pro248","pro539",};
const int itemsNum489[] = {3,3,3,3,};
_testGetOrder(r,4, items489, itemsNum489);
std::cout << "last command was number: 489 " << std::endl;
// last command was command number 489
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command490" << std::endl;
 // last command was command number 490
_testPrintOpenOrders(r);
std::cout << "last command was number: 491 " << std::endl;
// last command was command number 491
_testGetCheck(r);
std::cout << "last command was number: 492 " << std::endl;
// last command was command number 492
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command493" << std::endl;
 // last command was command number 493
_testSitAtTable(r);
std::cout << "last command was number: 494 " << std::endl;
// last command was command number 494
const string items495[] = {"pro661",};
const int itemsNum495[] = {10,};
_testGetOrder(r,-88, items495, itemsNum495);
std::cerr << "last output should be ERROR from command495" << std::endl;
 // last command was command number 495
const string items496[] = {"pro365","pro440","bad product!","pro285",};
const int itemsNum496[] = {5,-44,3,1,};
_testGetOrder(r,4, items496, itemsNum496);
std::cerr << "last output should be ERROR from command496" << std::endl;
 // last command was command number 496
_testPrintProfits(r);
std::cout << "last command was number: 497 " << std::endl;
// last command was command number 497
const string items498[] = {"pro262","bad product!","pro374",};
const int itemsNum498[] = {6,1,10,};
_testGetOrder(r,3, items498, itemsNum498);
std::cerr << "last output should be ERROR from command498" << std::endl;
 // last command was command number 498
const string items499[] = {"bad product!",};
const int itemsNum499[] = {7,};
_testGetOrder(r,1, items499, itemsNum499);
std::cerr << "last output should be ERROR from command499" << std::endl;
 // last command was command number 499
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command500" << std::endl;
 // last command was command number 500
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command501" << std::endl;
 // last command was command number 501
const string items502[] = {"bad product!","pro335","pro120","pro6","pro243",};
const int itemsNum502[] = {8,-10,6,9,9,};
_testGetOrder(r,5, items502, itemsNum502);
std::cerr << "last output should be ERROR from command502" << std::endl;
 // last command was command number 502
_testPrintTables(r);
std::cout << "last command was number: 503 " << std::endl;
// last command was command number 503
_testGetCheck(r);
std::cout << "last command was number: 504 " << std::endl;
// last command was command number 504
_testGetCheck(r);
std::cerr << "last output should be ERROR from command505" << std::endl;
 // last command was command number 505
const string items506[] = {"bad product!",};
const int itemsNum506[] = {6,};
_testGetOrder(r,1, items506, itemsNum506);
std::cerr << "last output should be ERROR from command506" << std::endl;
 // last command was command number 506
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command507" << std::endl;
 // last command was command number 507
_testPrintProfits(r);
std::cout << "last command was number: 508 " << std::endl;
// last command was command number 508
const string items509[] = {"bad product!","pro987",};
const int itemsNum509[] = {3,3,};
_testGetOrder(r,2, items509, itemsNum509);
std::cerr << "last output should be ERROR from command509" << std::endl;
 // last command was command number 509
_testAddToWaitList(r,75);
std::cout << "last command was number: 510 " << std::endl;
// last command was command number 510
_testAddToWaitList(r,90);
std::cout << "last command was number: 511 " << std::endl;
// last command was command number 511
_testGetCheck(r);
std::cerr << "last output should be ERROR from command512" << std::endl;
 // last command was command number 512
_testGetCheck(r);
std::cerr << "last output should be ERROR from command513" << std::endl;
 // last command was command number 513
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command514" << std::endl;
 // last command was command number 514
_testGetCheck(r);
std::cerr << "last output should be ERROR from command515" << std::endl;
 // last command was command number 515
_testGetCheck(r);
std::cerr << "last output should be ERROR from command516" << std::endl;
 // last command was command number 516
_testGetCheck(r);
std::cerr << "last output should be ERROR from command517" << std::endl;
 // last command was command number 517
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command518" << std::endl;
 // last command was command number 518
_testGetCheck(r);
std::cerr << "last output should be ERROR from command519" << std::endl;
 // last command was command number 519
const string items520[] = {"pro230","pro977","pro733","pro592",};
const int itemsNum520[] = {5,1,10,3,};
_testGetOrder(r,-12, items520, itemsNum520);
std::cerr << "last output should be ERROR from command520" << std::endl;
 // last command was command number 520
_testGetCheck(r);
std::cerr << "last output should be ERROR from command521" << std::endl;
 // last command was command number 521
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command522" << std::endl;
 // last command was command number 522
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command523" << std::endl;
 // last command was command number 523
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command524" << std::endl;
 // last command was command number 524
_testSitAtTable(r);
std::cout << "last command was number: 525 " << std::endl;
// last command was command number 525
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command526" << std::endl;
 // last command was command number 526
const string items527[] = {"bad product!","pro535","pro605",};
const int itemsNum527[] = {4,9,4,};
_testGetOrder(r,3, items527, itemsNum527);
std::cerr << "last output should be ERROR from command527" << std::endl;
 // last command was command number 527
_testPrintTables(r);
std::cout << "last command was number: 528 " << std::endl;
// last command was command number 528
_testAddToWaitList(r,70);
std::cout << "last command was number: 529 " << std::endl;
// last command was command number 529
_testGetCheck(r);
std::cerr << "last output should be ERROR from command530" << std::endl;
 // last command was command number 530
const string items531[] = {"pro433","pro325","pro977","bad product!","pro303",};
const int itemsNum531[] = {10,10,5,8,8,};
_testGetOrder(r,5, items531, itemsNum531);
std::cerr << "last output should be ERROR from command531" << std::endl;
 // last command was command number 531
const string items532[] = {"bad product!",};
const int itemsNum532[] = {4,};
_testGetOrder(r,1, items532, itemsNum532);
std::cerr << "last output should be ERROR from command532" << std::endl;
 // last command was command number 532
_testGetCheck(r);
std::cerr << "last output should be ERROR from command533" << std::endl;
 // last command was command number 533
_testAddToWaitList(r,70);
std::cout << "last command was number: 534 " << std::endl;
// last command was command number 534
const string items535[] = {"pro981","pro736",};
const int itemsNum535[] = {2,6,};
_testGetOrder(r,2, items535, itemsNum535);
std::cout << "last command was number: 535 " << std::endl;
// last command was command number 535
_testPrintCheckList(r);
std::cout << "last command was number: 536 " << std::endl;
// last command was command number 536
_testPrintCheckList(r);
std::cout << "last command was number: 537 " << std::endl;
// last command was command number 537
_testSitAtTable(r);
std::cout << "last command was number: 538 " << std::endl;
// last command was command number 538
_testPrintWaitList(r);
std::cout << "last command was number: 539 " << std::endl;
// last command was command number 539
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command540" << std::endl;
 // last command was command number 540
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command541" << std::endl;
 // last command was command number 541
const string items542[] = {"pro328","pro390",};
const int itemsNum542[] = {2,10,};
_testGetOrder(r,2, items542, itemsNum542);
std::cout << "last command was number: 542 " << std::endl;
// last command was command number 542
_testSitAtTable(r);
std::cout << "last command was number: 543 " << std::endl;
// last command was command number 543
_testGetCheck(r);
std::cout << "last command was number: 544 " << std::endl;
// last command was command number 544
const string items545[] = {"bad product!",};
const int itemsNum545[] = {3,};
_testGetOrder(r,1, items545, itemsNum545);
std::cerr << "last output should be ERROR from command545" << std::endl;
 // last command was command number 545
_testPrintTables(r);
std::cout << "last command was number: 546 " << std::endl;
// last command was command number 546
_testSitAtTable(r);
std::cout << "last command was number: 547 " << std::endl;
// last command was command number 547
_testSitAtTable(r);
std::cout << "last command was number: 548 " << std::endl;
// last command was command number 548
_testAddToWaitList(r,89);
std::cout << "last command was number: 549 " << std::endl;
// last command was command number 549
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command550" << std::endl;
 // last command was command number 550
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command551" << std::endl;
 // last command was command number 551
_testPrintWaitList(r);
std::cout << "last command was number: 552 " << std::endl;
// last command was command number 552
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command553" << std::endl;
 // last command was command number 553
_testAddToWaitList(r,53);
std::cout << "last command was number: 554 " << std::endl;
// last command was command number 554
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command555" << std::endl;
 // last command was command number 555
_testAddToWaitList(r,70);
std::cout << "last command was number: 556 " << std::endl;
// last command was command number 556
_testPrintTables(r);
std::cout << "last command was number: 557 " << std::endl;
// last command was command number 557
const string items558[] = {"pro895","pro648","pro702","pro262",};
const int itemsNum558[] = {1,9,4,6,};
_testGetOrder(r,4, items558, itemsNum558);
std::cout << "last command was number: 558 " << std::endl;
// last command was command number 558
_testSitAtTable(r);
std::cout << "last command was number: 559 " << std::endl;
// last command was command number 559
const string items560[] = {"bad product!",};
const int itemsNum560[] = {-13,};
_testGetOrder(r,-80, items560, itemsNum560);
std::cerr << "last output should be ERROR from command560" << std::endl;
 // last command was command number 560
_testSitAtTable(r);
std::cout << "last command was number: 561 " << std::endl;
// last command was command number 561
_testSitAtTable(r);
std::cout << "last command was number: 562 " << std::endl;
// last command was command number 562
_testAddToWaitList(r,87);
std::cout << "last command was number: 563 " << std::endl;
// last command was command number 563
_testAddToWaitList(r,68);
std::cout << "last command was number: 564 " << std::endl;
// last command was command number 564
_testPrintOpenOrders(r);
std::cout << "last command was number: 565 " << std::endl;
// last command was command number 565
_testPrintCheckList(r);
std::cout << "last command was number: 566 " << std::endl;
// last command was command number 566
const string items567[] = {"bad product!",};
const int itemsNum567[] = {3,};
_testGetOrder(r,1, items567, itemsNum567);
std::cerr << "last output should be ERROR from command567" << std::endl;
 // last command was command number 567
const string items568[] = {"bad product!","pro279",};
const int itemsNum568[] = {6,1,};
_testGetOrder(r,2, items568, itemsNum568);
std::cerr << "last output should be ERROR from command568" << std::endl;
 // last command was command number 568
const string items569[] = {"pro285","bad product!","pro120","pro240","pro433",};
const int itemsNum569[] = {3,1,9,10,4,};
_testGetOrder(r,5, items569, itemsNum569);
std::cerr << "last output should be ERROR from command569" << std::endl;
 // last command was command number 569
_testAddToWaitList(r,80);
std::cout << "last command was number: 570 " << std::endl;
// last command was command number 570
const string items571[] = {"pro545","pro956","pro77",};
const int itemsNum571[] = {9,7,7,};
_testGetOrder(r,3, items571, itemsNum571);
std::cout << "last command was number: 571 " << std::endl;
// last command was command number 571
_testPrintCheckList(r);
std::cout << "last command was number: 572 " << std::endl;
// last command was command number 572
_testPrintProfits(r);
std::cout << "last command was number: 573 " << std::endl;
// last command was command number 573
const string items574[] = {"pro331","bad product!",};
const int itemsNum574[] = {4,8,};
_testGetOrder(r,2, items574, itemsNum574);
std::cerr << "last output should be ERROR from command574" << std::endl;
 // last command was command number 574
const string items575[] = {"pro241","pro167","pro826",};
const int itemsNum575[] = {-53,10,2,};
_testGetOrder(r,3, items575, itemsNum575);
std::cerr << "last output should be ERROR from command575" << std::endl;
 // last command was command number 575
_testPrintOpenOrders(r);
std::cout << "last command was number: 576 " << std::endl;
// last command was command number 576
const string items577[] = {"pro709","pro745","pro379","pro966",};
const int itemsNum577[] = {6,-19,2,7,};
_testGetOrder(r,-61, items577, itemsNum577);
std::cerr << "last output should be ERROR from command577" << std::endl;
 // last command was command number 577
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command578" << std::endl;
 // last command was command number 578
_testPrintOpenOrders(r);
std::cout << "last command was number: 579 " << std::endl;
// last command was command number 579
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command580" << std::endl;
 // last command was command number 580
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command581" << std::endl;
 // last command was command number 581
const string items582[] = {"pro534","bad product!",};
const int itemsNum582[] = {4,-17,};
_testGetOrder(r,2, items582, itemsNum582);
std::cerr << "last output should be ERROR from command582" << std::endl;
 // last command was command number 582
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command583" << std::endl;
 // last command was command number 583
_testPrintWaitList(r);
std::cout << "last command was number: 584 " << std::endl;
// last command was command number 584
_testGetCheck(r);
std::cout << "last command was number: 585 " << std::endl;
// last command was command number 585
const string items586[] = {"pro230","pro863",};
const int itemsNum586[] = {4,-77,};
_testGetOrder(r,2, items586, itemsNum586);
std::cerr << "last output should be ERROR from command586" << std::endl;
 // last command was command number 586
const string items587[] = {"pro433","bad product!",};
const int itemsNum587[] = {6,6,};
_testGetOrder(r,2, items587, itemsNum587);
std::cerr << "last output should be ERROR from command587" << std::endl;
 // last command was command number 587
const string items588[] = {"pro148","pro248",};
const int itemsNum588[] = {8,10,};
_testGetOrder(r,2, items588, itemsNum588);
std::cout << "last command was number: 588 " << std::endl;
// last command was command number 588
_testPrintServedList(r);
std::cout << "last command was number: 589 " << std::endl;
// last command was command number 589
const string items590[] = {"pro969","bad product!","pro810","pro440",};
const int itemsNum590[] = {5,-92,3,7,};
_testGetOrder(r,4, items590, itemsNum590);
std::cerr << "last output should be ERROR from command590" << std::endl;
 // last command was command number 590
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command591" << std::endl;
 // last command was command number 591
const string items592[] = {"pro956","pro433","pro745","pro947","bad product!",};
const int itemsNum592[] = {8,3,9,9,6,};
_testGetOrder(r,5, items592, itemsNum592);
std::cerr << "last output should be ERROR from command592" << std::endl;
 // last command was command number 592
_testAddToWaitList(r,68);
std::cout << "last command was number: 593 " << std::endl;
// last command was command number 593
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command594" << std::endl;
 // last command was command number 594
_testPrintOpenOrders(r);
std::cout << "last command was number: 595 " << std::endl;
// last command was command number 595
_testAddToWaitList(r,61);
std::cout << "last command was number: 596 " << std::endl;
// last command was command number 596
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command597" << std::endl;
 // last command was command number 597
_testGetCheck(r);
std::cout << "last command was number: 598 " << std::endl;
// last command was command number 598
_testPrintCheckList(r);
std::cout << "last command was number: 599 " << std::endl;
// last command was command number 599
const string items600[] = {"bad product!","pro740","pro608","pro821","pro981",};
const int itemsNum600[] = {2,9,4,9,6,};
_testGetOrder(r,5, items600, itemsNum600);
std::cerr << "last output should be ERROR from command600" << std::endl;
 // last command was command number 600
_testAddToWaitList(r,93);
std::cout << "last command was number: 601 " << std::endl;
// last command was command number 601
_testGetCheck(r);
std::cout << "last command was number: 602 " << std::endl;
// last command was command number 602
_testGetCheck(r);
std::cout << "last command was number: 603 " << std::endl;
// last command was command number 603
_testGetCheck(r);
std::cerr << "last output should be ERROR from command604" << std::endl;
 // last command was command number 604
const string items605[] = {"pro988","pro947","pro240","pro821",};
const int itemsNum605[] = {-40,5,1,2,};
_testGetOrder(r,4, items605, itemsNum605);
std::cerr << "last output should be ERROR from command605" << std::endl;
 // last command was command number 605
_testGetCheck(r);
std::cerr << "last output should be ERROR from command606" << std::endl;
 // last command was command number 606
_testPrintWaitList(r);
std::cout << "last command was number: 607 " << std::endl;
// last command was command number 607
_testGetCheck(r);
std::cerr << "last output should be ERROR from command608" << std::endl;
 // last command was command number 608
const string items609[] = {"pro285","bad product!","pro733",};
const int itemsNum609[] = {7,1,4,};
_testGetOrder(r,3, items609, itemsNum609);
std::cerr << "last output should be ERROR from command609" << std::endl;
 // last command was command number 609
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command610" << std::endl;
 // last command was command number 610
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command611" << std::endl;
 // last command was command number 611
const string items612[] = {"pro977","pro154","pro325","pro397",};
const int itemsNum612[] = {5,6,-74,2,};
_testGetOrder(r,4, items612, itemsNum612);
std::cerr << "last output should be ERROR from command612" << std::endl;
 // last command was command number 612
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command613" << std::endl;
 // last command was command number 613
_testPrintWaitList(r);
std::cout << "last command was number: 614 " << std::endl;
// last command was command number 614
const string items615[] = {"bad product!",};
const int itemsNum615[] = {10,};
_testGetOrder(r,1, items615, itemsNum615);
std::cerr << "last output should be ERROR from command615" << std::endl;
 // last command was command number 615
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command616" << std::endl;
 // last command was command number 616
_testGetCheck(r);
std::cerr << "last output should be ERROR from command617" << std::endl;
 // last command was command number 617
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command618" << std::endl;
 // last command was command number 618
_testAddToWaitList(r,79);
std::cout << "last command was number: 619 " << std::endl;
// last command was command number 619
_testAddToWaitList(r,76);
std::cout << "last command was number: 620 " << std::endl;
// last command was command number 620
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command621" << std::endl;
 // last command was command number 621
const string items622[] = {"pro605",};
const int itemsNum622[] = {-15,};
_testGetOrder(r,1, items622, itemsNum622);
std::cerr << "last output should be ERROR from command622" << std::endl;
 // last command was command number 622
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command623" << std::endl;
 // last command was command number 623
_testSitAtTable(r);
std::cout << "last command was number: 624 " << std::endl;
// last command was command number 624
_testPrintOpenOrders(r);
std::cout << "last command was number: 625 " << std::endl;
// last command was command number 625
_testGetCheck(r);
std::cerr << "last output should be ERROR from command626" << std::endl;
 // last command was command number 626
_testPrintProfits(r);
std::cout << "last command was number: 627 " << std::endl;
// last command was command number 627
_testSitAtTable(r);
std::cout << "last command was number: 628 " << std::endl;
// last command was command number 628
_testSitAtTable(r);
std::cout << "last command was number: 629 " << std::endl;
// last command was command number 629
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command630" << std::endl;
 // last command was command number 630
_testPrintProfits(r);
std::cout << "last command was number: 631 " << std::endl;
// last command was command number 631
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command632" << std::endl;
 // last command was command number 632
_testGetCheck(r);
std::cerr << "last output should be ERROR from command633" << std::endl;
 // last command was command number 633
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command634" << std::endl;
 // last command was command number 634
_testGetCheck(r);
std::cerr << "last output should be ERROR from command635" << std::endl;
 // last command was command number 635
const string items636[] = {"pro545","pro158",};
const int itemsNum636[] = {8,2,};
_testGetOrder(r,2, items636, itemsNum636);
std::cout << "last command was number: 636 " << std::endl;
// last command was command number 636
const string items637[] = {"pro736","pro713","pro379","pro417",};
const int itemsNum637[] = {4,10,3,8,};
_testGetOrder(r,4, items637, itemsNum637);
std::cout << "last command was number: 637 " << std::endl;
// last command was command number 637
const string items638[] = {"pro433","pro719","pro335","pro148","pro912",};
const int itemsNum638[] = {-68,4,3,4,9,};
_testGetOrder(r,5, items638, itemsNum638);
std::cerr << "last output should be ERROR from command638" << std::endl;
 // last command was command number 638
const string items639[] = {"pro702","pro502","pro120","pro285",};
const int itemsNum639[] = {10,6,2,8,};
_testGetOrder(r,4, items639, itemsNum639);
std::cout << "last command was number: 639 " << std::endl;
// last command was command number 639
const string items640[] = {"pro381","pro592","pro365","pro6",};
const int itemsNum640[] = {5,6,5,3,};
_testGetOrder(r,4, items640, itemsNum640);
std::cout << "last command was number: 640 " << std::endl;
// last command was command number 640
_testGetCheck(r);
std::cout << "last command was number: 641 " << std::endl;
// last command was command number 641
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command642" << std::endl;
 // last command was command number 642
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command643" << std::endl;
 // last command was command number 643
_testPrintProfits(r);
std::cout << "last command was number: 644 " << std::endl;
// last command was command number 644
_testGetCheck(r);
std::cout << "last command was number: 645 " << std::endl;
// last command was command number 645
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command646" << std::endl;
 // last command was command number 646
_testPrintTables(r);
std::cout << "last command was number: 647 " << std::endl;
// last command was command number 647
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command648" << std::endl;
 // last command was command number 648
_testAddToWaitList(r,79);
std::cout << "last command was number: 649 " << std::endl;
// last command was command number 649
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command650" << std::endl;
 // last command was command number 650
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command651" << std::endl;
 // last command was command number 651
_testAddToWaitList(r,51);
std::cout << "last command was number: 652 " << std::endl;
// last command was command number 652
const string items653[] = {"bad product!","pro379","pro988","pro595","pro872",};
const int itemsNum653[] = {9,2,4,7,5,};
_testGetOrder(r,5, items653, itemsNum653);
std::cerr << "last output should be ERROR from command653" << std::endl;
 // last command was command number 653
_testPrintProfits(r);
std::cout << "last command was number: 654 " << std::endl;
// last command was command number 654
_testGetCheck(r);
std::cout << "last command was number: 655 " << std::endl;
// last command was command number 655
_testAddToWaitList(r,85);
std::cout << "last command was number: 656 " << std::endl;
// last command was command number 656
const string items657[] = {"bad product!",};
const int itemsNum657[] = {7,};
_testGetOrder(r,1, items657, itemsNum657);
std::cerr << "last output should be ERROR from command657" << std::endl;
 // last command was command number 657
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command658" << std::endl;
 // last command was command number 658
_testGetCheck(r);
std::cout << "last command was number: 659 " << std::endl;
// last command was command number 659
const string items660[] = {"pro757","pro120","pro240","pro402","pro709",};
const int itemsNum660[] = {9,10,8,10,9,};
_testGetOrder(r,5, items660, itemsNum660);
std::cout << "last command was number: 660 " << std::endl;
// last command was command number 660
const string items661[] = {"bad product!",};
const int itemsNum661[] = {9,};
_testGetOrder(r,1, items661, itemsNum661);
std::cerr << "last output should be ERROR from command661" << std::endl;
 // last command was command number 661
_testPrintTables(r);
std::cout << "last command was number: 662 " << std::endl;
// last command was command number 662
const string items663[] = {"pro987","pro912","pro457","pro201",};
const int itemsNum663[] = {5,3,7,7,};
_testGetOrder(r,4, items663, itemsNum663);
std::cout << "last command was number: 663 " << std::endl;
// last command was command number 663
const string items664[] = {"pro912","pro821",};
const int itemsNum664[] = {10,6,};
_testGetOrder(r,2, items664, itemsNum664);
std::cout << "last command was number: 664 " << std::endl;
// last command was command number 664
_testAddToWaitList(r,76);
std::cout << "last command was number: 665 " << std::endl;
// last command was command number 665
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command666" << std::endl;
 // last command was command number 666
_testPrintOpenOrders(r);
std::cout << "last command was number: 667 " << std::endl;
// last command was command number 667
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command668" << std::endl;
 // last command was command number 668
const string items669[] = {"pro374","pro947","pro520","pro255",};
const int itemsNum669[] = {6,10,2,4,};
_testGetOrder(r,4, items669, itemsNum669);
std::cerr << "last output should be ERROR from command669" << std::endl;
 // last command was command number 669
_testAddToWaitList(r,100);
std::cout << "last command was number: 670 " << std::endl;
// last command was command number 670
const string items671[] = {"bad product!","pro241",};
const int itemsNum671[] = {7,4,};
_testGetOrder(r,2, items671, itemsNum671);
std::cerr << "last output should be ERROR from command671" << std::endl;
 // last command was command number 671
_testGetCheck(r);
std::cout << "last command was number: 672 " << std::endl;
// last command was command number 672
const string items673[] = {"pro543","pro390","pro757","pro330",};
const int itemsNum673[] = {6,9,6,-39,};
_testGetOrder(r,4, items673, itemsNum673);
std::cerr << "last output should be ERROR from command673" << std::endl;
 // last command was command number 673
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command674" << std::endl;
 // last command was command number 674
_testGetCheck(r);
std::cout << "last command was number: 675 " << std::endl;
// last command was command number 675
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command676" << std::endl;
 // last command was command number 676
_testSitAtTable(r);
std::cout << "last command was number: 677 " << std::endl;
// last command was command number 677
_testAddToWaitList(r,54);
std::cout << "last command was number: 678 " << std::endl;
// last command was command number 678
_testAddToWaitList(r,55);
std::cout << "last command was number: 679 " << std::endl;
// last command was command number 679
const string items680[] = {"pro208","pro377","pro136","pro7","pro154",};
const int itemsNum680[] = {2,1,5,2,1,};
_testGetOrder(r,5, items680, itemsNum680);
std::cout << "last command was number: 680 " << std::endl;
// last command was command number 680
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command681" << std::endl;
 // last command was command number 681
const string items682[] = {"pro988","pro156","pro417","pro457","pro736",};
const int itemsNum682[] = {3,5,10,7,8,};
_testGetOrder(r,5, items682, itemsNum682);
std::cerr << "last output should be ERROR from command682" << std::endl;
 // last command was command number 682
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command683" << std::endl;
 // last command was command number 683
_testPrintWaitList(r);
std::cout << "last command was number: 684 " << std::endl;
// last command was command number 684
_testAddToWaitList(r,71);
std::cout << "last command was number: 685 " << std::endl;
// last command was command number 685
_testAddToWaitList(r,54);
std::cout << "last command was number: 686 " << std::endl;
// last command was command number 686
_testPrintWaitList(r);
std::cout << "last command was number: 687 " << std::endl;
// last command was command number 687
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command688" << std::endl;
 // last command was command number 688
_testPrintProfits(r);
std::cout << "last command was number: 689 " << std::endl;
// last command was command number 689
_testAddToWaitList(r,91);
std::cout << "last command was number: 690 " << std::endl;
// last command was command number 690
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command691" << std::endl;
 // last command was command number 691
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command692" << std::endl;
 // last command was command number 692
_testSitAtTable(r);
std::cout << "last command was number: 693 " << std::endl;
// last command was command number 693
_testPrintServedList(r);
std::cout << "last command was number: 694 " << std::endl;
// last command was command number 694
const string items695[] = {"pro379","pro440","pro543","pro575",};
const int itemsNum695[] = {2,2,10,6,};
_testGetOrder(r,4, items695, itemsNum695);
std::cout << "last command was number: 695 " << std::endl;
// last command was command number 695
_testGetCheck(r);
std::cout << "last command was number: 696 " << std::endl;
// last command was command number 696
_testAddToWaitList(r,63);
std::cout << "last command was number: 697 " << std::endl;
// last command was command number 697
const string items698[] = {"pro969","pro768","pro148","pro821",};
const int itemsNum698[] = {6,4,4,4,};
_testGetOrder(r,4, items698, itemsNum698);
std::cerr << "last output should be ERROR from command698" << std::endl;
 // last command was command number 698
_testGetCheck(r);
std::cout << "last command was number: 699 " << std::endl;
// last command was command number 699
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command700" << std::endl;
 // last command was command number 700
_testGetCheck(r);
std::cout << "last command was number: 701 " << std::endl;
// last command was command number 701
const string items702[] = {"bad product!","pro872",};
const int itemsNum702[] = {4,8,};
_testGetOrder(r,2, items702, itemsNum702);
std::cerr << "last output should be ERROR from command702" << std::endl;
 // last command was command number 702
_testAddToWaitList(r,55);
std::cout << "last command was number: 703 " << std::endl;
// last command was command number 703
const string items704[] = {"pro402","pro713",};
const int itemsNum704[] = {10,3,};
_testGetOrder(r,2, items704, itemsNum704);
std::cerr << "last output should be ERROR from command704" << std::endl;
 // last command was command number 704
const string items705[] = {"pro255",};
const int itemsNum705[] = {-41,};
_testGetOrder(r,-57, items705, itemsNum705);
std::cerr << "last output should be ERROR from command705" << std::endl;
 // last command was command number 705
const string items706[] = {"pro154","bad product!","pro240","pro303",};
const int itemsNum706[] = {3,10,5,3,};
_testGetOrder(r,-34, items706, itemsNum706);
std::cerr << "last output should be ERROR from command706" << std::endl;
 // last command was command number 706
_testPrintWaitList(r);
std::cout << "last command was number: 707 " << std::endl;
// last command was command number 707
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command708" << std::endl;
 // last command was command number 708
_testGetCheck(r);
std::cerr << "last output should be ERROR from command709" << std::endl;
 // last command was command number 709
_testPrintTables(r);
std::cout << "last command was number: 710 " << std::endl;
// last command was command number 710
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command711" << std::endl;
 // last command was command number 711
_testPrintOpenOrders(r);
std::cout << "last command was number: 712 " << std::endl;
// last command was command number 712
const string items713[] = {"bad product!","pro285","pro703","pro545","pro440",};
const int itemsNum713[] = {3,4,6,-84,7,};
_testGetOrder(r,5, items713, itemsNum713);
std::cerr << "last output should be ERROR from command713" << std::endl;
 // last command was command number 713
_testGetCheck(r);
std::cerr << "last output should be ERROR from command714" << std::endl;
 // last command was command number 714
const string items715[] = {"pro821","pro520",};
const int itemsNum715[] = {3,9,};
_testGetOrder(r,-42, items715, itemsNum715);
std::cerr << "last output should be ERROR from command715" << std::endl;
 // last command was command number 715
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command716" << std::endl;
 // last command was command number 716
const string items717[] = {"pro719",};
const int itemsNum717[] = {-44,};
_testGetOrder(r,1, items717, itemsNum717);
std::cerr << "last output should be ERROR from command717" << std::endl;
 // last command was command number 717
_testPrintOpenOrders(r);
std::cout << "last command was number: 718 " << std::endl;
// last command was command number 718
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command719" << std::endl;
 // last command was command number 719
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command720" << std::endl;
 // last command was command number 720
const string items721[] = {"pro440","pro491","pro402","pro502",};
const int itemsNum721[] = {-82,3,8,7,};
_testGetOrder(r,4, items721, itemsNum721);
std::cerr << "last output should be ERROR from command721" << std::endl;
 // last command was command number 721
const string items722[] = {"pro502","pro595","pro535","pro760",};
const int itemsNum722[] = {6,6,1,1,};
_testGetOrder(r,4, items722, itemsNum722);
std::cerr << "last output should be ERROR from command722" << std::endl;
 // last command was command number 722
_testPrintTables(r);
std::cout << "last command was number: 723 " << std::endl;
// last command was command number 723
_testAddToWaitList(r,50);
std::cout << "last command was number: 724 " << std::endl;
// last command was command number 724
_testPrintWaitList(r);
std::cout << "last command was number: 725 " << std::endl;
// last command was command number 725
const string items726[] = {"pro158","pro760","pro977","pro826",};
const int itemsNum726[] = {4,7,3,4,};
_testGetOrder(r,-1, items726, itemsNum726);
std::cerr << "last output should be ERROR from command726" << std::endl;
 // last command was command number 726
const string items727[] = {"pro440","pro959","pro535",};
const int itemsNum727[] = {3,10,8,};
_testGetOrder(r,-15, items727, itemsNum727);
std::cerr << "last output should be ERROR from command727" << std::endl;
 // last command was command number 727
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command728" << std::endl;
 // last command was command number 728
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command729" << std::endl;
 // last command was command number 729
_testGetCheck(r);
std::cerr << "last output should be ERROR from command730" << std::endl;
 // last command was command number 730
const string items731[] = {"pro457","pro719","pro138",};
const int itemsNum731[] = {1,6,4,};
_testGetOrder(r,-46, items731, itemsNum731);
std::cerr << "last output should be ERROR from command731" << std::endl;
 // last command was command number 731
_testPrintOpenOrders(r);
std::cout << "last command was number: 732 " << std::endl;
// last command was command number 732
_testPrintWaitList(r);
std::cout << "last command was number: 733 " << std::endl;
// last command was command number 733
_testGetCheck(r);
std::cerr << "last output should be ERROR from command734" << std::endl;
 // last command was command number 734
const string items735[] = {"pro335","pro7","pro987","bad product!",};
const int itemsNum735[] = {4,10,2,1,};
_testGetOrder(r,4, items735, itemsNum735);
std::cerr << "last output should be ERROR from command735" << std::endl;
 // last command was command number 735
_testGetCheck(r);
std::cerr << "last output should be ERROR from command736" << std::endl;
 // last command was command number 736
const string items737[] = {"pro129","pro592","pro713","pro230","pro137",};
const int itemsNum737[] = {1,4,10,6,3,};
_testGetOrder(r,5, items737, itemsNum737);
std::cerr << "last output should be ERROR from command737" << std::endl;
 // last command was command number 737
_testGetCheck(r);
std::cerr << "last output should be ERROR from command738" << std::endl;
 // last command was command number 738
_testSitAtTable(r);
std::cout << "last command was number: 739 " << std::endl;
// last command was command number 739
_testPrintProfits(r);
std::cout << "last command was number: 740 " << std::endl;
// last command was command number 740
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command741" << std::endl;
 // last command was command number 741
_testPrintOpenOrders(r);
std::cout << "last command was number: 742 " << std::endl;
// last command was command number 742
_testGetCheck(r);
std::cerr << "last output should be ERROR from command743" << std::endl;
 // last command was command number 743
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command744" << std::endl;
 // last command was command number 744
_testPrintOpenOrders(r);
std::cout << "last command was number: 745 " << std::endl;
// last command was command number 745
_testAddToWaitList(r,73);
std::cout << "last command was number: 746 " << std::endl;
// last command was command number 746
_testSitAtTable(r);
std::cout << "last command was number: 747 " << std::endl;
// last command was command number 747
_testAddToWaitList(r,54);
std::cout << "last command was number: 748 " << std::endl;
// last command was command number 748
const string items749[] = {"bad product!","pro821","pro457","pro241",};
const int itemsNum749[] = {1,6,6,-63,};
_testGetOrder(r,4, items749, itemsNum749);
std::cerr << "last output should be ERROR from command749" << std::endl;
 // last command was command number 749
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command750" << std::endl;
 // last command was command number 750
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command751" << std::endl;
 // last command was command number 751
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command752" << std::endl;
 // last command was command number 752
const string items753[] = {"pro374","pro508","pro709",};
const int itemsNum753[] = {10,8,2,};
_testGetOrder(r,3, items753, itemsNum753);
std::cout << "last command was number: 753 " << std::endl;
// last command was command number 753
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command754" << std::endl;
 // last command was command number 754
const string items755[] = {"pro491","pro167","pro262","pro520","bad product!",};
const int itemsNum755[] = {2,2,8,8,10,};
_testGetOrder(r,5, items755, itemsNum755);
std::cerr << "last output should be ERROR from command755" << std::endl;
 // last command was command number 755
const string items756[] = {"pro508","pro719","bad product!",};
const int itemsNum756[] = {3,2,7,};
_testGetOrder(r,3, items756, itemsNum756);
std::cerr << "last output should be ERROR from command756" << std::endl;
 // last command was command number 756
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command757" << std::endl;
 // last command was command number 757
_testPrintCheckList(r);
std::cout << "last command was number: 758 " << std::endl;
// last command was command number 758
_testPrintProfits(r);
std::cout << "last command was number: 759 " << std::endl;
// last command was command number 759
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command760" << std::endl;
 // last command was command number 760
_testGetCheck(r);
std::cout << "last command was number: 761 " << std::endl;
// last command was command number 761
_testAddToWaitList(r,53);
std::cout << "last command was number: 762 " << std::endl;
// last command was command number 762
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command763" << std::endl;
 // last command was command number 763
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command764" << std::endl;
 // last command was command number 764
_testGetCheck(r);
std::cerr << "last output should be ERROR from command765" << std::endl;
 // last command was command number 765
_testGetCheck(r);
std::cerr << "last output should be ERROR from command766" << std::endl;
 // last command was command number 766
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command767" << std::endl;
 // last command was command number 767
_testSitAtTable(r);
std::cout << "last command was number: 768 " << std::endl;
// last command was command number 768
_testPrintTables(r);
std::cout << "last command was number: 769 " << std::endl;
// last command was command number 769
_testGetCheck(r);
std::cerr << "last output should be ERROR from command770" << std::endl;
 // last command was command number 770
const string items771[] = {"pro703","pro129","bad product!",};
const int itemsNum771[] = {2,5,8,};
_testGetOrder(r,3, items771, itemsNum771);
std::cerr << "last output should be ERROR from command771" << std::endl;
 // last command was command number 771
_testPrintTables(r);
std::cout << "last command was number: 772 " << std::endl;
// last command was command number 772
const string items773[] = {"pro956",};
const int itemsNum773[] = {1,};
_testGetOrder(r,-17, items773, itemsNum773);
std::cerr << "last output should be ERROR from command773" << std::endl;
 // last command was command number 773
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command774" << std::endl;
 // last command was command number 774
_testPrintServedList(r);
std::cout << "last command was number: 775 " << std::endl;
// last command was command number 775
_testPrintProfits(r);
std::cout << "last command was number: 776 " << std::endl;
// last command was command number 776
_testGetCheck(r);
std::cerr << "last output should be ERROR from command777" << std::endl;
 // last command was command number 777
const string items778[] = {"pro156","pro303","pro605","pro661","pro255",};
const int itemsNum778[] = {9,6,7,-46,4,};
_testGetOrder(r,5, items778, itemsNum778);
std::cerr << "last output should be ERROR from command778" << std::endl;
 // last command was command number 778
_testSitAtTable(r);
std::cout << "last command was number: 779 " << std::endl;
// last command was command number 779
_testSitAtTable(r);
std::cout << "last command was number: 780 " << std::endl;
// last command was command number 780
_testGetCheck(r);
std::cerr << "last output should be ERROR from command781" << std::endl;
 // last command was command number 781
_testSitAtTable(r);
std::cout << "last command was number: 782 " << std::endl;
// last command was command number 782
_testPrintTables(r);
std::cout << "last command was number: 783 " << std::endl;
// last command was command number 783
_testGetCheck(r);
std::cerr << "last output should be ERROR from command784" << std::endl;
 // last command was command number 784
const string items785[] = {"pro863","bad product!","pro575",};
const int itemsNum785[] = {3,2,6,};
_testGetOrder(r,3, items785, itemsNum785);
std::cerr << "last output should be ERROR from command785" << std::endl;
 // last command was command number 785
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command786" << std::endl;
 // last command was command number 786
const string items787[] = {"pro255","bad product!",};
const int itemsNum787[] = {8,2,};
_testGetOrder(r,2, items787, itemsNum787);
std::cerr << "last output should be ERROR from command787" << std::endl;
 // last command was command number 787
const string items788[] = {"pro605","pro402","pro208","pro912","pro156",};
const int itemsNum788[] = {7,10,2,-38,5,};
_testGetOrder(r,-54, items788, itemsNum788);
std::cerr << "last output should be ERROR from command788" << std::endl;
 // last command was command number 788
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command789" << std::endl;
 // last command was command number 789
_testAddToWaitList(r,98);
std::cout << "last command was number: 790 " << std::endl;
// last command was command number 790
const string items791[] = {"pro947","pro929","pro365",};
const int itemsNum791[] = {9,1,9,};
_testGetOrder(r,3, items791, itemsNum791);
std::cout << "last command was number: 791 " << std::endl;
// last command was command number 791
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command792" << std::endl;
 // last command was command number 792
const string items793[] = {"bad product!","pro695",};
const int itemsNum793[] = {10,7,};
_testGetOrder(r,2, items793, itemsNum793);
std::cerr << "last output should be ERROR from command793" << std::endl;
 // last command was command number 793
_testSitAtTable(r);
std::cout << "last command was number: 794 " << std::endl;
// last command was command number 794
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command795" << std::endl;
 // last command was command number 795
const string items796[] = {"pro262","bad product!",};
const int itemsNum796[] = {8,6,};
_testGetOrder(r,2, items796, itemsNum796);
std::cerr << "last output should be ERROR from command796" << std::endl;
 // last command was command number 796
_testPrintOpenOrders(r);
std::cout << "last command was number: 797 " << std::endl;
// last command was command number 797
const string items798[] = {"pro136","bad product!",};
const int itemsNum798[] = {3,9,};
_testGetOrder(r,2, items798, itemsNum798);
std::cerr << "last output should be ERROR from command798" << std::endl;
 // last command was command number 798
_testGetCheck(r);
std::cout << "last command was number: 799 " << std::endl;
// last command was command number 799
_testGetCheck(r);
std::cerr << "last output should be ERROR from command800" << std::endl;
 // last command was command number 800
_testPrintProfits(r);
std::cout << "last command was number: 801 " << std::endl;
// last command was command number 801
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command802" << std::endl;
 // last command was command number 802
const string items803[] = {"pro821","pro457","pro981","pro375",};
const int itemsNum803[] = {2,10,-87,3,};
_testGetOrder(r,4, items803, itemsNum803);
std::cerr << "last output should be ERROR from command803" << std::endl;
 // last command was command number 803
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command804" << std::endl;
 // last command was command number 804
const string items805[] = {"pro575","pro966","pro872",};
const int itemsNum805[] = {8,2,6,};
_testGetOrder(r,3, items805, itemsNum805);
std::cout << "last command was number: 805 " << std::endl;
// last command was command number 805
_testGetCheck(r);
std::cout << "last command was number: 806 " << std::endl;
// last command was command number 806
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command807" << std::endl;
 // last command was command number 807
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command808" << std::endl;
 // last command was command number 808
_testPrintOpenOrders(r);
std::cout << "last command was number: 809 " << std::endl;
// last command was command number 809
const string items810[] = {"pro502","pro987","pro534","pro325","pro156",};
const int itemsNum810[] = {5,9,10,10,7,};
_testGetOrder(r,5, items810, itemsNum810);
std::cout << "last command was number: 810 " << std::endl;
// last command was command number 810
const string items811[] = {"pro136","pro379","bad product!","pro390",};
const int itemsNum811[] = {2,7,9,10,};
_testGetOrder(r,4, items811, itemsNum811);
std::cerr << "last output should be ERROR from command811" << std::endl;
 // last command was command number 811
const string items812[] = {"pro545","pro138","pro417","pro534","pro303",};
const int itemsNum812[] = {2,7,-23,9,8,};
_testGetOrder(r,-49, items812, itemsNum812);
std::cerr << "last output should be ERROR from command812" << std::endl;
 // last command was command number 812
_testGetCheck(r);
std::cout << "last command was number: 813 " << std::endl;
// last command was command number 813
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command814" << std::endl;
 // last command was command number 814
_testPrintProfits(r);
std::cout << "last command was number: 815 " << std::endl;
// last command was command number 815
const string items816[] = {"pro592","pro156","pro605",};
const int itemsNum816[] = {3,3,10,};
_testGetOrder(r,3, items816, itemsNum816);
std::cout << "last command was number: 816 " << std::endl;
// last command was command number 816
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command817" << std::endl;
 // last command was command number 817
const string items818[] = {"bad product!","pro508",};
const int itemsNum818[] = {8,8,};
_testGetOrder(r,2, items818, itemsNum818);
std::cerr << "last output should be ERROR from command818" << std::endl;
 // last command was command number 818
const string items819[] = {"pro255","pro365","pro417",};
const int itemsNum819[] = {8,6,-2,};
_testGetOrder(r,-97, items819, itemsNum819);
std::cerr << "last output should be ERROR from command819" << std::endl;
 // last command was command number 819
_testSitAtTable(r);
std::cout << "last command was number: 820 " << std::endl;
// last command was command number 820
const string items821[] = {"pro520","pro328","bad product!","pro184","pro374",};
const int itemsNum821[] = {6,8,6,7,8,};
_testGetOrder(r,5, items821, itemsNum821);
std::cerr << "last output should be ERROR from command821" << std::endl;
 // last command was command number 821
const string items822[] = {"pro158","bad product!","pro826","pro740",};
const int itemsNum822[] = {2,4,7,5,};
_testGetOrder(r,-30, items822, itemsNum822);
std::cerr << "last output should be ERROR from command822" << std::endl;
 // last command was command number 822
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command823" << std::endl;
 // last command was command number 823
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command824" << std::endl;
 // last command was command number 824
const string items825[] = {"pro661","bad product!",};
const int itemsNum825[] = {4,9,};
_testGetOrder(r,2, items825, itemsNum825);
std::cerr << "last output should be ERROR from command825" << std::endl;
 // last command was command number 825
const string items826[] = {"pro929","pro872","pro826",};
const int itemsNum826[] = {10,9,2,};
_testGetOrder(r,3, items826, itemsNum826);
std::cout << "last command was number: 826 " << std::endl;
// last command was command number 826
_testAddToWaitList(r,94);
std::cout << "last command was number: 827 " << std::endl;
// last command was command number 827
_testAddToWaitList(r,79);
std::cout << "last command was number: 828 " << std::endl;
// last command was command number 828
const string items829[] = {"pro303","pro201","bad product!","pro855","pro821",};
const int itemsNum829[] = {8,3,2,3,7,};
_testGetOrder(r,5, items829, itemsNum829);
std::cerr << "last output should be ERROR from command829" << std::endl;
 // last command was command number 829
_testAddToWaitList(r,67);
std::cout << "last command was number: 830 " << std::endl;
// last command was command number 830
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command831" << std::endl;
 // last command was command number 831
_testPrintCheckList(r);
std::cout << "last command was number: 832 " << std::endl;
// last command was command number 832
_testGetCheck(r);
std::cout << "last command was number: 833 " << std::endl;
// last command was command number 833
_testGetCheck(r);
std::cout << "last command was number: 834 " << std::endl;
// last command was command number 834
_testPrintServedList(r);
std::cout << "last command was number: 835 " << std::endl;
// last command was command number 835
_testAddToWaitList(r,93);
std::cout << "last command was number: 836 " << std::endl;
// last command was command number 836
_testPrintServedList(r);
std::cout << "last command was number: 837 " << std::endl;
// last command was command number 837
_testPrintTables(r);
std::cout << "last command was number: 838 " << std::endl;
// last command was command number 838
const string items839[] = {"pro285",};
const int itemsNum839[] = {4,};
_testGetOrder(r,1, items839, itemsNum839);
std::cout << "last command was number: 839 " << std::endl;
// last command was command number 839
_testSitAtTable(r);
std::cout << "last command was number: 840 " << std::endl;
// last command was command number 840
const string items841[] = {"pro154",};
const int itemsNum841[] = {5,};
_testGetOrder(r,1, items841, itemsNum841);
std::cout << "last command was number: 841 " << std::endl;
// last command was command number 841
_testSitAtTable(r);
std::cout << "last command was number: 842 " << std::endl;
// last command was command number 842
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command843" << std::endl;
 // last command was command number 843
const string items844[] = {"pro981",};
const int itemsNum844[] = {9,};
_testGetOrder(r,-5, items844, itemsNum844);
std::cerr << "last output should be ERROR from command844" << std::endl;
 // last command was command number 844
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command845" << std::endl;
 // last command was command number 845
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command846" << std::endl;
 // last command was command number 846
const string items847[] = {"pro648","pro325",};
const int itemsNum847[] = {-83,9,};
_testGetOrder(r,-63, items847, itemsNum847);
std::cerr << "last output should be ERROR from command847" << std::endl;
 // last command was command number 847
const string items848[] = {"pro733","pro703",};
const int itemsNum848[] = {6,1,};
_testGetOrder(r,-24, items848, itemsNum848);
std::cerr << "last output should be ERROR from command848" << std::endl;
 // last command was command number 848
_testAddToWaitList(r,58);
std::cout << "last command was number: 849 " << std::endl;
// last command was command number 849
const string items850[] = {"pro592","pro230","pro863","pro895",};
const int itemsNum850[] = {8,7,2,6,};
_testGetOrder(r,-13, items850, itemsNum850);
std::cerr << "last output should be ERROR from command850" << std::endl;
 // last command was command number 850
_testPrintServedList(r);
std::cout << "last command was number: 851 " << std::endl;
// last command was command number 851
_testPrintCheckList(r);
std::cout << "last command was number: 852 " << std::endl;
// last command was command number 852
const string items853[] = {"bad product!",};
const int itemsNum853[] = {-93,};
_testGetOrder(r,1, items853, itemsNum853);
std::cerr << "last output should be ERROR from command853" << std::endl;
 // last command was command number 853
const string items854[] = {"pro534","pro253","pro351","pro929","pro895",};
const int itemsNum854[] = {3,8,9,3,10,};
_testGetOrder(r,5, items854, itemsNum854);
std::cout << "last command was number: 854 " << std::endl;
// last command was command number 854
_testAddToWaitList(r,64);
std::cout << "last command was number: 855 " << std::endl;
// last command was command number 855
const string items856[] = {"pro535","pro966",};
const int itemsNum856[] = {5,0,};
_testGetOrder(r,-18, items856, itemsNum856);
std::cerr << "last output should be ERROR from command856" << std::endl;
 // last command was command number 856
const string items857[] = {"pro575","pro417",};
const int itemsNum857[] = {1,10,};
_testGetOrder(r,2, items857, itemsNum857);
std::cout << "last command was number: 857 " << std::endl;
// last command was command number 857
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command858" << std::endl;
 // last command was command number 858
_testAddToWaitList(r,87);
std::cout << "last command was number: 859 " << std::endl;
// last command was command number 859
_testSitAtTable(r);
std::cout << "last command was number: 860 " << std::endl;
// last command was command number 860
const string items861[] = {"bad product!","pro241","pro330","pro543","pro294",};
const int itemsNum861[] = {3,5,7,2,10,};
_testGetOrder(r,5, items861, itemsNum861);
std::cerr << "last output should be ERROR from command861" << std::endl;
 // last command was command number 861
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command862" << std::endl;
 // last command was command number 862
_testPrintOpenOrders(r);
std::cout << "last command was number: 863 " << std::endl;
// last command was command number 863
_testGetCheck(r);
std::cout << "last command was number: 864 " << std::endl;
// last command was command number 864
_testSitAtTable(r);
std::cout << "last command was number: 865 " << std::endl;
// last command was command number 865
const string items866[] = {"pro208",};
const int itemsNum866[] = {-60,};
_testGetOrder(r,1, items866, itemsNum866);
std::cerr << "last output should be ERROR from command866" << std::endl;
 // last command was command number 866
_testPrintWaitList(r);
std::cout << "last command was number: 867 " << std::endl;
// last command was command number 867
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command868" << std::endl;
 // last command was command number 868
const string items869[] = {"pro520","pro335",};
const int itemsNum869[] = {6,-89,};
_testGetOrder(r,2, items869, itemsNum869);
std::cerr << "last output should be ERROR from command869" << std::endl;
 // last command was command number 869
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command870" << std::endl;
 // last command was command number 870
const string items871[] = {"pro713","bad product!","pro7",};
const int itemsNum871[] = {-96,9,7,};
_testGetOrder(r,3, items871, itemsNum871);
std::cerr << "last output should be ERROR from command871" << std::endl;
 // last command was command number 871
_testPrintProfits(r);
std::cout << "last command was number: 872 " << std::endl;
// last command was command number 872
const string items873[] = {"bad product!","pro966",};
const int itemsNum873[] = {10,4,};
_testGetOrder(r,2, items873, itemsNum873);
std::cerr << "last output should be ERROR from command873" << std::endl;
 // last command was command number 873
const string items874[] = {"pro956","pro248","pro213","pro757","pro977",};
const int itemsNum874[] = {4,3,3,4,4,};
_testGetOrder(r,5, items874, itemsNum874);
std::cout << "last command was number: 874 " << std::endl;
// last command was command number 874
_testPrintCheckList(r);
std::cout << "last command was number: 875 " << std::endl;
// last command was command number 875
const string items876[] = {"pro745","pro768","pro148","pro240",};
const int itemsNum876[] = {5,3,2,7,};
_testGetOrder(r,4, items876, itemsNum876);
std::cout << "last command was number: 876 " << std::endl;
// last command was command number 876
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command877" << std::endl;
 // last command was command number 877
_testSitAtTable(r);
std::cout << "last command was number: 878 " << std::endl;
// last command was command number 878
const string items879[] = {"pro243","pro502",};
const int itemsNum879[] = {5,5,};
_testGetOrder(r,-48, items879, itemsNum879);
std::cerr << "last output should be ERROR from command879" << std::endl;
 // last command was command number 879
const string items880[] = {"pro502","pro100","pro545","bad product!","pro491",};
const int itemsNum880[] = {5,5,4,9,7,};
_testGetOrder(r,5, items880, itemsNum880);
std::cerr << "last output should be ERROR from command880" << std::endl;
 // last command was command number 880
_testPrintWaitList(r);
std::cout << "last command was number: 881 " << std::endl;
// last command was command number 881
const string items882[] = {"bad product!","pro417","pro595","pro241",};
const int itemsNum882[] = {4,-24,3,4,};
_testGetOrder(r,4, items882, itemsNum882);
std::cerr << "last output should be ERROR from command882" << std::endl;
 // last command was command number 882
_testGetCheck(r);
std::cout << "last command was number: 883 " << std::endl;
// last command was command number 883
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command884" << std::endl;
 // last command was command number 884
const string items885[] = {"pro757","pro158","bad product!",};
const int itemsNum885[] = {10,1,9,};
_testGetOrder(r,3, items885, itemsNum885);
std::cerr << "last output should be ERROR from command885" << std::endl;
 // last command was command number 885
_testAddToWaitList(r,56);
std::cout << "last command was number: 886 " << std::endl;
// last command was command number 886
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command887" << std::endl;
 // last command was command number 887
_testPrintCheckList(r);
std::cout << "last command was number: 888 " << std::endl;
// last command was command number 888
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command889" << std::endl;
 // last command was command number 889
const string items890[] = {"pro390","pro335","pro241","bad product!",};
const int itemsNum890[] = {9,6,10,5,};
_testGetOrder(r,4, items890, itemsNum890);
std::cerr << "last output should be ERROR from command890" << std::endl;
 // last command was command number 890
_testPrintOpenOrders(r);
std::cout << "last command was number: 891 " << std::endl;
// last command was command number 891
const string items892[] = {"bad product!","pro120",};
const int itemsNum892[] = {7,5,};
_testGetOrder(r,2, items892, itemsNum892);
std::cerr << "last output should be ERROR from command892" << std::endl;
 // last command was command number 892
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command893" << std::endl;
 // last command was command number 893
_testPrintServedList(r);
std::cout << "last command was number: 894 " << std::endl;
// last command was command number 894
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command895" << std::endl;
 // last command was command number 895
_testPrintWaitList(r);
std::cout << "last command was number: 896 " << std::endl;
// last command was command number 896
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command897" << std::endl;
 // last command was command number 897
const string items898[] = {"pro253",};
const int itemsNum898[] = {8,};
_testGetOrder(r,1, items898, itemsNum898);
std::cout << "last command was number: 898 " << std::endl;
// last command was command number 898
const string items899[] = {"pro148","pro702",};
const int itemsNum899[] = {2,10,};
_testGetOrder(r,2, items899, itemsNum899);
std::cerr << "last output should be ERROR from command899" << std::endl;
 // last command was command number 899
_testGetCheck(r);
std::cout << "last command was number: 900 " << std::endl;
// last command was command number 900
_testAddToWaitList(r,70);
std::cout << "last command was number: 901 " << std::endl;
// last command was command number 901
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command902" << std::endl;
 // last command was command number 902
_testSitAtTable(r);
std::cout << "last command was number: 903 " << std::endl;
// last command was command number 903
const string items904[] = {"pro648","pro543","bad product!",};
const int itemsNum904[] = {2,9,10,};
_testGetOrder(r,3, items904, itemsNum904);
std::cerr << "last output should be ERROR from command904" << std::endl;
 // last command was command number 904
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command905" << std::endl;
 // last command was command number 905
const string items906[] = {"pro661","pro331","pro230","pro402","pro136",};
const int itemsNum906[] = {8,1,9,7,8,};
_testGetOrder(r,5, items906, itemsNum906);
std::cout << "last command was number: 906 " << std::endl;
// last command was command number 906
const string items907[] = {"pro397","bad product!","pro502","pro351","pro956",};
const int itemsNum907[] = {2,3,4,5,1,};
_testGetOrder(r,5, items907, itemsNum907);
std::cerr << "last output should be ERROR from command907" << std::endl;
 // last command was command number 907
_testAddToWaitList(r,54);
std::cout << "last command was number: 908 " << std::endl;
// last command was command number 908
_testSitAtTable(r);
std::cout << "last command was number: 909 " << std::endl;
// last command was command number 909
_testGetCheck(r);
std::cout << "last command was number: 910 " << std::endl;
// last command was command number 910
const string items911[] = {"pro648","pro742","pro740",};
const int itemsNum911[] = {3,5,10,};
_testGetOrder(r,3, items911, itemsNum911);
std::cout << "last command was number: 911 " << std::endl;
// last command was command number 911
_testPrintServedList(r);
std::cout << "last command was number: 912 " << std::endl;
// last command was command number 912
_testPrintOpenOrders(r);
std::cout << "last command was number: 913 " << std::endl;
// last command was command number 913
_testGetCheck(r);
std::cout << "last command was number: 914 " << std::endl;
// last command was command number 914
_testPrintWaitList(r);
std::cout << "last command was number: 915 " << std::endl;
// last command was command number 915
const string items916[] = {"pro745","pro154","pro285",};
const int itemsNum916[] = {5,2,-11,};
_testGetOrder(r,3, items916, itemsNum916);
std::cerr << "last output should be ERROR from command916" << std::endl;
 // last command was command number 916
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command917" << std::endl;
 // last command was command number 917
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command918" << std::endl;
 // last command was command number 918
const string items919[] = {"pro746",};
const int itemsNum919[] = {1,};
_testGetOrder(r,1, items919, itemsNum919);
std::cerr << "last output should be ERROR from command919" << std::endl;
 // last command was command number 919
_testPrintWaitList(r);
std::cout << "last command was number: 920 " << std::endl;
// last command was command number 920
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command921" << std::endl;
 // last command was command number 921
const string items922[] = {"pro720",};
const int itemsNum922[] = {-56,};
_testGetOrder(r,-56, items922, itemsNum922);
std::cerr << "last output should be ERROR from command922" << std::endl;
 // last command was command number 922
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command923" << std::endl;
 // last command was command number 923
_testAddToWaitList(r,81);
std::cout << "last command was number: 924 " << std::endl;
// last command was command number 924
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command925" << std::endl;
 // last command was command number 925
_testPrintTables(r);
std::cout << "last command was number: 926 " << std::endl;
// last command was command number 926
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command927" << std::endl;
 // last command was command number 927
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command928" << std::endl;
 // last command was command number 928
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command929" << std::endl;
 // last command was command number 929
_testPrintTables(r);
std::cout << "last command was number: 930 " << std::endl;
// last command was command number 930
_testSitAtTable(r);
std::cout << "last command was number: 931 " << std::endl;
// last command was command number 931
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command932" << std::endl;
 // last command was command number 932
_testPrintWaitList(r);
std::cout << "last command was number: 933 " << std::endl;
// last command was command number 933
_testPrintServedList(r);
std::cout << "last command was number: 934 " << std::endl;
// last command was command number 934
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command935" << std::endl;
 // last command was command number 935
const string items936[] = {"pro325","pro402","bad product!","pro810",};
const int itemsNum936[] = {10,7,5,4,};
_testGetOrder(r,4, items936, itemsNum936);
std::cerr << "last output should be ERROR from command936" << std::endl;
 // last command was command number 936
_testPrintTables(r);
std::cout << "last command was number: 937 " << std::endl;
// last command was command number 937
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command938" << std::endl;
 // last command was command number 938
const string items939[] = {"pro977","pro719","pro213",};
const int itemsNum939[] = {3,-95,8,};
_testGetOrder(r,3, items939, itemsNum939);
std::cerr << "last output should be ERROR from command939" << std::endl;
 // last command was command number 939
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command940" << std::endl;
 // last command was command number 940
const string items941[] = {"pro138","pro745","bad product!",};
const int itemsNum941[] = {1,6,4,};
_testGetOrder(r,3, items941, itemsNum941);
std::cerr << "last output should be ERROR from command941" << std::endl;
 // last command was command number 941
_testPrintProfits(r);
std::cout << "last command was number: 942 " << std::endl;
// last command was command number 942
const string items943[] = {"pro703","pro826",};
const int itemsNum943[] = {5,9,};
_testGetOrder(r,2, items943, itemsNum943);
std::cout << "last command was number: 943 " << std::endl;
// last command was command number 943
_testAddToWaitList(r,99);
std::cout << "last command was number: 944 " << std::endl;
// last command was command number 944
_testPrintWaitList(r);
std::cout << "last command was number: 945 " << std::endl;
// last command was command number 945
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command946" << std::endl;
 // last command was command number 946
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command947" << std::endl;
 // last command was command number 947
_testAddToWaitList(r,92);
std::cout << "last command was number: 948 " << std::endl;
// last command was command number 948
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command949" << std::endl;
 // last command was command number 949
_testGetCheck(r);
std::cout << "last command was number: 950 " << std::endl;
// last command was command number 950
_testGetCheck(r);
std::cout << "last command was number: 951 " << std::endl;
// last command was command number 951
_testSitAtTable(r);
std::cout << "last command was number: 952 " << std::endl;
// last command was command number 952
_testAddToWaitList(r,64);
std::cout << "last command was number: 953 " << std::endl;
// last command was command number 953
_testPrintCheckList(r);
std::cout << "last command was number: 954 " << std::endl;
// last command was command number 954
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command955" << std::endl;
 // last command was command number 955
_testSitAtTable(r);
std::cout << "last command was number: 956 " << std::endl;
// last command was command number 956
_testAddToWaitList(r,79);
std::cout << "last command was number: 957 " << std::endl;
// last command was command number 957
_testPrintServedList(r);
std::cout << "last command was number: 958 " << std::endl;
// last command was command number 958
const string items959[] = {"pro457","bad product!",};
const int itemsNum959[] = {4,7,};
_testGetOrder(r,2, items959, itemsNum959);
std::cerr << "last output should be ERROR from command959" << std::endl;
 // last command was command number 959
_testGetCheck(r);
std::cout << "last command was number: 960 " << std::endl;
// last command was command number 960
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command961" << std::endl;
 // last command was command number 961
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command962" << std::endl;
 // last command was command number 962
_testSitAtTable(r);
std::cout << "last command was number: 963 " << std::endl;
// last command was command number 963
_testGetCheck(r);
std::cout << "last command was number: 964 " << std::endl;
// last command was command number 964
const string items965[] = {"pro895","pro648","pro534",};
const int itemsNum965[] = {-45,6,2,};
_testGetOrder(r,3, items965, itemsNum965);
std::cerr << "last output should be ERROR from command965" << std::endl;
 // last command was command number 965
_testGetCheck(r);
std::cout << "last command was number: 966 " << std::endl;
// last command was command number 966
const string items967[] = {"pro592","pro872","pro757","pro502",};
const int itemsNum967[] = {9,9,5,9,};
_testGetOrder(r,-35, items967, itemsNum967);
std::cerr << "last output should be ERROR from command967" << std::endl;
 // last command was command number 967
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command968" << std::endl;
 // last command was command number 968
_testGetCheck(r);
std::cerr << "last output should be ERROR from command969" << std::endl;
 // last command was command number 969
_testPrintCheckList(r);
std::cout << "last command was number: 970 " << std::endl;
// last command was command number 970
_testGetCheck(r);
std::cerr << "last output should be ERROR from command971" << std::endl;
 // last command was command number 971
const string items972[] = {"bad product!","pro303","pro733","pro397",};
const int itemsNum972[] = {3,10,5,9,};
_testGetOrder(r,4, items972, itemsNum972);
std::cerr << "last output should be ERROR from command972" << std::endl;
 // last command was command number 972
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command973" << std::endl;
 // last command was command number 973
const string items974[] = {"pro158","bad product!","pro375",};
const int itemsNum974[] = {4,4,8,};
_testGetOrder(r,3, items974, itemsNum974);
std::cerr << "last output should be ERROR from command974" << std::endl;
 // last command was command number 974
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command975" << std::endl;
 // last command was command number 975
_testGetCheck(r);
std::cerr << "last output should be ERROR from command976" << std::endl;
 // last command was command number 976
_testSitAtTable(r);
std::cout << "last command was number: 977 " << std::endl;
// last command was command number 977
const string items978[] = {"pro136","pro855","pro956","pro592","bad product!",};
const int itemsNum978[] = {5,7,3,1,10,};
_testGetOrder(r,5, items978, itemsNum978);
std::cerr << "last output should be ERROR from command978" << std::endl;
 // last command was command number 978
_testSitAtTable(r);
std::cout << "last command was number: 979 " << std::endl;
// last command was command number 979
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command980" << std::endl;
 // last command was command number 980
const string items981[] = {"bad product!","pro402",};
const int itemsNum981[] = {9,8,};
_testGetOrder(r,2, items981, itemsNum981);
std::cerr << "last output should be ERROR from command981" << std::endl;
 // last command was command number 981
_testSitAtTable(r);
std::cout << "last command was number: 982 " << std::endl;
// last command was command number 982
_testGetCheck(r);
std::cerr << "last output should be ERROR from command983" << std::endl;
 // last command was command number 983
_testGetCheck(r);
std::cerr << "last output should be ERROR from command984" << std::endl;
 // last command was command number 984
_testPrintServedList(r);
std::cout << "last command was number: 985 " << std::endl;
// last command was command number 985
const string items986[] = {"pro713","pro294",};
const int itemsNum986[] = {3,-46,};
_testGetOrder(r,2, items986, itemsNum986);
std::cerr << "last output should be ERROR from command986" << std::endl;
 // last command was command number 986
_testGetCheck(r);
std::cerr << "last output should be ERROR from command987" << std::endl;
 // last command was command number 987
_testGetCheck(r);
std::cerr << "last output should be ERROR from command988" << std::endl;
 // last command was command number 988
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command989" << std::endl;
 // last command was command number 989
_testPrintCheckList(r);
std::cout << "last command was number: 990 " << std::endl;
// last command was command number 990
_testGetCheck(r);
std::cerr << "last output should be ERROR from command991" << std::endl;
 // last command was command number 991
_testGetCheck(r);
std::cerr << "last output should be ERROR from command992" << std::endl;
 // last command was command number 992
_testAddToWaitList(r,89);
std::cout << "last command was number: 993 " << std::endl;
// last command was command number 993
_testGetCheck(r);
std::cerr << "last output should be ERROR from command994" << std::endl;
 // last command was command number 994
_testPrintProfits(r);
std::cout << "last command was number: 995 " << std::endl;
// last command was command number 995
_testSitAtTable(r);
std::cout << "last command was number: 996 " << std::endl;
// last command was command number 996
_testAddToWaitList(r,83);
std::cout << "last command was number: 997 " << std::endl;
// last command was command number 997
_testGetCheck(r);
std::cerr << "last output should be ERROR from command998" << std::endl;
 // last command was command number 998
_testAddToWaitList(r,94);
std::cout << "last command was number: 999 " << std::endl;
// last command was command number 999
const string items1000[] = {"bad product!",};
const int itemsNum1000[] = {3,};
_testGetOrder(r,1, items1000, itemsNum1000);
std::cerr << "last output should be ERROR from command1000" << std::endl;
 // last command was command number 1000
const string items1001[] = {"pro745","pro595","pro592",};
const int itemsNum1001[] = {3,6,5,};
_testGetOrder(r,3, items1001, itemsNum1001);
std::cout << "last command was number: 1001 " << std::endl;
// last command was command number 1001
_testAddToWaitList(r,97);
std::cout << "last command was number: 1002 " << std::endl;
// last command was command number 1002
_testPrintWaitList(r);
std::cout << "last command was number: 1003 " << std::endl;
// last command was command number 1003
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1004" << std::endl;
 // last command was command number 1004
const string items1005[] = {"pro381","pro956","pro253","pro230",};
const int itemsNum1005[] = {5,3,3,-28,};
_testGetOrder(r,4, items1005, itemsNum1005);
std::cerr << "last output should be ERROR from command1005" << std::endl;
 // last command was command number 1005
_testPrintServedList(r);
std::cout << "last command was number: 1006 " << std::endl;
// last command was command number 1006
const string items1007[] = {"pro299","pro987","pro184",};
const int itemsNum1007[] = {4,1,2,};
_testGetOrder(r,-62, items1007, itemsNum1007);
std::cerr << "last output should be ERROR from command1007" << std::endl;
 // last command was command number 1007
_testPrintServedList(r);
std::cout << "last command was number: 1008 " << std::endl;
// last command was command number 1008
_testSitAtTable(r);
std::cout << "last command was number: 1009 " << std::endl;
// last command was command number 1009
_testGetCheck(r);
std::cout << "last command was number: 1010 " << std::endl;
// last command was command number 1010
const string items1011[] = {"pro303","pro100","bad product!","pro240",};
const int itemsNum1011[] = {7,4,2,3,};
_testGetOrder(r,4, items1011, itemsNum1011);
std::cerr << "last output should be ERROR from command1011" << std::endl;
 // last command was command number 1011
_testSitAtTable(r);
std::cout << "last command was number: 1012 " << std::endl;
// last command was command number 1012
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1013" << std::endl;
 // last command was command number 1013
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1014" << std::endl;
 // last command was command number 1014
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1015" << std::endl;
 // last command was command number 1015
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1016" << std::endl;
 // last command was command number 1016
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1017" << std::endl;
 // last command was command number 1017
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1018" << std::endl;
 // last command was command number 1018
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1019" << std::endl;
 // last command was command number 1019
const string items1020[] = {"pro912","pro535",};
const int itemsNum1020[] = {1,10,};
_testGetOrder(r,-17, items1020, itemsNum1020);
std::cerr << "last output should be ERROR from command1020" << std::endl;
 // last command was command number 1020
const string items1021[] = {"pro491",};
const int itemsNum1021[] = {-62,};
_testGetOrder(r,1, items1021, itemsNum1021);
std::cerr << "last output should be ERROR from command1021" << std::endl;
 // last command was command number 1021
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1022" << std::endl;
 // last command was command number 1022
_testPrintTables(r);
std::cout << "last command was number: 1023 " << std::endl;
// last command was command number 1023
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1024" << std::endl;
 // last command was command number 1024
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1025" << std::endl;
 // last command was command number 1025
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1026" << std::endl;
 // last command was command number 1026
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1027" << std::endl;
 // last command was command number 1027
_testPrintCheckList(r);
std::cout << "last command was number: 1028 " << std::endl;
// last command was command number 1028
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1029" << std::endl;
 // last command was command number 1029
_testPrintWaitList(r);
std::cout << "last command was number: 1030 " << std::endl;
// last command was command number 1030
const string items1031[] = {"bad product!","pro331","pro491","pro77",};
const int itemsNum1031[] = {7,8,8,5,};
_testGetOrder(r,4, items1031, itemsNum1031);
std::cerr << "last output should be ERROR from command1031" << std::endl;
 // last command was command number 1031
_testPrintCheckList(r);
std::cout << "last command was number: 1032 " << std::endl;
// last command was command number 1032
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1033" << std::endl;
 // last command was command number 1033
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1034" << std::endl;
 // last command was command number 1034
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1035" << std::endl;
 // last command was command number 1035
_testSitAtTable(r);
std::cout << "last command was number: 1036 " << std::endl;
// last command was command number 1036
_testAddToWaitList(r,75);
std::cout << "last command was number: 1037 " << std::endl;
// last command was command number 1037
_testAddToWaitList(r,57);
std::cout << "last command was number: 1038 " << std::endl;
// last command was command number 1038
const string items1039[] = {"pro365",};
const int itemsNum1039[] = {4,};
_testGetOrder(r,1, items1039, itemsNum1039);
std::cout << "last command was number: 1039 " << std::endl;
// last command was command number 1039
_testPrintServedList(r);
std::cout << "last command was number: 1040 " << std::endl;
// last command was command number 1040
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1041" << std::endl;
 // last command was command number 1041
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1042" << std::endl;
 // last command was command number 1042
const string items1043[] = {"bad product!",};
const int itemsNum1043[] = {4,};
_testGetOrder(r,1, items1043, itemsNum1043);
std::cerr << "last output should be ERROR from command1043" << std::endl;
 // last command was command number 1043
const string items1044[] = {"pro294","pro137","pro534","pro703","pro397",};
const int itemsNum1044[] = {6,4,1,7,5,};
_testGetOrder(r,5, items1044, itemsNum1044);
std::cout << "last command was number: 1044 " << std::endl;
// last command was command number 1044
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1045" << std::endl;
 // last command was command number 1045
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1046" << std::endl;
 // last command was command number 1046
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1047" << std::endl;
 // last command was command number 1047
const string items1048[] = {"pro760","pro981","pro137","pro757","pro987",};
const int itemsNum1048[] = {8,6,6,6,6,};
_testGetOrder(r,5, items1048, itemsNum1048);
std::cout << "last command was number: 1048 " << std::endl;
// last command was command number 1048
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1049" << std::endl;
 // last command was command number 1049
_testSitAtTable(r);
std::cout << "last command was number: 1050 " << std::endl;
// last command was command number 1050
const string items1051[] = {"pro262","pro981","pro331","pro374","pro539",};
const int itemsNum1051[] = {10,4,7,5,2,};
_testGetOrder(r,5, items1051, itemsNum1051);
std::cout << "last command was number: 1051 " << std::endl;
// last command was command number 1051
_testGetCheck(r);
std::cout << "last command was number: 1052 " << std::endl;
// last command was command number 1052
const string items1053[] = {"pro981","pro912","pro201","pro810","pro335",};
const int itemsNum1053[] = {10,0,6,6,3,};
_testGetOrder(r,-86, items1053, itemsNum1053);
std::cerr << "last output should be ERROR from command1053" << std::endl;
 // last command was command number 1053
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1054" << std::endl;
 // last command was command number 1054
const string items1055[] = {"pro863","pro328",};
const int itemsNum1055[] = {1,7,};
_testGetOrder(r,2, items1055, itemsNum1055);
std::cout << "last command was number: 1055 " << std::endl;
// last command was command number 1055
_testPrintServedList(r);
std::cout << "last command was number: 1056 " << std::endl;
// last command was command number 1056
const string items1057[] = {"bad product!","pro987","pro299","pro100",};
const int itemsNum1057[] = {7,8,10,5,};
_testGetOrder(r,4, items1057, itemsNum1057);
std::cerr << "last output should be ERROR from command1057" << std::endl;
 // last command was command number 1057
_testPrintServedList(r);
std::cout << "last command was number: 1058 " << std::endl;
// last command was command number 1058
_testPrintWaitList(r);
std::cout << "last command was number: 1059 " << std::endl;
// last command was command number 1059
_testAddToWaitList(r,82);
std::cout << "last command was number: 1060 " << std::endl;
// last command was command number 1060
const string items1061[] = {"pro987","bad product!",};
const int itemsNum1061[] = {8,5,};
_testGetOrder(r,2, items1061, itemsNum1061);
std::cerr << "last output should be ERROR from command1061" << std::endl;
 // last command was command number 1061
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1062" << std::endl;
 // last command was command number 1062
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1063" << std::endl;
 // last command was command number 1063
const string items1064[] = {"pro335",};
const int itemsNum1064[] = {1,};
_testGetOrder(r,1, items1064, itemsNum1064);
std::cout << "last command was number: 1064 " << std::endl;
// last command was command number 1064
const string items1065[] = {"pro402","pro740","bad product!","pro508","pro703",};
const int itemsNum1065[] = {4,4,2,8,3,};
_testGetOrder(r,5, items1065, itemsNum1065);
std::cerr << "last output should be ERROR from command1065" << std::endl;
 // last command was command number 1065
_testPrintProfits(r);
std::cout << "last command was number: 1066 " << std::endl;
// last command was command number 1066
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1067" << std::endl;
 // last command was command number 1067
_testPrintOpenOrders(r);
std::cout << "last command was number: 1068 " << std::endl;
// last command was command number 1068
const string items1069[] = {"bad product!","pro969","pro158","pro184",};
const int itemsNum1069[] = {10,5,4,5,};
_testGetOrder(r,4, items1069, itemsNum1069);
std::cerr << "last output should be ERROR from command1069" << std::endl;
 // last command was command number 1069
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1070" << std::endl;
 // last command was command number 1070
const string items1071[] = {"pro821","pro253","pro912","pro520","pro303",};
const int itemsNum1071[] = {3,1,7,7,8,};
_testGetOrder(r,5, items1071, itemsNum1071);
std::cout << "last command was number: 1071 " << std::endl;
// last command was command number 1071
_testAddToWaitList(r,68);
std::cout << "last command was number: 1072 " << std::endl;
// last command was command number 1072
_testAddToWaitList(r,75);
std::cout << "last command was number: 1073 " << std::endl;
// last command was command number 1073
const string items1074[] = {"pro988","pro863","pro457","pro390",};
const int itemsNum1074[] = {5,9,-61,4,};
_testGetOrder(r,4, items1074, itemsNum1074);
std::cerr << "last output should be ERROR from command1074" << std::endl;
 // last command was command number 1074
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1075" << std::endl;
 // last command was command number 1075
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1076" << std::endl;
 // last command was command number 1076
_testSitAtTable(r);
std::cout << "last command was number: 1077 " << std::endl;
// last command was command number 1077
const string items1078[] = {"bad product!","pro397","pro895",};
const int itemsNum1078[] = {5,10,1,};
_testGetOrder(r,3, items1078, itemsNum1078);
std::cerr << "last output should be ERROR from command1078" << std::endl;
 // last command was command number 1078
_testAddToWaitList(r,51);
std::cout << "last command was number: 1079 " << std::endl;
// last command was command number 1079
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1080" << std::endl;
 // last command was command number 1080
_testPrintWaitList(r);
std::cout << "last command was number: 1081 " << std::endl;
// last command was command number 1081
const string items1082[] = {"pro374",};
const int itemsNum1082[] = {1,};
_testGetOrder(r,1, items1082, itemsNum1082);
std::cout << "last command was number: 1082 " << std::endl;
// last command was command number 1082
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1083" << std::endl;
 // last command was command number 1083
const string items1084[] = {"pro959","pro872",};
const int itemsNum1084[] = {4,-39,};
_testGetOrder(r,2, items1084, itemsNum1084);
std::cerr << "last output should be ERROR from command1084" << std::endl;
 // last command was command number 1084
const string items1085[] = {"pro502","pro100","pro987","pro377",};
const int itemsNum1085[] = {7,-57,1,10,};
_testGetOrder(r,-14, items1085, itemsNum1085);
std::cerr << "last output should be ERROR from command1085" << std::endl;
 // last command was command number 1085
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1086" << std::endl;
 // last command was command number 1086
const string items1087[] = {"pro702","pro201",};
const int itemsNum1087[] = {7,2,};
_testGetOrder(r,2, items1087, itemsNum1087);
std::cout << "last command was number: 1087 " << std::endl;
// last command was command number 1087
const string items1088[] = {"pro328",};
const int itemsNum1088[] = {-45,};
_testGetOrder(r,-13, items1088, itemsNum1088);
std::cerr << "last output should be ERROR from command1088" << std::endl;
 // last command was command number 1088
_testSitAtTable(r);
std::cout << "last command was number: 1089 " << std::endl;
// last command was command number 1089
const string items1090[] = {"pro947","pro328","pro757","bad product!",};
const int itemsNum1090[] = {1,8,3,1,};
_testGetOrder(r,4, items1090, itemsNum1090);
std::cerr << "last output should be ERROR from command1090" << std::endl;
 // last command was command number 1090
_testAddToWaitList(r,90);
std::cout << "last command was number: 1091 " << std::endl;
// last command was command number 1091
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1092" << std::endl;
 // last command was command number 1092
const string items1093[] = {"pro167","bad product!","pro720",};
const int itemsNum1093[] = {9,-41,2,};
_testGetOrder(r,-44, items1093, itemsNum1093);
std::cerr << "last output should be ERROR from command1093" << std::endl;
 // last command was command number 1093
const string items1094[] = {"bad product!","pro535",};
const int itemsNum1094[] = {4,10,};
_testGetOrder(r,2, items1094, itemsNum1094);
std::cerr << "last output should be ERROR from command1094" << std::endl;
 // last command was command number 1094
const string items1095[] = {"pro545","pro703",};
const int itemsNum1095[] = {1,6,};
_testGetOrder(r,-94, items1095, itemsNum1095);
std::cerr << "last output should be ERROR from command1095" << std::endl;
 // last command was command number 1095
_testGetCheck(r);
std::cout << "last command was number: 1096 " << std::endl;
// last command was command number 1096
const string items1097[] = {"pro508","pro303","pro299","pro255","pro709",};
const int itemsNum1097[] = {9,6,4,2,2,};
_testGetOrder(r,-2, items1097, itemsNum1097);
std::cerr << "last output should be ERROR from command1097" << std::endl;
 // last command was command number 1097
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1098" << std::endl;
 // last command was command number 1098
const string items1099[] = {"pro262",};
const int itemsNum1099[] = {10,};
_testGetOrder(r,-72, items1099, itemsNum1099);
std::cerr << "last output should be ERROR from command1099" << std::endl;
 // last command was command number 1099
const string items1100[] = {"pro491","pro243","pro375","pro208",};
const int itemsNum1100[] = {3,1,3,1,};
_testGetOrder(r,4, items1100, itemsNum1100);
std::cout << "last command was number: 1100 " << std::endl;
// last command was command number 1100
_testPrintProfits(r);
std::cout << "last command was number: 1101 " << std::endl;
// last command was command number 1101
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1102" << std::endl;
 // last command was command number 1102
_testPrintServedList(r);
std::cout << "last command was number: 1103 " << std::endl;
// last command was command number 1103
_testPrintTables(r);
std::cout << "last command was number: 1104 " << std::endl;
// last command was command number 1104
const string items1105[] = {"pro6","pro397",};
const int itemsNum1105[] = {8,-71,};
_testGetOrder(r,2, items1105, itemsNum1105);
std::cerr << "last output should be ERROR from command1105" << std::endl;
 // last command was command number 1105
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1106" << std::endl;
 // last command was command number 1106
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1107" << std::endl;
 // last command was command number 1107
_testPrintWaitList(r);
std::cout << "last command was number: 1108 " << std::endl;
// last command was command number 1108
const string items1109[] = {"pro390",};
const int itemsNum1109[] = {2,};
_testGetOrder(r,-22, items1109, itemsNum1109);
std::cerr << "last output should be ERROR from command1109" << std::endl;
 // last command was command number 1109
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1110" << std::endl;
 // last command was command number 1110
_testSitAtTable(r);
std::cout << "last command was number: 1111 " << std::endl;
// last command was command number 1111
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1112" << std::endl;
 // last command was command number 1112
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1113" << std::endl;
 // last command was command number 1113
_testAddToWaitList(r,74);
std::cout << "last command was number: 1114 " << std::endl;
// last command was command number 1114
_testAddToWaitList(r,89);
std::cout << "last command was number: 1115 " << std::endl;
// last command was command number 1115
_testGetCheck(r);
std::cout << "last command was number: 1116 " << std::endl;
// last command was command number 1116
_testSitAtTable(r);
std::cout << "last command was number: 1117 " << std::endl;
// last command was command number 1117
const string items1118[] = {"pro325","pro595","pro248",};
const int itemsNum1118[] = {9,6,9,};
_testGetOrder(r,3, items1118, itemsNum1118);
std::cout << "last command was number: 1118 " << std::endl;
// last command was command number 1118
_testSitAtTable(r);
std::cout << "last command was number: 1119 " << std::endl;
// last command was command number 1119
_testGetCheck(r);
std::cout << "last command was number: 1120 " << std::endl;
// last command was command number 1120
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1121" << std::endl;
 // last command was command number 1121
_testPrintCheckList(r);
std::cout << "last command was number: 1122 " << std::endl;
// last command was command number 1122
const string items1123[] = {"bad product!","pro703",};
const int itemsNum1123[] = {8,1,};
_testGetOrder(r,2, items1123, itemsNum1123);
std::cerr << "last output should be ERROR from command1123" << std::endl;
 // last command was command number 1123
const string items1124[] = {"pro294","pro77","bad product!","pro502",};
const int itemsNum1124[] = {1,9,3,6,};
_testGetOrder(r,4, items1124, itemsNum1124);
std::cerr << "last output should be ERROR from command1124" << std::endl;
 // last command was command number 1124
const string items1125[] = {"pro742","pro608","pro736","pro417","pro720",};
const int itemsNum1125[] = {4,9,5,9,4,};
_testGetOrder(r,5, items1125, itemsNum1125);
std::cout << "last command was number: 1125 " << std::endl;
// last command was command number 1125
_testGetCheck(r);
std::cout << "last command was number: 1126 " << std::endl;
// last command was command number 1126
_testPrintOpenOrders(r);
std::cout << "last command was number: 1127 " << std::endl;
// last command was command number 1127
_testPrintTables(r);
std::cout << "last command was number: 1128 " << std::endl;
// last command was command number 1128
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1129" << std::endl;
 // last command was command number 1129
_testPrintTables(r);
std::cout << "last command was number: 1130 " << std::endl;
// last command was command number 1130
_testPrintProfits(r);
std::cout << "last command was number: 1131 " << std::endl;
// last command was command number 1131
_testGetCheck(r);
std::cout << "last command was number: 1132 " << std::endl;
// last command was command number 1132
const string items1133[] = {"pro158",};
const int itemsNum1133[] = {2,};
_testGetOrder(r,-77, items1133, itemsNum1133);
std::cerr << "last output should be ERROR from command1133" << std::endl;
 // last command was command number 1133
const string items1134[] = {"pro253","pro709","pro895","pro929",};
const int itemsNum1134[] = {1,3,9,2,};
_testGetOrder(r,4, items1134, itemsNum1134);
std::cout << "last command was number: 1134 " << std::endl;
// last command was command number 1134
const string items1135[] = {"pro351","pro77","pro713","bad product!",};
const int itemsNum1135[] = {8,1,6,5,};
_testGetOrder(r,4, items1135, itemsNum1135);
std::cerr << "last output should be ERROR from command1135" << std::endl;
 // last command was command number 1135
_testSitAtTable(r);
std::cout << "last command was number: 1136 " << std::endl;
// last command was command number 1136
const string items1137[] = {"pro375",};
const int itemsNum1137[] = {1,};
_testGetOrder(r,-57, items1137, itemsNum1137);
std::cerr << "last output should be ERROR from command1137" << std::endl;
 // last command was command number 1137
_testAddToWaitList(r,57);
std::cout << "last command was number: 1138 " << std::endl;
// last command was command number 1138
const string items1139[] = {"bad product!","pro592","pro6",};
const int itemsNum1139[] = {7,7,4,};
_testGetOrder(r,3, items1139, itemsNum1139);
std::cerr << "last output should be ERROR from command1139" << std::endl;
 // last command was command number 1139
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1140" << std::endl;
 // last command was command number 1140
const string items1141[] = {"pro148","bad product!",};
const int itemsNum1141[] = {8,8,};
_testGetOrder(r,2, items1141, itemsNum1141);
std::cerr << "last output should be ERROR from command1141" << std::endl;
 // last command was command number 1141
_testAddToWaitList(r,100);
std::cout << "last command was number: 1142 " << std::endl;
// last command was command number 1142
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1143" << std::endl;
 // last command was command number 1143
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1144" << std::endl;
 // last command was command number 1144
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1145" << std::endl;
 // last command was command number 1145
_testAddToWaitList(r,82);
std::cout << "last command was number: 1146 " << std::endl;
// last command was command number 1146
const string items1147[] = {"pro365","pro397",};
const int itemsNum1147[] = {5,9,};
_testGetOrder(r,2, items1147, itemsNum1147);
std::cout << "last command was number: 1147 " << std::endl;
// last command was command number 1147
_testGetCheck(r);
std::cout << "last command was number: 1148 " << std::endl;
// last command was command number 1148
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1149" << std::endl;
 // last command was command number 1149
const string items1150[] = {"pro262","pro158","pro745","pro390",};
const int itemsNum1150[] = {8,10,2,6,};
_testGetOrder(r,4, items1150, itemsNum1150);
std::cout << "last command was number: 1150 " << std::endl;
// last command was command number 1150
_testAddToWaitList(r,70);
std::cout << "last command was number: 1151 " << std::endl;
// last command was command number 1151
const string items1152[] = {"pro661","pro508","pro381",};
const int itemsNum1152[] = {8,-66,6,};
_testGetOrder(r,3, items1152, itemsNum1152);
std::cerr << "last output should be ERROR from command1152" << std::endl;
 // last command was command number 1152
_testPrintWaitList(r);
std::cout << "last command was number: 1153 " << std::endl;
// last command was command number 1153
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1154" << std::endl;
 // last command was command number 1154
const string items1155[] = {"pro156",};
const int itemsNum1155[] = {5,};
_testGetOrder(r,-3, items1155, itemsNum1155);
std::cerr << "last output should be ERROR from command1155" << std::endl;
 // last command was command number 1155
const string items1156[] = {"bad product!","pro740","pro433","pro230",};
const int itemsNum1156[] = {9,2,5,7,};
_testGetOrder(r,4, items1156, itemsNum1156);
std::cerr << "last output should be ERROR from command1156" << std::endl;
 // last command was command number 1156
const string items1157[] = {"pro959","pro969","pro977","pro303","bad product!",};
const int itemsNum1157[] = {5,4,7,3,4,};
_testGetOrder(r,5, items1157, itemsNum1157);
std::cerr << "last output should be ERROR from command1157" << std::endl;
 // last command was command number 1157
const string items1158[] = {"pro156","pro137","pro262","pro605","pro299",};
const int itemsNum1158[] = {7,6,6,-73,6,};
_testGetOrder(r,-79, items1158, itemsNum1158);
std::cerr << "last output should be ERROR from command1158" << std::endl;
 // last command was command number 1158
const string items1159[] = {"pro956",};
const int itemsNum1159[] = {2,};
_testGetOrder(r,1, items1159, itemsNum1159);
std::cout << "last command was number: 1159 " << std::endl;
// last command was command number 1159
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1160" << std::endl;
 // last command was command number 1160
const string items1161[] = {"bad product!",};
const int itemsNum1161[] = {8,};
_testGetOrder(r,-32, items1161, itemsNum1161);
std::cerr << "last output should be ERROR from command1161" << std::endl;
 // last command was command number 1161
_testPrintProfits(r);
std::cout << "last command was number: 1162 " << std::endl;
// last command was command number 1162
_testSitAtTable(r);
std::cout << "last command was number: 1163 " << std::endl;
// last command was command number 1163
_testPrintCheckList(r);
std::cout << "last command was number: 1164 " << std::endl;
// last command was command number 1164
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1165" << std::endl;
 // last command was command number 1165
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1166" << std::endl;
 // last command was command number 1166
_testAddToWaitList(r,62);
std::cout << "last command was number: 1167 " << std::endl;
// last command was command number 1167
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1168" << std::endl;
 // last command was command number 1168
const string items1169[] = {"bad product!",};
const int itemsNum1169[] = {1,};
_testGetOrder(r,1, items1169, itemsNum1169);
std::cerr << "last output should be ERROR from command1169" << std::endl;
 // last command was command number 1169
_testGetCheck(r);
std::cout << "last command was number: 1170 " << std::endl;
// last command was command number 1170
_testPrintWaitList(r);
std::cout << "last command was number: 1171 " << std::endl;
// last command was command number 1171
_testPrintTables(r);
std::cout << "last command was number: 1172 " << std::endl;
// last command was command number 1172
const string items1173[] = {"pro709","pro230",};
const int itemsNum1173[] = {3,4,};
_testGetOrder(r,2, items1173, itemsNum1173);
std::cout << "last command was number: 1173 " << std::endl;
// last command was command number 1173
const string items1174[] = {"pro154",};
const int itemsNum1174[] = {8,};
_testGetOrder(r,1, items1174, itemsNum1174);
std::cerr << "last output should be ERROR from command1174" << std::endl;
 // last command was command number 1174
_testPrintCheckList(r);
std::cout << "last command was number: 1175 " << std::endl;
// last command was command number 1175
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1176" << std::endl;
 // last command was command number 1176
_testAddToWaitList(r,55);
std::cout << "last command was number: 1177 " << std::endl;
// last command was command number 1177
const string items1178[] = {"pro912","pro595","pro821","pro137","bad product!",};
const int itemsNum1178[] = {3,2,2,3,9,};
_testGetOrder(r,5, items1178, itemsNum1178);
std::cerr << "last output should be ERROR from command1178" << std::endl;
 // last command was command number 1178
_testPrintServedList(r);
std::cout << "last command was number: 1179 " << std::endl;
// last command was command number 1179
_testGetCheck(r);
std::cout << "last command was number: 1180 " << std::endl;
// last command was command number 1180
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1181" << std::endl;
 // last command was command number 1181
_testPrintProfits(r);
std::cout << "last command was number: 1182 " << std::endl;
// last command was command number 1182
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1183" << std::endl;
 // last command was command number 1183
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1184" << std::endl;
 // last command was command number 1184
_testPrintServedList(r);
std::cout << "last command was number: 1185 " << std::endl;
// last command was command number 1185
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1186" << std::endl;
 // last command was command number 1186
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1187" << std::endl;
 // last command was command number 1187
const string items1188[] = {"bad product!","pro969",};
const int itemsNum1188[] = {-37,1,};
_testGetOrder(r,2, items1188, itemsNum1188);
std::cerr << "last output should be ERROR from command1188" << std::endl;
 // last command was command number 1188
const string items1189[] = {"pro240","pro184","pro167",};
const int itemsNum1189[] = {10,10,3,};
_testGetOrder(r,-25, items1189, itemsNum1189);
std::cerr << "last output should be ERROR from command1189" << std::endl;
 // last command was command number 1189
_testGetCheck(r);
std::cout << "last command was number: 1190 " << std::endl;
// last command was command number 1190
_testPrintTables(r);
std::cout << "last command was number: 1191 " << std::endl;
// last command was command number 1191
_testGetCheck(r);
std::cout << "last command was number: 1192 " << std::endl;
// last command was command number 1192
const string items1193[] = {"pro535","pro303","pro740","pro299","pro592",};
const int itemsNum1193[] = {4,1,9,7,6,};
_testGetOrder(r,5, items1193, itemsNum1193);
std::cerr << "last output should be ERROR from command1193" << std::endl;
 // last command was command number 1193
const string items1194[] = {"pro826","bad product!",};
const int itemsNum1194[] = {-2,10,};
_testGetOrder(r,2, items1194, itemsNum1194);
std::cerr << "last output should be ERROR from command1194" << std::endl;
 // last command was command number 1194
const string items1195[] = {"pro390",};
const int itemsNum1195[] = {8,};
_testGetOrder(r,-55, items1195, itemsNum1195);
std::cerr << "last output should be ERROR from command1195" << std::endl;
 // last command was command number 1195
_testPrintTables(r);
std::cout << "last command was number: 1196 " << std::endl;
// last command was command number 1196
_testPrintProfits(r);
std::cout << "last command was number: 1197 " << std::endl;
// last command was command number 1197
const string items1198[] = {"pro947",};
const int itemsNum1198[] = {-16,};
_testGetOrder(r,1, items1198, itemsNum1198);
std::cerr << "last output should be ERROR from command1198" << std::endl;
 // last command was command number 1198
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1199" << std::endl;
 // last command was command number 1199
_testPrintProfits(r);
std::cout << "last command was number: 1200 " << std::endl;
// last command was command number 1200
_testAddToWaitList(r,83);
std::cout << "last command was number: 1201 " << std::endl;
// last command was command number 1201
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1202" << std::endl;
 // last command was command number 1202
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1203" << std::endl;
 // last command was command number 1203
const string items1204[] = {"pro595",};
const int itemsNum1204[] = {-14,};
_testGetOrder(r,-65, items1204, itemsNum1204);
std::cerr << "last output should be ERROR from command1204" << std::endl;
 // last command was command number 1204
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1205" << std::endl;
 // last command was command number 1205
_testAddToWaitList(r,99);
std::cout << "last command was number: 1206 " << std::endl;
// last command was command number 1206
const string items1207[] = {"pro330","pro977","pro303","pro981",};
const int itemsNum1207[] = {5,10,10,7,};
_testGetOrder(r,4, items1207, itemsNum1207);
std::cerr << "last output should be ERROR from command1207" << std::endl;
 // last command was command number 1207
_testSitAtTable(r);
std::cout << "last command was number: 1208 " << std::endl;
// last command was command number 1208
const string items1209[] = {"pro417","pro703","bad product!",};
const int itemsNum1209[] = {3,6,10,};
_testGetOrder(r,3, items1209, itemsNum1209);
std::cerr << "last output should be ERROR from command1209" << std::endl;
 // last command was command number 1209
_testSitAtTable(r);
std::cout << "last command was number: 1210 " << std::endl;
// last command was command number 1210
const string items1211[] = {"pro213","pro863",};
const int itemsNum1211[] = {4,5,};
_testGetOrder(r,2, items1211, itemsNum1211);
std::cout << "last command was number: 1211 " << std::endl;
// last command was command number 1211
_testAddToWaitList(r,73);
std::cout << "last command was number: 1212 " << std::endl;
// last command was command number 1212
const string items1213[] = {"pro733",};
const int itemsNum1213[] = {5,};
_testGetOrder(r,1, items1213, itemsNum1213);
std::cout << "last command was number: 1213 " << std::endl;
// last command was command number 1213
const string items1214[] = {"pro821","pro381","pro733",};
const int itemsNum1214[] = {2,1,10,};
_testGetOrder(r,3, items1214, itemsNum1214);
std::cerr << "last output should be ERROR from command1214" << std::endl;
 // last command was command number 1214
const string items1215[] = {"pro977","pro757","pro213","pro709",};
const int itemsNum1215[] = {9,-90,8,3,};
_testGetOrder(r,4, items1215, itemsNum1215);
std::cerr << "last output should be ERROR from command1215" << std::endl;
 // last command was command number 1215
_testAddToWaitList(r,52);
std::cout << "last command was number: 1216 " << std::endl;
// last command was command number 1216
_testSitAtTable(r);
std::cout << "last command was number: 1217 " << std::endl;
// last command was command number 1217
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1218" << std::endl;
 // last command was command number 1218
_testPrintServedList(r);
std::cout << "last command was number: 1219 " << std::endl;
// last command was command number 1219
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1220" << std::endl;
 // last command was command number 1220
const string items1221[] = {"pro661","bad product!","pro929","pro956","pro208",};
const int itemsNum1221[] = {9,10,3,4,8,};
_testGetOrder(r,5, items1221, itemsNum1221);
std::cerr << "last output should be ERROR from command1221" << std::endl;
 // last command was command number 1221
_testPrintProfits(r);
std::cout << "last command was number: 1222 " << std::endl;
// last command was command number 1222
_testSitAtTable(r);
std::cout << "last command was number: 1223 " << std::endl;
// last command was command number 1223
_testPrintOpenOrders(r);
std::cout << "last command was number: 1224 " << std::endl;
// last command was command number 1224
const string items1225[] = {"pro956","pro608","bad product!",};
const int itemsNum1225[] = {10,-91,1,};
_testGetOrder(r,3, items1225, itemsNum1225);
std::cerr << "last output should be ERROR from command1225" << std::endl;
 // last command was command number 1225
const string items1226[] = {"pro253","pro947","pro491",};
const int itemsNum1226[] = {9,8,10,};
_testGetOrder(r,3, items1226, itemsNum1226);
std::cout << "last command was number: 1226 " << std::endl;
// last command was command number 1226
_testGetCheck(r);
std::cout << "last command was number: 1227 " << std::endl;
// last command was command number 1227
_testAddToWaitList(r,70);
std::cout << "last command was number: 1228 " << std::endl;
// last command was command number 1228
_testPrintWaitList(r);
std::cout << "last command was number: 1229 " << std::endl;
// last command was command number 1229
_testAddToWaitList(r,77);
std::cout << "last command was number: 1230 " << std::endl;
// last command was command number 1230
const string items1231[] = {"pro595","pro331",};
const int itemsNum1231[] = {4,2,};
_testGetOrder(r,2, items1231, itemsNum1231);
std::cout << "last command was number: 1231 " << std::endl;
// last command was command number 1231
_testPrintTables(r);
std::cout << "last command was number: 1232 " << std::endl;
// last command was command number 1232
const string items1233[] = {"pro872","bad product!",};
const int itemsNum1233[] = {-100,1,};
_testGetOrder(r,2, items1233, itemsNum1233);
std::cerr << "last output should be ERROR from command1233" << std::endl;
 // last command was command number 1233
_testPrintWaitList(r);
std::cout << "last command was number: 1234 " << std::endl;
// last command was command number 1234
_testGetCheck(r);
std::cout << "last command was number: 1235 " << std::endl;
// last command was command number 1235
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1236" << std::endl;
 // last command was command number 1236
_testGetCheck(r);
std::cout << "last command was number: 1237 " << std::endl;
// last command was command number 1237
_testPrintWaitList(r);
std::cout << "last command was number: 1238 " << std::endl;
// last command was command number 1238
const string items1239[] = {"pro184","pro719","pro981","pro736",};
const int itemsNum1239[] = {4,7,10,2,};
_testGetOrder(r,4, items1239, itemsNum1239);
std::cerr << "last output should be ERROR from command1239" << std::endl;
 // last command was command number 1239
_testPrintWaitList(r);
std::cout << "last command was number: 1240 " << std::endl;
// last command was command number 1240
const string items1241[] = {"pro539",};
const int itemsNum1241[] = {2,};
_testGetOrder(r,1, items1241, itemsNum1241);
std::cerr << "last output should be ERROR from command1241" << std::endl;
 // last command was command number 1241
_testPrintOpenOrders(r);
std::cout << "last command was number: 1242 " << std::endl;
// last command was command number 1242
const string items1243[] = {"pro709","pro502","pro575","pro299",};
const int itemsNum1243[] = {8,8,-70,10,};
_testGetOrder(r,-78, items1243, itemsNum1243);
std::cerr << "last output should be ERROR from command1243" << std::endl;
 // last command was command number 1243
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1244" << std::endl;
 // last command was command number 1244
const string items1245[] = {"pro6",};
const int itemsNum1245[] = {-18,};
_testGetOrder(r,-49, items1245, itemsNum1245);
std::cerr << "last output should be ERROR from command1245" << std::endl;
 // last command was command number 1245
const string items1246[] = {"pro821","pro213","bad product!",};
const int itemsNum1246[] = {10,2,3,};
_testGetOrder(r,3, items1246, itemsNum1246);
std::cerr << "last output should be ERROR from command1246" << std::endl;
 // last command was command number 1246
_testAddToWaitList(r,76);
std::cout << "last command was number: 1247 " << std::endl;
// last command was command number 1247
const string items1248[] = {"pro440","pro695","pro100",};
const int itemsNum1248[] = {2,1,8,};
_testGetOrder(r,3, items1248, itemsNum1248);
std::cerr << "last output should be ERROR from command1248" << std::endl;
 // last command was command number 1248
_testSitAtTable(r);
std::cout << "last command was number: 1249 " << std::endl;
// last command was command number 1249
_testAddToWaitList(r,80);
std::cout << "last command was number: 1250 " << std::endl;
// last command was command number 1250
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1251" << std::endl;
 // last command was command number 1251
const string items1252[] = {"pro491","bad product!","pro77","pro929",};
const int itemsNum1252[] = {4,6,8,9,};
_testGetOrder(r,4, items1252, itemsNum1252);
std::cerr << "last output should be ERROR from command1252" << std::endl;
 // last command was command number 1252
_testPrintServedList(r);
std::cout << "last command was number: 1253 " << std::endl;
// last command was command number 1253
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1254" << std::endl;
 // last command was command number 1254
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1255" << std::endl;
 // last command was command number 1255
_testAddToWaitList(r,97);
std::cout << "last command was number: 1256 " << std::endl;
// last command was command number 1256
_testGetCheck(r);
std::cout << "last command was number: 1257 " << std::endl;
// last command was command number 1257
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1258" << std::endl;
 // last command was command number 1258
_testPrintCheckList(r);
std::cout << "last command was number: 1259 " << std::endl;
// last command was command number 1259
const string items1260[] = {"pro760","pro491","pro575","bad product!","pro545",};
const int itemsNum1260[] = {7,5,9,7,2,};
_testGetOrder(r,5, items1260, itemsNum1260);
std::cerr << "last output should be ERROR from command1260" << std::endl;
 // last command was command number 1260
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1261" << std::endl;
 // last command was command number 1261
_testSitAtTable(r);
std::cout << "last command was number: 1262 " << std::endl;
// last command was command number 1262
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1263" << std::endl;
 // last command was command number 1263
const string items1264[] = {"pro745","bad product!","pro240","pro6",};
const int itemsNum1264[] = {9,7,6,5,};
_testGetOrder(r,4, items1264, itemsNum1264);
std::cerr << "last output should be ERROR from command1264" << std::endl;
 // last command was command number 1264
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1265" << std::endl;
 // last command was command number 1265
_testPrintOpenOrders(r);
std::cout << "last command was number: 1266 " << std::endl;
// last command was command number 1266
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1267" << std::endl;
 // last command was command number 1267
_testGetCheck(r);
std::cout << "last command was number: 1268 " << std::endl;
// last command was command number 1268
_testPrintServedList(r);
std::cout << "last command was number: 1269 " << std::endl;
// last command was command number 1269
const string items1270[] = {"pro390","pro201","pro433","pro988","pro760",};
const int itemsNum1270[] = {3,10,1,4,-52,};
_testGetOrder(r,-1, items1270, itemsNum1270);
std::cerr << "last output should be ERROR from command1270" << std::endl;
 // last command was command number 1270
const string items1271[] = {"pro7","bad product!",};
const int itemsNum1271[] = {6,6,};
_testGetOrder(r,2, items1271, itemsNum1271);
std::cerr << "last output should be ERROR from command1271" << std::endl;
 // last command was command number 1271
_testPrintWaitList(r);
std::cout << "last command was number: 1272 " << std::endl;
// last command was command number 1272
const string items1273[] = {"pro592","pro230","pro285","bad product!","pro243",};
const int itemsNum1273[] = {1,1,5,7,9,};
_testGetOrder(r,5, items1273, itemsNum1273);
std::cerr << "last output should be ERROR from command1273" << std::endl;
 // last command was command number 1273
_testPrintTables(r);
std::cout << "last command was number: 1274 " << std::endl;
// last command was command number 1274
_testAddToWaitList(r,79);
std::cout << "last command was number: 1275 " << std::endl;
// last command was command number 1275
const string items1276[] = {"bad product!",};
const int itemsNum1276[] = {6,};
_testGetOrder(r,-51, items1276, itemsNum1276);
std::cerr << "last output should be ERROR from command1276" << std::endl;
 // last command was command number 1276
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1277" << std::endl;
 // last command was command number 1277
_testGetCheck(r);
std::cout << "last command was number: 1278 " << std::endl;
// last command was command number 1278
_testPrintCheckList(r);
std::cout << "last command was number: 1279 " << std::endl;
// last command was command number 1279
const string items1280[] = {"pro325","pro539",};
const int itemsNum1280[] = {9,8,};
_testGetOrder(r,2, items1280, itemsNum1280);
std::cout << "last command was number: 1280 " << std::endl;
// last command was command number 1280
_testPrintWaitList(r);
std::cout << "last command was number: 1281 " << std::endl;
// last command was command number 1281
_testSitAtTable(r);
std::cout << "last command was number: 1282 " << std::endl;
// last command was command number 1282
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1283" << std::endl;
 // last command was command number 1283
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1284" << std::endl;
 // last command was command number 1284
_testPrintCheckList(r);
std::cout << "last command was number: 1285 " << std::endl;
// last command was command number 1285
_testGetCheck(r);
std::cout << "last command was number: 1286 " << std::endl;
// last command was command number 1286
_testGetCheck(r);
std::cout << "last command was number: 1287 " << std::endl;
// last command was command number 1287
_testPrintCheckList(r);
std::cout << "last command was number: 1288 " << std::endl;
// last command was command number 1288
_testPrintServedList(r);
std::cout << "last command was number: 1289 " << std::endl;
// last command was command number 1289
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1290" << std::endl;
 // last command was command number 1290
_testPrintProfits(r);
std::cout << "last command was number: 1291 " << std::endl;
// last command was command number 1291
const string items1292[] = {"pro810",};
const int itemsNum1292[] = {-32,};
_testGetOrder(r,-60, items1292, itemsNum1292);
std::cerr << "last output should be ERROR from command1292" << std::endl;
 // last command was command number 1292
_testPrintProfits(r);
std::cout << "last command was number: 1293 " << std::endl;
// last command was command number 1293
const string items1294[] = {"pro402","pro240","pro966","pro374","pro733",};
const int itemsNum1294[] = {6,8,10,5,4,};
_testGetOrder(r,5, items1294, itemsNum1294);
std::cout << "last command was number: 1294 " << std::endl;
// last command was command number 1294
_testPrintWaitList(r);
std::cout << "last command was number: 1295 " << std::endl;
// last command was command number 1295
const string items1296[] = {"pro7",};
const int itemsNum1296[] = {7,};
_testGetOrder(r,-86, items1296, itemsNum1296);
std::cerr << "last output should be ERROR from command1296" << std::endl;
 // last command was command number 1296
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1297" << std::endl;
 // last command was command number 1297
const string items1298[] = {"pro136",};
const int itemsNum1298[] = {4,};
_testGetOrder(r,1, items1298, itemsNum1298);
std::cout << "last command was number: 1298 " << std::endl;
// last command was command number 1298
_testPrintCheckList(r);
std::cout << "last command was number: 1299 " << std::endl;
// last command was command number 1299
const string items1300[] = {"pro768","pro543",};
const int itemsNum1300[] = {8,7,};
_testGetOrder(r,2, items1300, itemsNum1300);
std::cerr << "last output should be ERROR from command1300" << std::endl;
 // last command was command number 1300
_testPrintProfits(r);
std::cout << "last command was number: 1301 " << std::endl;
// last command was command number 1301
_testAddToWaitList(r,92);
std::cout << "last command was number: 1302 " << std::endl;
// last command was command number 1302
_testGetCheck(r);
std::cout << "last command was number: 1303 " << std::endl;
// last command was command number 1303
_testGetCheck(r);
std::cout << "last command was number: 1304 " << std::endl;
// last command was command number 1304
_testSitAtTable(r);
std::cout << "last command was number: 1305 " << std::endl;
// last command was command number 1305
_testAddToWaitList(r,97);
std::cout << "last command was number: 1306 " << std::endl;
// last command was command number 1306
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1307" << std::endl;
 // last command was command number 1307
_testAddToWaitList(r,90);
std::cout << "last command was number: 1308 " << std::endl;
// last command was command number 1308
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1309" << std::endl;
 // last command was command number 1309
_testSitAtTable(r);
std::cout << "last command was number: 1310 " << std::endl;
// last command was command number 1310
const string items1311[] = {"pro241",};
const int itemsNum1311[] = {8,};
_testGetOrder(r,1, items1311, itemsNum1311);
std::cout << "last command was number: 1311 " << std::endl;
// last command was command number 1311
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1312" << std::endl;
 // last command was command number 1312
_testGetCheck(r);
std::cout << "last command was number: 1313 " << std::endl;
// last command was command number 1313
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1314" << std::endl;
 // last command was command number 1314
_testGetCheck(r);
std::cout << "last command was number: 1315 " << std::endl;
// last command was command number 1315
_testGetCheck(r);
std::cout << "last command was number: 1316 " << std::endl;
// last command was command number 1316
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1317" << std::endl;
 // last command was command number 1317
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1318" << std::endl;
 // last command was command number 1318
_testSitAtTable(r);
std::cout << "last command was number: 1319 " << std::endl;
// last command was command number 1319
_testSitAtTable(r);
std::cout << "last command was number: 1320 " << std::endl;
// last command was command number 1320
const string items1321[] = {"pro248","pro440",};
const int itemsNum1321[] = {3,10,};
_testGetOrder(r,2, items1321, itemsNum1321);
std::cout << "last command was number: 1321 " << std::endl;
// last command was command number 1321
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1322" << std::endl;
 // last command was command number 1322
const string items1323[] = {"pro148","pro988","pro303","pro977",};
const int itemsNum1323[] = {7,2,10,8,};
_testGetOrder(r,-82, items1323, itemsNum1323);
std::cerr << "last output should be ERROR from command1323" << std::endl;
 // last command was command number 1323
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1324" << std::endl;
 // last command was command number 1324
_testPrintOpenOrders(r);
std::cout << "last command was number: 1325 " << std::endl;
// last command was command number 1325
const string items1326[] = {"pro120","pro757","pro184","pro154",};
const int itemsNum1326[] = {2,10,8,-41,};
_testGetOrder(r,4, items1326, itemsNum1326);
std::cerr << "last output should be ERROR from command1326" << std::endl;
 // last command was command number 1326
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1327" << std::endl;
 // last command was command number 1327
_testGetCheck(r);
std::cout << "last command was number: 1328 " << std::endl;
// last command was command number 1328
const string items1329[] = {"pro713","pro508","pro129","bad product!","pro457",};
const int itemsNum1329[] = {8,3,4,6,9,};
_testGetOrder(r,5, items1329, itemsNum1329);
std::cerr << "last output should be ERROR from command1329" << std::endl;
 // last command was command number 1329
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1330" << std::endl;
 // last command was command number 1330
_testPrintTables(r);
std::cout << "last command was number: 1331 " << std::endl;
// last command was command number 1331
_testGetCheck(r);
std::cout << "last command was number: 1332 " << std::endl;
// last command was command number 1332
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1333" << std::endl;
 // last command was command number 1333
const string items1334[] = {"pro757","pro539",};
const int itemsNum1334[] = {5,6,};
_testGetOrder(r,2, items1334, itemsNum1334);
std::cout << "last command was number: 1334 " << std::endl;
// last command was command number 1334
const string items1335[] = {"bad product!","pro325",};
const int itemsNum1335[] = {3,5,};
_testGetOrder(r,2, items1335, itemsNum1335);
std::cerr << "last output should be ERROR from command1335" << std::endl;
 // last command was command number 1335
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1336" << std::endl;
 // last command was command number 1336
const string items1337[] = {"pro947","pro379","bad product!",};
const int itemsNum1337[] = {10,10,9,};
_testGetOrder(r,3, items1337, itemsNum1337);
std::cerr << "last output should be ERROR from command1337" << std::endl;
 // last command was command number 1337
_testSitAtTable(r);
std::cout << "last command was number: 1338 " << std::endl;
// last command was command number 1338
const string items1339[] = {"pro895","pro760","pro299",};
const int itemsNum1339[] = {3,1,2,};
_testGetOrder(r,3, items1339, itemsNum1339);
std::cout << "last command was number: 1339 " << std::endl;
// last command was command number 1339
_testAddToWaitList(r,61);
std::cout << "last command was number: 1340 " << std::endl;
// last command was command number 1340
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1341" << std::endl;
 // last command was command number 1341
_testAddToWaitList(r,83);
std::cout << "last command was number: 1342 " << std::endl;
// last command was command number 1342
_testGetCheck(r);
std::cout << "last command was number: 1343 " << std::endl;
// last command was command number 1343
_testPrintWaitList(r);
std::cout << "last command was number: 1344 " << std::endl;
// last command was command number 1344
const string items1345[] = {"bad product!","pro136","pro248",};
const int itemsNum1345[] = {10,10,7,};
_testGetOrder(r,3, items1345, itemsNum1345);
std::cerr << "last output should be ERROR from command1345" << std::endl;
 // last command was command number 1345
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1346" << std::endl;
 // last command was command number 1346
_testPrintCheckList(r);
std::cout << "last command was number: 1347 " << std::endl;
// last command was command number 1347
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1348" << std::endl;
 // last command was command number 1348
const string items1349[] = {"pro201","bad product!",};
const int itemsNum1349[] = {9,2,};
_testGetOrder(r,2, items1349, itemsNum1349);
std::cerr << "last output should be ERROR from command1349" << std::endl;
 // last command was command number 1349
const string items1350[] = {"pro440","pro855",};
const int itemsNum1350[] = {2,4,};
_testGetOrder(r,-94, items1350, itemsNum1350);
std::cerr << "last output should be ERROR from command1350" << std::endl;
 // last command was command number 1350
const string items1351[] = {"pro695","pro433","pro167",};
const int itemsNum1351[] = {5,-26,1,};
_testGetOrder(r,3, items1351, itemsNum1351);
std::cerr << "last output should be ERROR from command1351" << std::endl;
 // last command was command number 1351
const string items1352[] = {"bad product!","pro855","pro720","pro377","pro325",};
const int itemsNum1352[] = {1,2,1,4,2,};
_testGetOrder(r,-34, items1352, itemsNum1352);
std::cerr << "last output should be ERROR from command1352" << std::endl;
 // last command was command number 1352
_testAddToWaitList(r,65);
std::cout << "last command was number: 1353 " << std::endl;
// last command was command number 1353
const string items1354[] = {"pro365",};
const int itemsNum1354[] = {6,};
_testGetOrder(r,1, items1354, itemsNum1354);
std::cout << "last command was number: 1354 " << std::endl;
// last command was command number 1354
const string items1355[] = {"pro608",};
const int itemsNum1355[] = {2,};
_testGetOrder(r,-76, items1355, itemsNum1355);
std::cerr << "last output should be ERROR from command1355" << std::endl;
 // last command was command number 1355
const string items1356[] = {"pro508","pro374","pro148","pro243",};
const int itemsNum1356[] = {9,-10,5,3,};
_testGetOrder(r,4, items1356, itemsNum1356);
std::cerr << "last output should be ERROR from command1356" << std::endl;
 // last command was command number 1356
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1357" << std::endl;
 // last command was command number 1357
const string items1358[] = {"pro243","pro120",};
const int itemsNum1358[] = {1,6,};
_testGetOrder(r,-83, items1358, itemsNum1358);
std::cerr << "last output should be ERROR from command1358" << std::endl;
 // last command was command number 1358
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1359" << std::endl;
 // last command was command number 1359
_testAddToWaitList(r,71);
std::cout << "last command was number: 1360 " << std::endl;
// last command was command number 1360
_testGetCheck(r);
std::cout << "last command was number: 1361 " << std::endl;
// last command was command number 1361
_testPrintWaitList(r);
std::cout << "last command was number: 1362 " << std::endl;
// last command was command number 1362
const string items1363[] = {"bad product!",};
const int itemsNum1363[] = {-45,};
_testGetOrder(r,1, items1363, itemsNum1363);
std::cerr << "last output should be ERROR from command1363" << std::endl;
 // last command was command number 1363
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1364" << std::endl;
 // last command was command number 1364
_testGetCheck(r);
std::cout << "last command was number: 1365 " << std::endl;
// last command was command number 1365
_testSitAtTable(r);
std::cout << "last command was number: 1366 " << std::endl;
// last command was command number 1366
_testAddToWaitList(r,80);
std::cout << "last command was number: 1367 " << std::endl;
// last command was command number 1367
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1368" << std::endl;
 // last command was command number 1368
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1369" << std::endl;
 // last command was command number 1369
const string items1370[] = {"bad product!",};
const int itemsNum1370[] = {2,};
_testGetOrder(r,1, items1370, itemsNum1370);
std::cerr << "last output should be ERROR from command1370" << std::endl;
 // last command was command number 1370
const string items1371[] = {"pro592","bad product!","pro912",};
const int itemsNum1371[] = {7,9,5,};
_testGetOrder(r,3, items1371, itemsNum1371);
std::cerr << "last output should be ERROR from command1371" << std::endl;
 // last command was command number 1371
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1372" << std::endl;
 // last command was command number 1372
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1373" << std::endl;
 // last command was command number 1373
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1374" << std::endl;
 // last command was command number 1374
_testPrintTables(r);
std::cout << "last command was number: 1375 " << std::endl;
// last command was command number 1375
_testAddToWaitList(r,99);
std::cout << "last command was number: 1376 " << std::endl;
// last command was command number 1376
_testPrintProfits(r);
std::cout << "last command was number: 1377 " << std::endl;
// last command was command number 1377
const string items1378[] = {"pro742",};
const int itemsNum1378[] = {6,};
_testGetOrder(r,1, items1378, itemsNum1378);
std::cout << "last command was number: 1378 " << std::endl;
// last command was command number 1378
_testPrintCheckList(r);
std::cout << "last command was number: 1379 " << std::endl;
// last command was command number 1379
_testSitAtTable(r);
std::cout << "last command was number: 1380 " << std::endl;
// last command was command number 1380
_testGetCheck(r);
std::cout << "last command was number: 1381 " << std::endl;
// last command was command number 1381
_testAddToWaitList(r,69);
std::cout << "last command was number: 1382 " << std::endl;
// last command was command number 1382
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1383" << std::endl;
 // last command was command number 1383
_testPrintServedList(r);
std::cout << "last command was number: 1384 " << std::endl;
// last command was command number 1384
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1385" << std::endl;
 // last command was command number 1385
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1386" << std::endl;
 // last command was command number 1386
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1387" << std::endl;
 // last command was command number 1387
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1388" << std::endl;
 // last command was command number 1388
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1389" << std::endl;
 // last command was command number 1389
const string items1390[] = {"bad product!",};
const int itemsNum1390[] = {8,};
_testGetOrder(r,1, items1390, itemsNum1390);
std::cerr << "last output should be ERROR from command1390" << std::endl;
 // last command was command number 1390
const string items1391[] = {"pro331","bad product!",};
const int itemsNum1391[] = {5,6,};
_testGetOrder(r,2, items1391, itemsNum1391);
std::cerr << "last output should be ERROR from command1391" << std::endl;
 // last command was command number 1391
const string items1392[] = {"pro977","pro605","pro335","pro539","pro608",};
const int itemsNum1392[] = {5,9,7,2,10,};
_testGetOrder(r,-77, items1392, itemsNum1392);
std::cerr << "last output should be ERROR from command1392" << std::endl;
 // last command was command number 1392
const string items1393[] = {"pro543","pro158","pro390","pro648","pro433",};
const int itemsNum1393[] = {5,7,10,3,4,};
_testGetOrder(r,5, items1393, itemsNum1393);
std::cout << "last command was number: 1393 " << std::endl;
// last command was command number 1393
const string items1394[] = {"pro457",};
const int itemsNum1394[] = {-18,};
_testGetOrder(r,1, items1394, itemsNum1394);
std::cerr << "last output should be ERROR from command1394" << std::endl;
 // last command was command number 1394
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1395" << std::endl;
 // last command was command number 1395
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1396" << std::endl;
 // last command was command number 1396
_testPrintCheckList(r);
std::cout << "last command was number: 1397 " << std::endl;
// last command was command number 1397
_testGetCheck(r);
std::cout << "last command was number: 1398 " << std::endl;
// last command was command number 1398
_testAddToWaitList(r,98);
std::cout << "last command was number: 1399 " << std::endl;
// last command was command number 1399
const string items1400[] = {"pro863",};
const int itemsNum1400[] = {-74,};
_testGetOrder(r,1, items1400, itemsNum1400);
std::cerr << "last output should be ERROR from command1400" << std::endl;
 // last command was command number 1400
_testSitAtTable(r);
std::cout << "last command was number: 1401 " << std::endl;
// last command was command number 1401
const string items1402[] = {"pro417","pro241","pro733","pro969","pro6",};
const int itemsNum1402[] = {8,5,10,5,5,};
_testGetOrder(r,5, items1402, itemsNum1402);
std::cout << "last command was number: 1402 " << std::endl;
// last command was command number 1402
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1403" << std::endl;
 // last command was command number 1403
_testGetCheck(r);
std::cout << "last command was number: 1404 " << std::endl;
// last command was command number 1404
_testAddToWaitList(r,50);
std::cout << "last command was number: 1405 " << std::endl;
// last command was command number 1405
const string items1406[] = {"pro981","pro255","pro863","pro365",};
const int itemsNum1406[] = {2,2,4,9,};
_testGetOrder(r,4, items1406, itemsNum1406);
std::cerr << "last output should be ERROR from command1406" << std::endl;
 // last command was command number 1406
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1407" << std::endl;
 // last command was command number 1407
const string items1408[] = {"pro381","pro543",};
const int itemsNum1408[] = {6,5,};
_testGetOrder(r,2, items1408, itemsNum1408);
std::cerr << "last output should be ERROR from command1408" << std::endl;
 // last command was command number 1408
_testAddToWaitList(r,56);
std::cout << "last command was number: 1409 " << std::endl;
// last command was command number 1409
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1410" << std::endl;
 // last command was command number 1410
_testPrintTables(r);
std::cout << "last command was number: 1411 " << std::endl;
// last command was command number 1411
_testPrintProfits(r);
std::cout << "last command was number: 1412 " << std::endl;
// last command was command number 1412
const string items1413[] = {"pro230","pro534",};
const int itemsNum1413[] = {7,9,};
_testGetOrder(r,-61, items1413, itemsNum1413);
std::cerr << "last output should be ERROR from command1413" << std::endl;
 // last command was command number 1413
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1414" << std::endl;
 // last command was command number 1414
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1415" << std::endl;
 // last command was command number 1415
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1416" << std::endl;
 // last command was command number 1416
const string items1417[] = {"pro390","pro821",};
const int itemsNum1417[] = {5,3,};
_testGetOrder(r,2, items1417, itemsNum1417);
std::cerr << "last output should be ERROR from command1417" << std::endl;
 // last command was command number 1417
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1418" << std::endl;
 // last command was command number 1418
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1419" << std::endl;
 // last command was command number 1419
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1420" << std::endl;
 // last command was command number 1420
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1421" << std::endl;
 // last command was command number 1421
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1422" << std::endl;
 // last command was command number 1422
_testPrintWaitList(r);
std::cout << "last command was number: 1423 " << std::endl;
// last command was command number 1423
const string items1424[] = {"pro959","pro969","pro208",};
const int itemsNum1424[] = {10,8,1,};
_testGetOrder(r,3, items1424, itemsNum1424);
std::cerr << "last output should be ERROR from command1424" << std::endl;
 // last command was command number 1424
_testPrintCheckList(r);
std::cout << "last command was number: 1425 " << std::endl;
// last command was command number 1425
_testPrintProfits(r);
std::cout << "last command was number: 1426 " << std::endl;
// last command was command number 1426
_testPrintServedList(r);
std::cout << "last command was number: 1427 " << std::endl;
// last command was command number 1427
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1428" << std::endl;
 // last command was command number 1428
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1429" << std::endl;
 // last command was command number 1429
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1430" << std::endl;
 // last command was command number 1430
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1431" << std::endl;
 // last command was command number 1431
const string items1432[] = {"pro595","pro331","bad product!","pro661",};
const int itemsNum1432[] = {4,3,1,5,};
_testGetOrder(r,4, items1432, itemsNum1432);
std::cerr << "last output should be ERROR from command1432" << std::endl;
 // last command was command number 1432
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1433" << std::endl;
 // last command was command number 1433
_testPrintServedList(r);
std::cout << "last command was number: 1434 " << std::endl;
// last command was command number 1434
_testPrintProfits(r);
std::cout << "last command was number: 1435 " << std::endl;
// last command was command number 1435
const string items1436[] = {"pro855","pro520",};
const int itemsNum1436[] = {8,10,};
_testGetOrder(r,-68, items1436, itemsNum1436);
std::cerr << "last output should be ERROR from command1436" << std::endl;
 // last command was command number 1436
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1437" << std::endl;
 // last command was command number 1437
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1438" << std::endl;
 // last command was command number 1438
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1439" << std::endl;
 // last command was command number 1439
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1440" << std::endl;
 // last command was command number 1440
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1441" << std::endl;
 // last command was command number 1441
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1442" << std::endl;
 // last command was command number 1442
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1443" << std::endl;
 // last command was command number 1443
_testSitAtTable(r);
std::cout << "last command was number: 1444 " << std::endl;
// last command was command number 1444
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1445" << std::endl;
 // last command was command number 1445
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1446" << std::endl;
 // last command was command number 1446
_testPrintOpenOrders(r);
std::cout << "last command was number: 1447 " << std::endl;
// last command was command number 1447
_testPrintTables(r);
std::cout << "last command was number: 1448 " << std::endl;
// last command was command number 1448
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1449" << std::endl;
 // last command was command number 1449
const string items1450[] = {"pro981","bad product!",};
const int itemsNum1450[] = {5,2,};
_testGetOrder(r,2, items1450, itemsNum1450);
std::cerr << "last output should be ERROR from command1450" << std::endl;
 // last command was command number 1450
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1451" << std::endl;
 // last command was command number 1451
_testPrintWaitList(r);
std::cout << "last command was number: 1452 " << std::endl;
// last command was command number 1452
_testSitAtTable(r);
std::cout << "last command was number: 1453 " << std::endl;
// last command was command number 1453
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1454" << std::endl;
 // last command was command number 1454
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1455" << std::endl;
 // last command was command number 1455
_testAddToWaitList(r,77);
std::cout << "last command was number: 1456 " << std::endl;
// last command was command number 1456
_testPrintOpenOrders(r);
std::cout << "last command was number: 1457 " << std::endl;
// last command was command number 1457
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1458" << std::endl;
 // last command was command number 1458
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1459" << std::endl;
 // last command was command number 1459
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1460" << std::endl;
 // last command was command number 1460
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1461" << std::endl;
 // last command was command number 1461
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1462" << std::endl;
 // last command was command number 1462
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1463" << std::endl;
 // last command was command number 1463
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1464" << std::endl;
 // last command was command number 1464
_testSitAtTable(r);
std::cout << "last command was number: 1465 " << std::endl;
// last command was command number 1465
const string items1466[] = {"bad product!",};
const int itemsNum1466[] = {5,};
_testGetOrder(r,1, items1466, itemsNum1466);
std::cerr << "last output should be ERROR from command1466" << std::endl;
 // last command was command number 1466
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1467" << std::endl;
 // last command was command number 1467
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1468" << std::endl;
 // last command was command number 1468
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1469" << std::endl;
 // last command was command number 1469
_testPrintOpenOrders(r);
std::cout << "last command was number: 1470 " << std::endl;
// last command was command number 1470
const string items1471[] = {"pro810","pro303",};
const int itemsNum1471[] = {10,5,};
_testGetOrder(r,2, items1471, itemsNum1471);
std::cout << "last command was number: 1471 " << std::endl;
// last command was command number 1471
_testPrintOpenOrders(r);
std::cout << "last command was number: 1472 " << std::endl;
// last command was command number 1472
_testPrintOpenOrders(r);
std::cout << "last command was number: 1473 " << std::endl;
// last command was command number 1473
const string items1474[] = {"pro294","pro539","bad product!",};
const int itemsNum1474[] = {5,6,9,};
_testGetOrder(r,3, items1474, itemsNum1474);
std::cerr << "last output should be ERROR from command1474" << std::endl;
 // last command was command number 1474
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1475" << std::endl;
 // last command was command number 1475
_testGetCheck(r);
std::cout << "last command was number: 1476 " << std::endl;
// last command was command number 1476
_testPrintTables(r);
std::cout << "last command was number: 1477 " << std::endl;
// last command was command number 1477
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1478" << std::endl;
 // last command was command number 1478
const string items1479[] = {"pro262","pro760",};
const int itemsNum1479[] = {-42,4,};
_testGetOrder(r,2, items1479, itemsNum1479);
std::cerr << "last output should be ERROR from command1479" << std::endl;
 // last command was command number 1479
_testPrintProfits(r);
std::cout << "last command was number: 1480 " << std::endl;
// last command was command number 1480
const string items1481[] = {"pro534","bad product!",};
const int itemsNum1481[] = {8,2,};
_testGetOrder(r,2, items1481, itemsNum1481);
std::cerr << "last output should be ERROR from command1481" << std::endl;
 // last command was command number 1481
_testSitAtTable(r);
std::cout << "last command was number: 1482 " << std::endl;
// last command was command number 1482
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1483" << std::endl;
 // last command was command number 1483
const string items1484[] = {"pro508","pro760","pro719","pro969","pro713",};
const int itemsNum1484[] = {8,9,9,9,6,};
_testGetOrder(r,-43, items1484, itemsNum1484);
std::cerr << "last output should be ERROR from command1484" << std::endl;
 // last command was command number 1484
const string items1485[] = {"pro703","pro855","bad product!","pro381","pro184",};
const int itemsNum1485[] = {3,8,6,1,7,};
_testGetOrder(r,5, items1485, itemsNum1485);
std::cerr << "last output should be ERROR from command1485" << std::endl;
 // last command was command number 1485
const string items1486[] = {"pro255","pro810","pro262",};
const int itemsNum1486[] = {7,-4,6,};
_testGetOrder(r,3, items1486, itemsNum1486);
std::cerr << "last output should be ERROR from command1486" << std::endl;
 // last command was command number 1486
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1487" << std::endl;
 // last command was command number 1487
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1488" << std::endl;
 // last command was command number 1488
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1489" << std::endl;
 // last command was command number 1489
_testPrintWaitList(r);
std::cout << "last command was number: 1490 " << std::endl;
// last command was command number 1490
const string items1491[] = {"pro740","pro230","pro539","pro709",};
const int itemsNum1491[] = {2,6,2,-66,};
_testGetOrder(r,-6, items1491, itemsNum1491);
std::cerr << "last output should be ERROR from command1491" << std::endl;
 // last command was command number 1491
const string items1492[] = {"pro929","pro648","pro502",};
const int itemsNum1492[] = {4,10,7,};
_testGetOrder(r,-79, items1492, itemsNum1492);
std::cerr << "last output should be ERROR from command1492" << std::endl;
 // last command was command number 1492
_testPrintOpenOrders(r);
std::cout << "last command was number: 1493 " << std::endl;
// last command was command number 1493
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1494" << std::endl;
 // last command was command number 1494
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1495" << std::endl;
 // last command was command number 1495
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1496" << std::endl;
 // last command was command number 1496
const string items1497[] = {"pro703","pro736","bad product!",};
const int itemsNum1497[] = {7,6,6,};
_testGetOrder(r,3, items1497, itemsNum1497);
std::cerr << "last output should be ERROR from command1497" << std::endl;
 // last command was command number 1497
_testPrintTables(r);
std::cout << "last command was number: 1498 " << std::endl;
// last command was command number 1498
const string items1499[] = {"pro545",};
const int itemsNum1499[] = {-49,};
_testGetOrder(r,-75, items1499, itemsNum1499);
std::cerr << "last output should be ERROR from command1499" << std::endl;
 // last command was command number 1499
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1500" << std::endl;
 // last command was command number 1500
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1501" << std::endl;
 // last command was command number 1501
const string items1502[] = {"pro154","bad product!","pro303",};
const int itemsNum1502[] = {3,5,6,};
_testGetOrder(r,3, items1502, itemsNum1502);
std::cerr << "last output should be ERROR from command1502" << std::endl;
 // last command was command number 1502
_testAddToWaitList(r,72);
std::cout << "last command was number: 1503 " << std::endl;
// last command was command number 1503
_testPrintTables(r);
std::cout << "last command was number: 1504 " << std::endl;
// last command was command number 1504
_testSitAtTable(r);
std::cout << "last command was number: 1505 " << std::endl;
// last command was command number 1505
const string items1506[] = {"bad product!","pro608","pro417",};
const int itemsNum1506[] = {5,5,2,};
_testGetOrder(r,3, items1506, itemsNum1506);
std::cerr << "last output should be ERROR from command1506" << std::endl;
 // last command was command number 1506
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1507" << std::endl;
 // last command was command number 1507
_testSitAtTable(r);
std::cout << "last command was number: 1508 " << std::endl;
// last command was command number 1508
const string items1509[] = {"pro987","pro703",};
const int itemsNum1509[] = {1,3,};
_testGetOrder(r,2, items1509, itemsNum1509);
std::cout << "last command was number: 1509 " << std::endl;
// last command was command number 1509
_testPrintOpenOrders(r);
std::cout << "last command was number: 1510 " << std::endl;
// last command was command number 1510
const string items1511[] = {"pro120","pro695","bad product!","pro374","pro77",};
const int itemsNum1511[] = {9,3,2,1,1,};
_testGetOrder(r,5, items1511, itemsNum1511);
std::cerr << "last output should be ERROR from command1511" << std::endl;
 // last command was command number 1511
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1512" << std::endl;
 // last command was command number 1512
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1513" << std::endl;
 // last command was command number 1513
_testAddToWaitList(r,100);
std::cout << "last command was number: 1514 " << std::endl;
// last command was command number 1514
_testPrintWaitList(r);
std::cout << "last command was number: 1515 " << std::endl;
// last command was command number 1515
_testAddToWaitList(r,80);
std::cout << "last command was number: 1516 " << std::endl;
// last command was command number 1516
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1517" << std::endl;
 // last command was command number 1517
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1518" << std::endl;
 // last command was command number 1518
_testSitAtTable(r);
std::cout << "last command was number: 1519 " << std::endl;
// last command was command number 1519
_testPrintTables(r);
std::cout << "last command was number: 1520 " << std::endl;
// last command was command number 1520
const string items1521[] = {"pro709","pro895",};
const int itemsNum1521[] = {7,3,};
_testGetOrder(r,2, items1521, itemsNum1521);
std::cout << "last command was number: 1521 " << std::endl;
// last command was command number 1521
_testAddToWaitList(r,81);
std::cout << "last command was number: 1522 " << std::endl;
// last command was command number 1522
_testPrintServedList(r);
std::cout << "last command was number: 1523 " << std::endl;
// last command was command number 1523
_testPrintCheckList(r);
std::cout << "last command was number: 1524 " << std::endl;
// last command was command number 1524
const string items1525[] = {"bad product!",};
const int itemsNum1525[] = {2,};
_testGetOrder(r,1, items1525, itemsNum1525);
std::cerr << "last output should be ERROR from command1525" << std::endl;
 // last command was command number 1525
const string items1526[] = {"pro575","pro137","bad product!",};
const int itemsNum1526[] = {10,10,-23,};
_testGetOrder(r,-70, items1526, itemsNum1526);
std::cerr << "last output should be ERROR from command1526" << std::endl;
 // last command was command number 1526
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1527" << std::endl;
 // last command was command number 1527
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1528" << std::endl;
 // last command was command number 1528
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1529" << std::endl;
 // last command was command number 1529
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1530" << std::endl;
 // last command was command number 1530
const string items1531[] = {"pro947","pro929","pro760","pro255","pro702",};
const int itemsNum1531[] = {7,7,8,3,1,};
_testGetOrder(r,5, items1531, itemsNum1531);
std::cout << "last command was number: 1531 " << std::endl;
// last command was command number 1531
_testSitAtTable(r);
std::cout << "last command was number: 1532 " << std::endl;
// last command was command number 1532
_testPrintOpenOrders(r);
std::cout << "last command was number: 1533 " << std::endl;
// last command was command number 1533
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1534" << std::endl;
 // last command was command number 1534
_testAddToWaitList(r,90);
std::cout << "last command was number: 1535 " << std::endl;
// last command was command number 1535
_testSitAtTable(r);
std::cout << "last command was number: 1536 " << std::endl;
// last command was command number 1536
_testSitAtTable(r);
std::cout << "last command was number: 1537 " << std::endl;
// last command was command number 1537
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1538" << std::endl;
 // last command was command number 1538
_testSitAtTable(r);
std::cout << "last command was number: 1539 " << std::endl;
// last command was command number 1539
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1540" << std::endl;
 // last command was command number 1540
const string items1541[] = {"bad product!",};
const int itemsNum1541[] = {2,};
_testGetOrder(r,1, items1541, itemsNum1541);
std::cerr << "last output should be ERROR from command1541" << std::endl;
 // last command was command number 1541
_testPrintOpenOrders(r);
std::cout << "last command was number: 1542 " << std::endl;
// last command was command number 1542
_testAddToWaitList(r,60);
std::cout << "last command was number: 1543 " << std::endl;
// last command was command number 1543
const string items1544[] = {"pro433",};
const int itemsNum1544[] = {3,};
_testGetOrder(r,1, items1544, itemsNum1544);
std::cout << "last command was number: 1544 " << std::endl;
// last command was command number 1544
const string items1545[] = {"pro508",};
const int itemsNum1545[] = {-72,};
_testGetOrder(r,1, items1545, itemsNum1545);
std::cerr << "last output should be ERROR from command1545" << std::endl;
 // last command was command number 1545
_testPrintWaitList(r);
std::cout << "last command was number: 1546 " << std::endl;
// last command was command number 1546
_testGetCheck(r);
std::cout << "last command was number: 1547 " << std::endl;
// last command was command number 1547
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1548" << std::endl;
 // last command was command number 1548
const string items1549[] = {"pro929","pro6","pro988","pro757","pro746",};
const int itemsNum1549[] = {4,5,8,1,9,};
_testGetOrder(r,-25, items1549, itemsNum1549);
std::cerr << "last output should be ERROR from command1549" << std::endl;
 // last command was command number 1549
_testGetCheck(r);
std::cout << "last command was number: 1550 " << std::endl;
// last command was command number 1550
const string items1551[] = {"pro381",};
const int itemsNum1551[] = {10,};
_testGetOrder(r,-8, items1551, itemsNum1551);
std::cerr << "last output should be ERROR from command1551" << std::endl;
 // last command was command number 1551
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1552" << std::endl;
 // last command was command number 1552
_testSitAtTable(r);
std::cout << "last command was number: 1553 " << std::endl;
// last command was command number 1553
const string items1554[] = {"pro956","pro977",};
const int itemsNum1554[] = {7,3,};
_testGetOrder(r,-4, items1554, itemsNum1554);
std::cerr << "last output should be ERROR from command1554" << std::endl;
 // last command was command number 1554
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1555" << std::endl;
 // last command was command number 1555
_testAddToWaitList(r,62);
std::cout << "last command was number: 1556 " << std::endl;
// last command was command number 1556
_testPrintWaitList(r);
std::cout << "last command was number: 1557 " << std::endl;
// last command was command number 1557
const string items1558[] = {"pro230","pro742","pro402","pro702",};
const int itemsNum1558[] = {9,5,2,9,};
_testGetOrder(r,-46, items1558, itemsNum1558);
std::cerr << "last output should be ERROR from command1558" << std::endl;
 // last command was command number 1558
const string items1559[] = {"bad product!",};
const int itemsNum1559[] = {5,};
_testGetOrder(r,1, items1559, itemsNum1559);
std::cerr << "last output should be ERROR from command1559" << std::endl;
 // last command was command number 1559
_testPrintCheckList(r);
std::cout << "last command was number: 1560 " << std::endl;
// last command was command number 1560
_testPrintOpenOrders(r);
std::cout << "last command was number: 1561 " << std::endl;
// last command was command number 1561
_testPrintServedList(r);
std::cout << "last command was number: 1562 " << std::endl;
// last command was command number 1562
const string items1563[] = {"pro713","pro872","bad product!",};
const int itemsNum1563[] = {8,4,4,};
_testGetOrder(r,3, items1563, itemsNum1563);
std::cerr << "last output should be ERROR from command1563" << std::endl;
 // last command was command number 1563
const string items1564[] = {"pro381","pro768","bad product!",};
const int itemsNum1564[] = {2,5,1,};
_testGetOrder(r,3, items1564, itemsNum1564);
std::cerr << "last output should be ERROR from command1564" << std::endl;
 // last command was command number 1564
_testSitAtTable(r);
std::cout << "last command was number: 1565 " << std::endl;
// last command was command number 1565
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1566" << std::endl;
 // last command was command number 1566
const string items1567[] = {"pro543","pro375","pro279","pro959","pro184",};
const int itemsNum1567[] = {8,8,5,3,1,};
_testGetOrder(r,5, items1567, itemsNum1567);
std::cout << "last command was number: 1567 " << std::endl;
// last command was command number 1567
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1568" << std::endl;
 // last command was command number 1568
const string items1569[] = {"pro929","pro129",};
const int itemsNum1569[] = {3,2,};
_testGetOrder(r,2, items1569, itemsNum1569);
std::cout << "last command was number: 1569 " << std::endl;
// last command was command number 1569
_testGetCheck(r);
std::cout << "last command was number: 1570 " << std::endl;
// last command was command number 1570
_testAddToWaitList(r,53);
std::cout << "last command was number: 1571 " << std::endl;
// last command was command number 1571
_testSitAtTable(r);
std::cout << "last command was number: 1572 " << std::endl;
// last command was command number 1572
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1573" << std::endl;
 // last command was command number 1573
_testGetCheck(r);
std::cout << "last command was number: 1574 " << std::endl;
// last command was command number 1574
_testSitAtTable(r);
std::cout << "last command was number: 1575 " << std::endl;
// last command was command number 1575
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1576" << std::endl;
 // last command was command number 1576
_testAddToWaitList(r,73);
std::cout << "last command was number: 1577 " << std::endl;
// last command was command number 1577
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1578" << std::endl;
 // last command was command number 1578
const string items1579[] = {"pro381","pro390","pro379",};
const int itemsNum1579[] = {1,-63,6,};
_testGetOrder(r,-89, items1579, itemsNum1579);
std::cerr << "last output should be ERROR from command1579" << std::endl;
 // last command was command number 1579
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1580" << std::endl;
 // last command was command number 1580
const string items1581[] = {"pro167","pro397","pro136","pro374",};
const int itemsNum1581[] = {10,6,8,-64,};
_testGetOrder(r,4, items1581, itemsNum1581);
std::cerr << "last output should be ERROR from command1581" << std::endl;
 // last command was command number 1581
_testGetCheck(r);
std::cout << "last command was number: 1582 " << std::endl;
// last command was command number 1582
const string items1583[] = {"pro129",};
const int itemsNum1583[] = {5,};
_testGetOrder(r,1, items1583, itemsNum1583);
std::cout << "last command was number: 1583 " << std::endl;
// last command was command number 1583
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1584" << std::endl;
 // last command was command number 1584
_testSitAtTable(r);
std::cout << "last command was number: 1585 " << std::endl;
// last command was command number 1585
_testPrintProfits(r);
std::cout << "last command was number: 1586 " << std::endl;
// last command was command number 1586
const string items1587[] = {"pro299","pro959","pro138","pro981",};
const int itemsNum1587[] = {1,8,10,10,};
_testGetOrder(r,-68, items1587, itemsNum1587);
std::cerr << "last output should be ERROR from command1587" << std::endl;
 // last command was command number 1587
_testSitAtTable(r);
std::cout << "last command was number: 1588 " << std::endl;
// last command was command number 1588
_testSitAtTable(r);
std::cout << "last command was number: 1589 " << std::endl;
// last command was command number 1589
_testAddToWaitList(r,91);
std::cout << "last command was number: 1590 " << std::endl;
// last command was command number 1590
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1591" << std::endl;
 // last command was command number 1591
_testPrintTables(r);
std::cout << "last command was number: 1592 " << std::endl;
// last command was command number 1592
_testPrintWaitList(r);
std::cout << "last command was number: 1593 " << std::endl;
// last command was command number 1593
const string items1594[] = {"pro375","pro702","pro374","pro661","pro535",};
const int itemsNum1594[] = {1,10,2,2,9,};
_testGetOrder(r,5, items1594, itemsNum1594);
std::cout << "last command was number: 1594 " << std::endl;
// last command was command number 1594
_testPrintWaitList(r);
std::cout << "last command was number: 1595 " << std::endl;
// last command was command number 1595
_testSitAtTable(r);
std::cout << "last command was number: 1596 " << std::endl;
// last command was command number 1596
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command1597" << std::endl;
 // last command was command number 1597
_testAddToWaitList(r,68);
std::cout << "last command was number: 1598 " << std::endl;
// last command was command number 1598
_testAddToWaitList(r,55);
std::cout << "last command was number: 1599 " << std::endl;
// last command was command number 1599
const string items1600[] = {"pro872","pro137","pro213",};
const int itemsNum1600[] = {10,4,1,};
_testGetOrder(r,3, items1600, itemsNum1600);
std::cout << "last command was number: 1600 " << std::endl;
// last command was command number 1600
_testPrintWaitList(r);
std::cout << "last command was number: 1601 " << std::endl;
// last command was command number 1601
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1602" << std::endl;
 // last command was command number 1602
_testAddToWaitList(r,75);
std::cout << "last command was number: 1603 " << std::endl;
// last command was command number 1603
_testPrintProfits(r);
std::cout << "last command was number: 1604 " << std::endl;
// last command was command number 1604
const string items1605[] = {"pro539","bad product!","pro374","pro6","pro491",};
const int itemsNum1605[] = {7,5,2,10,9,};
_testGetOrder(r,5, items1605, itemsNum1605);
std::cerr << "last output should be ERROR from command1605" << std::endl;
 // last command was command number 1605
_testGetCheck(r);
std::cout << "last command was number: 1606 " << std::endl;
// last command was command number 1606
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1607" << std::endl;
 // last command was command number 1607
_testSitAtTable(r);
std::cout << "last command was number: 1608 " << std::endl;
// last command was command number 1608
const string items1609[] = {"pro158","pro575","pro328","pro279",};
const int itemsNum1609[] = {-83,1,5,6,};
_testGetOrder(r,4, items1609, itemsNum1609);
std::cerr << "last output should be ERROR from command1609" << std::endl;
 // last command was command number 1609
_testPrintTables(r);
std::cout << "last command was number: 1610 " << std::endl;
// last command was command number 1610
const string items1611[] = {"pro742","pro262",};
const int itemsNum1611[] = {-99,6,};
_testGetOrder(r,2, items1611, itemsNum1611);
std::cerr << "last output should be ERROR from command1611" << std::endl;
 // last command was command number 1611
_testSitAtTable(r);
std::cout << "last command was number: 1612 " << std::endl;
// last command was command number 1612
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1613" << std::endl;
 // last command was command number 1613
const string items1614[] = {"pro156","pro390","pro719","pro285",};
const int itemsNum1614[] = {7,2,3,-20,};
_testGetOrder(r,4, items1614, itemsNum1614);
std::cerr << "last output should be ERROR from command1614" << std::endl;
 // last command was command number 1614
_testPrintWaitList(r);
std::cout << "last command was number: 1615 " << std::endl;
// last command was command number 1615
const string items1616[] = {"pro988","pro262",};
const int itemsNum1616[] = {7,8,};
_testGetOrder(r,2, items1616, itemsNum1616);
std::cout << "last command was number: 1616 " << std::endl;
// last command was command number 1616
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1617" << std::endl;
 // last command was command number 1617
_testGetCheck(r);
std::cout << "last command was number: 1618 " << std::endl;
// last command was command number 1618
_testPrintServedList(r);
std::cout << "last command was number: 1619 " << std::endl;
// last command was command number 1619
const string items1620[] = {"pro768","pro702",};
const int itemsNum1620[] = {8,8,};
_testGetOrder(r,2, items1620, itemsNum1620);
std::cout << "last command was number: 1620 " << std::endl;
// last command was command number 1620
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1621" << std::endl;
 // last command was command number 1621
const string items1622[] = {"pro981","bad product!","pro863","pro745",};
const int itemsNum1622[] = {5,6,3,9,};
_testGetOrder(r,4, items1622, itemsNum1622);
std::cerr << "last output should be ERROR from command1622" << std::endl;
 // last command was command number 1622
_testPrintCheckList(r);
std::cout << "last command was number: 1623 " << std::endl;
// last command was command number 1623
_testPrintCheckList(r);
std::cout << "last command was number: 1624 " << std::endl;
// last command was command number 1624
_testSitAtTable(r);
std::cout << "last command was number: 1625 " << std::endl;
// last command was command number 1625
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1626" << std::endl;
 // last command was command number 1626
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1627" << std::endl;
 // last command was command number 1627
_testSitAtTable(r);
std::cout << "last command was number: 1628 " << std::endl;
// last command was command number 1628
const string items1629[] = {"pro279","pro377","pro299","pro148","pro988",};
const int itemsNum1629[] = {5,2,-78,9,7,};
_testGetOrder(r,5, items1629, itemsNum1629);
std::cerr << "last output should be ERROR from command1629" << std::endl;
 // last command was command number 1629
_testPrintWaitList(r);
std::cout << "last command was number: 1630 " << std::endl;
// last command was command number 1630
_testGetCheck(r);
std::cout << "last command was number: 1631 " << std::endl;
// last command was command number 1631
const string items1632[] = {"pro330","pro757","pro7","pro740","pro733",};
const int itemsNum1632[] = {4,5,6,6,-87,};
_testGetOrder(r,-8, items1632, itemsNum1632);
std::cerr << "last output should be ERROR from command1632" << std::endl;
 // last command was command number 1632
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1633" << std::endl;
 // last command was command number 1633
const string items1634[] = {"pro243","pro977","pro736","pro285","pro294",};
const int itemsNum1634[] = {10,2,6,5,3,};
_testGetOrder(r,5, items1634, itemsNum1634);
std::cout << "last command was number: 1634 " << std::endl;
// last command was command number 1634
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1635" << std::endl;
 // last command was command number 1635
_testSitAtTable(r);
std::cout << "last command was number: 1636 " << std::endl;
// last command was command number 1636
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1637" << std::endl;
 // last command was command number 1637
const string items1638[] = {"pro156","pro863","pro201","pro912","pro987",};
const int itemsNum1638[] = {9,7,4,8,7,};
_testGetOrder(r,5, items1638, itemsNum1638);
std::cout << "last command was number: 1638 " << std::endl;
// last command was command number 1638
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1639" << std::endl;
 // last command was command number 1639
_testGetCheck(r);
std::cout << "last command was number: 1640 " << std::endl;
// last command was command number 1640
_testPrintCheckList(r);
std::cout << "last command was number: 1641 " << std::endl;
// last command was command number 1641
_testGetCheck(r);
std::cout << "last command was number: 1642 " << std::endl;
// last command was command number 1642
_testSitAtTable(r);
std::cout << "last command was number: 1643 " << std::endl;
// last command was command number 1643
const string items1644[] = {"pro508","pro255","pro872",};
const int itemsNum1644[] = {3,1,-45,};
_testGetOrder(r,3, items1644, itemsNum1644);
std::cerr << "last output should be ERROR from command1644" << std::endl;
 // last command was command number 1644
const string items1645[] = {"pro440","bad product!",};
const int itemsNum1645[] = {5,4,};
_testGetOrder(r,2, items1645, itemsNum1645);
std::cerr << "last output should be ERROR from command1645" << std::endl;
 // last command was command number 1645
_testGetCheck(r);
std::cout << "last command was number: 1646 " << std::endl;
// last command was command number 1646
_testPrintTables(r);
std::cout << "last command was number: 1647 " << std::endl;
// last command was command number 1647
_testSitAtTable(r);
std::cout << "last command was number: 1648 " << std::endl;
// last command was command number 1648
_testPrintServedList(r);
std::cout << "last command was number: 1649 " << std::endl;
// last command was command number 1649
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1650" << std::endl;
 // last command was command number 1650
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1651" << std::endl;
 // last command was command number 1651
_testGetCheck(r);
std::cout << "last command was number: 1652 " << std::endl;
// last command was command number 1652
_testGetCheck(r);
std::cout << "last command was number: 1653 " << std::endl;
// last command was command number 1653
_testAddToWaitList(r,76);
std::cout << "last command was number: 1654 " << std::endl;
// last command was command number 1654
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1655" << std::endl;
 // last command was command number 1655
const string items1656[] = {"pro608","pro545","bad product!","pro872",};
const int itemsNum1656[] = {3,7,1,4,};
_testGetOrder(r,4, items1656, itemsNum1656);
std::cerr << "last output should be ERROR from command1656" << std::endl;
 // last command was command number 1656
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1657" << std::endl;
 // last command was command number 1657
_testPrintCheckList(r);
std::cout << "last command was number: 1658 " << std::endl;
// last command was command number 1658
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1659" << std::endl;
 // last command was command number 1659
_testPrintTables(r);
std::cout << "last command was number: 1660 " << std::endl;
// last command was command number 1660
const string items1661[] = {"pro299","pro402","bad product!","pro285",};
const int itemsNum1661[] = {4,6,2,7,};
_testGetOrder(r,4, items1661, itemsNum1661);
std::cerr << "last output should be ERROR from command1661" << std::endl;
 // last command was command number 1661
_testPrintServedList(r);
std::cout << "last command was number: 1662 " << std::endl;
// last command was command number 1662
_testAddToWaitList(r,69);
std::cout << "last command was number: 1663 " << std::endl;
// last command was command number 1663
const string items1664[] = {"bad product!",};
const int itemsNum1664[] = {7,};
_testGetOrder(r,1, items1664, itemsNum1664);
std::cerr << "last output should be ERROR from command1664" << std::endl;
 // last command was command number 1664
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1665" << std::endl;
 // last command was command number 1665
const string items1666[] = {"bad product!","pro201","pro279",};
const int itemsNum1666[] = {3,5,7,};
_testGetOrder(r,3, items1666, itemsNum1666);
std::cerr << "last output should be ERROR from command1666" << std::endl;
 // last command was command number 1666
const string items1667[] = {"pro947","pro535",};
const int itemsNum1667[] = {2,-98,};
_testGetOrder(r,2, items1667, itemsNum1667);
std::cerr << "last output should be ERROR from command1667" << std::endl;
 // last command was command number 1667
_testSitAtTable(r);
std::cout << "last command was number: 1668 " << std::endl;
// last command was command number 1668
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1669" << std::endl;
 // last command was command number 1669
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1670" << std::endl;
 // last command was command number 1670
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1671" << std::endl;
 // last command was command number 1671
const string items1672[] = {"pro154","pro872","pro768","pro605","pro167",};
const int itemsNum1672[] = {4,1,1,5,3,};
_testGetOrder(r,-8, items1672, itemsNum1672);
std::cerr << "last output should be ERROR from command1672" << std::endl;
 // last command was command number 1672
_testPrintTables(r);
std::cout << "last command was number: 1673 " << std::endl;
// last command was command number 1673
_testAddToWaitList(r,86);
std::cout << "last command was number: 1674 " << std::endl;
// last command was command number 1674
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1675" << std::endl;
 // last command was command number 1675
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1676" << std::endl;
 // last command was command number 1676
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1677" << std::endl;
 // last command was command number 1677
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1678" << std::endl;
 // last command was command number 1678
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1679" << std::endl;
 // last command was command number 1679
const string items1680[] = {"bad product!",};
const int itemsNum1680[] = {6,};
_testGetOrder(r,1, items1680, itemsNum1680);
std::cerr << "last output should be ERROR from command1680" << std::endl;
 // last command was command number 1680
_testSitAtTable(r);
std::cout << "last command was number: 1681 " << std::endl;
// last command was command number 1681
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1682" << std::endl;
 // last command was command number 1682
_testSitAtTable(r);
std::cout << "last command was number: 1683 " << std::endl;
// last command was command number 1683
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1684" << std::endl;
 // last command was command number 1684
const string items1685[] = {"pro539","bad product!","pro981",};
const int itemsNum1685[] = {4,5,8,};
_testGetOrder(r,3, items1685, itemsNum1685);
std::cerr << "last output should be ERROR from command1685" << std::endl;
 // last command was command number 1685
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1686" << std::endl;
 // last command was command number 1686
_testAddToWaitList(r,52);
std::cout << "last command was number: 1687 " << std::endl;
// last command was command number 1687
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1688" << std::endl;
 // last command was command number 1688
_testAddToWaitList(r,51);
std::cout << "last command was number: 1689 " << std::endl;
// last command was command number 1689
_testAddToWaitList(r,96);
std::cout << "last command was number: 1690 " << std::endl;
// last command was command number 1690
const string items1691[] = {"bad product!","pro535","pro365",};
const int itemsNum1691[] = {7,-41,7,};
_testGetOrder(r,3, items1691, itemsNum1691);
std::cerr << "last output should be ERROR from command1691" << std::endl;
 // last command was command number 1691
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1692" << std::endl;
 // last command was command number 1692
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1693" << std::endl;
 // last command was command number 1693
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1694" << std::endl;
 // last command was command number 1694
_testAddToWaitList(r,68);
std::cout << "last command was number: 1695 " << std::endl;
// last command was command number 1695
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1696" << std::endl;
 // last command was command number 1696
_testSitAtTable(r);
std::cout << "last command was number: 1697 " << std::endl;
// last command was command number 1697
const string items1698[] = {"pro351","pro335",};
const int itemsNum1698[] = {3,9,};
_testGetOrder(r,-63, items1698, itemsNum1698);
std::cerr << "last output should be ERROR from command1698" << std::endl;
 // last command was command number 1698
_testPrintWaitList(r);
std::cout << "last command was number: 1699 " << std::endl;
// last command was command number 1699
_testPrintCheckList(r);
std::cout << "last command was number: 1700 " << std::endl;
// last command was command number 1700
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1701" << std::endl;
 // last command was command number 1701
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1702" << std::endl;
 // last command was command number 1702
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1703" << std::endl;
 // last command was command number 1703
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1704" << std::endl;
 // last command was command number 1704
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1705" << std::endl;
 // last command was command number 1705
const string items1706[] = {"bad product!","pro605",};
const int itemsNum1706[] = {8,3,};
_testGetOrder(r,2, items1706, itemsNum1706);
std::cerr << "last output should be ERROR from command1706" << std::endl;
 // last command was command number 1706
_testPrintWaitList(r);
std::cout << "last command was number: 1707 " << std::endl;
// last command was command number 1707
_testPrintOpenOrders(r);
std::cout << "last command was number: 1708 " << std::endl;
// last command was command number 1708
_testPrintWaitList(r);
std::cout << "last command was number: 1709 " << std::endl;
// last command was command number 1709
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1710" << std::endl;
 // last command was command number 1710
_testSitAtTable(r);
std::cout << "last command was number: 1711 " << std::endl;
// last command was command number 1711
const string items1712[] = {"pro402","pro379","pro713","pro330","pro703",};
const int itemsNum1712[] = {5,5,7,-12,5,};
_testGetOrder(r,5, items1712, itemsNum1712);
std::cerr << "last output should be ERROR from command1712" << std::endl;
 // last command was command number 1712
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1713" << std::endl;
 // last command was command number 1713
_testGetCheck(r);
std::cerr << "last output should be ERROR from command1714" << std::endl;
 // last command was command number 1714
_testSitAtTable(r);
std::cout << "last command was number: 1715 " << std::endl;
// last command was command number 1715
const string items1716[] = {"pro255",};
const int itemsNum1716[] = {1,};
_testGetOrder(r,1, items1716, itemsNum1716);
std::cout << "last command was number: 1716 " << std::endl;
// last command was command number 1716
_testAddToWaitList(r,77);
std::cout << "last command was number: 1717 " << std::endl;
// last command was command number 1717
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1718" << std::endl;
 // last command was command number 1718
_testPrintTables(r);
std::cout << "last command was number: 1719 " << std::endl;
// last command was command number 1719
const string items1720[] = {"pro365","bad product!",};
const int itemsNum1720[] = {2,10,};
_testGetOrder(r,2, items1720, itemsNum1720);
std::cerr << "last output should be ERROR from command1720" << std::endl;
 // last command was command number 1720
const string items1721[] = {"pro988",};
const int itemsNum1721[] = {10,};
_testGetOrder(r,1, items1721, itemsNum1721);
std::cout << "last command was number: 1721 " << std::endl;
// last command was command number 1721
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1722" << std::endl;
 // last command was command number 1722
_testPrintProfits(r);
std::cout << "last command was number: 1723 " << std::endl;
// last command was command number 1723
const string items1724[] = {"pro608","bad product!",};
const int itemsNum1724[] = {1,9,};
_testGetOrder(r,2, items1724, itemsNum1724);
std::cerr << "last output should be ERROR from command1724" << std::endl;
 // last command was command number 1724
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1725" << std::endl;
 // last command was command number 1725
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1726" << std::endl;
 // last command was command number 1726
const string items1727[] = {"pro294","pro981","pro872","pro77",};
const int itemsNum1727[] = {2,10,5,9,};
_testGetOrder(r,-85, items1727, itemsNum1727);
std::cerr << "last output should be ERROR from command1727" << std::endl;
 // last command was command number 1727
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1728" << std::endl;
 // last command was command number 1728
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1729" << std::endl;
 // last command was command number 1729
const string items1730[] = {"bad product!","pro959","pro895","pro377","pro605",};
const int itemsNum1730[] = {8,9,1,10,6,};
_testGetOrder(r,5, items1730, itemsNum1730);
std::cerr << "last output should be ERROR from command1730" << std::endl;
 // last command was command number 1730
const string items1731[] = {"pro895","pro745","bad product!",};
const int itemsNum1731[] = {8,7,1,};
_testGetOrder(r,3, items1731, itemsNum1731);
std::cerr << "last output should be ERROR from command1731" << std::endl;
 // last command was command number 1731
_testPrintOpenOrders(r);
std::cout << "last command was number: 1732 " << std::endl;
// last command was command number 1732
_testGetCheck(r);
std::cout << "last command was number: 1733 " << std::endl;
// last command was command number 1733
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1734" << std::endl;
 // last command was command number 1734
const string items1735[] = {"bad product!",};
const int itemsNum1735[] = {4,};
_testGetOrder(r,1, items1735, itemsNum1735);
std::cerr << "last output should be ERROR from command1735" << std::endl;
 // last command was command number 1735
const string items1736[] = {"pro520","pro969","bad product!",};
const int itemsNum1736[] = {4,1,4,};
_testGetOrder(r,3, items1736, itemsNum1736);
std::cerr << "last output should be ERROR from command1736" << std::endl;
 // last command was command number 1736
_testPrintOpenOrders(r);
std::cout << "last command was number: 1737 " << std::endl;
// last command was command number 1737
_testAddToWaitList(r,51);
std::cout << "last command was number: 1738 " << std::endl;
// last command was command number 1738
const string items1739[] = {"pro240","pro213","pro335","pro243","pro508",};
const int itemsNum1739[] = {9,3,5,1,9,};
_testGetOrder(r,5, items1739, itemsNum1739);
std::cout << "last command was number: 1739 " << std::endl;
// last command was command number 1739
const string items1740[] = {"bad product!","pro608",};
const int itemsNum1740[] = {10,5,};
_testGetOrder(r,2, items1740, itemsNum1740);
std::cerr << "last output should be ERROR from command1740" << std::endl;
 // last command was command number 1740
_testSitAtTable(r);
std::cout << "last command was number: 1741 " << std::endl;
// last command was command number 1741
_testPrintWaitList(r);
std::cout << "last command was number: 1742 " << std::endl;
// last command was command number 1742
_testPrintProfits(r);
std::cout << "last command was number: 1743 " << std::endl;
// last command was command number 1743
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1744" << std::endl;
 // last command was command number 1744
const string items1745[] = {"pro543","pro648","pro208",};
const int itemsNum1745[] = {8,8,5,};
_testGetOrder(r,3, items1745, itemsNum1745);
std::cout << "last command was number: 1745 " << std::endl;
// last command was command number 1745
_testPrintOpenOrders(r);
std::cout << "last command was number: 1746 " << std::endl;
// last command was command number 1746
const string items1747[] = {"pro375","bad product!","pro648","pro746",};
const int itemsNum1747[] = {1,5,7,5,};
_testGetOrder(r,4, items1747, itemsNum1747);
std::cerr << "last output should be ERROR from command1747" << std::endl;
 // last command was command number 1747
const string items1748[] = {"pro661","pro695",};
const int itemsNum1748[] = {1,3,};
_testGetOrder(r,2, items1748, itemsNum1748);
std::cout << "last command was number: 1748 " << std::endl;
// last command was command number 1748
_testSitAtTable(r);
std::cout << "last command was number: 1749 " << std::endl;
// last command was command number 1749
const string items1750[] = {"pro255","pro592",};
const int itemsNum1750[] = {8,10,};
_testGetOrder(r,2, items1750, itemsNum1750);
std::cout << "last command was number: 1750 " << std::endl;
// last command was command number 1750
const string items1751[] = {"pro826","bad product!","pro129",};
const int itemsNum1751[] = {4,-8,8,};
_testGetOrder(r,-78, items1751, itemsNum1751);
std::cerr << "last output should be ERROR from command1751" << std::endl;
 // last command was command number 1751
_testSitAtTable(r);
std::cout << "last command was number: 1752 " << std::endl;
// last command was command number 1752
const string items1753[] = {"pro661","bad product!","pro375",};
const int itemsNum1753[] = {3,6,8,};
_testGetOrder(r,3, items1753, itemsNum1753);
std::cerr << "last output should be ERROR from command1753" << std::endl;
 // last command was command number 1753
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1754" << std::endl;
 // last command was command number 1754
const string items1755[] = {"pro702","pro7","pro545",};
const int itemsNum1755[] = {-38,9,2,};
_testGetOrder(r,3, items1755, itemsNum1755);
std::cerr << "last output should be ERROR from command1755" << std::endl;
 // last command was command number 1755
const string items1756[] = {"pro136","pro129","pro703","pro912",};
const int itemsNum1756[] = {6,8,8,1,};
_testGetOrder(r,4, items1756, itemsNum1756);
std::cout << "last command was number: 1756 " << std::endl;
// last command was command number 1756
const string items1757[] = {"bad product!",};
const int itemsNum1757[] = {2,};
_testGetOrder(r,1, items1757, itemsNum1757);
std::cerr << "last output should be ERROR from command1757" << std::endl;
 // last command was command number 1757
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1758" << std::endl;
 // last command was command number 1758
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1759" << std::endl;
 // last command was command number 1759
const string items1760[] = {"pro757","pro981","pro959","pro703","pro299",};
const int itemsNum1760[] = {10,6,5,7,-85,};
_testGetOrder(r,5, items1760, itemsNum1760);
std::cerr << "last output should be ERROR from command1760" << std::endl;
 // last command was command number 1760
_testAddToWaitList(r,90);
std::cout << "last command was number: 1761 " << std::endl;
// last command was command number 1761
_testSitAtTable(r);
std::cout << "last command was number: 1762 " << std::endl;
// last command was command number 1762
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1763" << std::endl;
 // last command was command number 1763
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1764" << std::endl;
 // last command was command number 1764
_testAddToWaitList(r,61);
std::cout << "last command was number: 1765 " << std::endl;
// last command was command number 1765
const string items1766[] = {"pro335","pro545","pro138","pro981","pro255",};
const int itemsNum1766[] = {6,1,9,7,2,};
_testGetOrder(r,5, items1766, itemsNum1766);
std::cout << "last command was number: 1766 " << std::endl;
// last command was command number 1766
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command1767" << std::endl;
 // last command was command number 1767
_testAddToWaitList(r,56);
std::cout << "last command was number: 1768 " << std::endl;
// last command was command number 1768
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command1769" << std::endl;
 // last command was command number 1769
const string items1770[] = {"bad product!",};
const int itemsNum1770[] = {4,};
_testGetOrder(r,1, items1770, itemsNum1770);
std::cerr << "last output should be ERROR from command1770" << std::endl;
 // last command was command number 1770
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command1771" << std::endl;
 // last command was command number 1771
const string items1772[] = {"bad product!",};
const int itemsNum1772[] = {1,};
_testGetOrder(r,1, items1772, itemsNum1772);
std::cerr << "last output should be ERROR from command1772" << std::endl;
 // last command was command number 1772
const string items1773[] = {"pro335","pro733","pro129",};
const int itemsNum1773[] = {5,-3,4,};
_testGetOrder(r,3, items1773, itemsNum1773);
std::cerr << "last output should be ERROR from command1773" << std::endl;
 // last command was command number 1773
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1774" << std::endl;
 // last command was command number 1774
const string items1775[] = {"pro377","pro213","pro248","pro826",};
const int itemsNum1775[] = {3,7,1,5,};
_testGetOrder(r,4, items1775, itemsNum1775);
std::cout << "last command was number: 1775 " << std::endl;
// last command was command number 1775
const string items1776[] = {"pro508","pro7",};
const int itemsNum1776[] = {-72,10,};
_testGetOrder(r,2, items1776, itemsNum1776);
std::cerr << "last output should be ERROR from command1776" << std::endl;
 // last command was command number 1776
_testPrintOpenOrders(r);
std::cout << "last command was number: 1777 " << std::endl;
// last command was command number 1777
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command1778" << std::endl;
 // last command was command number 1778
_testGetCheck(r);
std::cout << "last command was number: 1779 " << std::endl;
// last command was command number 1779
_testGetCheck(r);
std::cout << "last command was number: 1780 " << std::endl;
// last command was command number 1780
_testPrintProfits(r);
std::cout << "last command was number: 1781 " << std::endl;
// last command was command number 1781
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1782" << std::endl;
 // last command was command number 1782
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1783" << std::endl;
 // last command was command number 1783
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1784" << std::endl;
 // last command was command number 1784
_testPrintServedList(r);
std::cout << "last command was number: 1785 " << std::endl;
// last command was command number 1785
_testSitAtTable(r);
std::cout << "last command was number: 1786 " << std::endl;
// last command was command number 1786
_testAddToWaitList(r,54);
std::cout << "last command was number: 1787 " << std::endl;
// last command was command number 1787
_testAddToWaitList(r,59);
std::cout << "last command was number: 1788 " << std::endl;
// last command was command number 1788
const string items1789[] = {"bad product!","pro929",};
const int itemsNum1789[] = {4,7,};
_testGetOrder(r,-63, items1789, itemsNum1789);
std::cerr << "last output should be ERROR from command1789" << std::endl;
 // last command was command number 1789
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1790" << std::endl;
 // last command was command number 1790
_testSitAtTable(r);
std::cout << "last command was number: 1791 " << std::endl;
// last command was command number 1791
const string items1792[] = {"pro440","pro768","pro592",};
const int itemsNum1792[] = {6,8,2,};
_testGetOrder(r,3, items1792, itemsNum1792);
std::cout << "last command was number: 1792 " << std::endl;
// last command was command number 1792
_testPrintTables(r);
std::cout << "last command was number: 1793 " << std::endl;
// last command was command number 1793
_testGetCheck(r);
std::cout << "last command was number: 1794 " << std::endl;
// last command was command number 1794
const string items1795[] = {"bad product!","pro702","pro605","pro240",};
const int itemsNum1795[] = {6,7,2,6,};
_testGetOrder(r,4, items1795, itemsNum1795);
std::cerr << "last output should be ERROR from command1795" << std::endl;
 // last command was command number 1795
_testPrintWaitList(r);
std::cout << "last command was number: 1796 " << std::endl;
// last command was command number 1796
const string items1797[] = {"pro417","pro440","pro299","pro137","pro543",};
const int itemsNum1797[] = {9,7,10,7,4,};
_testGetOrder(r,5, items1797, itemsNum1797);
std::cout << "last command was number: 1797 " << std::endl;
// last command was command number 1797
_testGetCheck(r);
std::cout << "last command was number: 1798 " << std::endl;
// last command was command number 1798
_testPrintOpenOrders(r);
std::cout << "last command was number: 1799 " << std::endl;
// last command was command number 1799
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1800" << std::endl;
 // last command was command number 1800
_testPrintWaitList(r);
std::cout << "last command was number: 1801 " << std::endl;
// last command was command number 1801
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1802" << std::endl;
 // last command was command number 1802
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command1803" << std::endl;
 // last command was command number 1803
const string items1804[] = {"pro120","pro534","pro335","pro184",};
const int itemsNum1804[] = {1,5,5,9,};
_testGetOrder(r,4, items1804, itemsNum1804);
std::cout << "last command was number: 1804 " << std::endl;
// last command was command number 1804
const string items1805[] = {"bad product!","pro959","pro545","pro709",};
const int itemsNum1805[] = {7,10,7,7,};
_testGetOrder(r,4, items1805, itemsNum1805);
std::cerr << "last output should be ERROR from command1805" << std::endl;
 // last command was command number 1805
_testGetCheck(r);
std::cout << "last command was number: 1806 " << std::endl;
// last command was command number 1806
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1807" << std::endl;
 // last command was command number 1807
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1808" << std::endl;
 // last command was command number 1808
_testPrintCheckList(r);
std::cout << "last command was number: 1809 " << std::endl;
// last command was command number 1809
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1810" << std::endl;
 // last command was command number 1810
_testSitAtTable(r);
std::cout << "last command was number: 1811 " << std::endl;
// last command was command number 1811
_testPrintCheckList(r);
std::cout << "last command was number: 1812 " << std::endl;
// last command was command number 1812
_testPrintWaitList(r);
std::cout << "last command was number: 1813 " << std::endl;
// last command was command number 1813
_testPrintWaitList(r);
std::cout << "last command was number: 1814 " << std::endl;
// last command was command number 1814
_testPrintWaitList(r);
std::cout << "last command was number: 1815 " << std::endl;
// last command was command number 1815
_testPrintOpenOrders(r);
std::cout << "last command was number: 1816 " << std::endl;
// last command was command number 1816
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1817" << std::endl;
 // last command was command number 1817
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1818" << std::endl;
 // last command was command number 1818
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1819" << std::endl;
 // last command was command number 1819
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1820" << std::endl;
 // last command was command number 1820
const string items1821[] = {"pro294","pro374",};
const int itemsNum1821[] = {6,3,};
_testGetOrder(r,2, items1821, itemsNum1821);
std::cout << "last command was number: 1821 " << std::endl;
// last command was command number 1821
_testGetCheck(r);
std::cout << "last command was number: 1822 " << std::endl;
// last command was command number 1822
const string items1823[] = {"pro299","pro539","bad product!",};
const int itemsNum1823[] = {4,8,1,};
_testGetOrder(r,3, items1823, itemsNum1823);
std::cerr << "last output should be ERROR from command1823" << std::endl;
 // last command was command number 1823
const string items1824[] = {"pro402","pro303","pro520","pro719","pro381",};
const int itemsNum1824[] = {6,8,7,2,1,};
_testGetOrder(r,5, items1824, itemsNum1824);
std::cout << "last command was number: 1824 " << std::endl;
// last command was command number 1824
_testPrintServedList(r);
std::cout << "last command was number: 1825 " << std::endl;
// last command was command number 1825
_testAddToWaitList(r,83);
std::cout << "last command was number: 1826 " << std::endl;
// last command was command number 1826
_testAddToWaitList(r,74);
std::cout << "last command was number: 1827 " << std::endl;
// last command was command number 1827
_testPrintTables(r);
std::cout << "last command was number: 1828 " << std::endl;
// last command was command number 1828
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1829" << std::endl;
 // last command was command number 1829
_testPrintServedList(r);
std::cout << "last command was number: 1830 " << std::endl;
// last command was command number 1830
const string items1831[] = {"pro742","bad product!",};
const int itemsNum1831[] = {6,3,};
_testGetOrder(r,2, items1831, itemsNum1831);
std::cerr << "last output should be ERROR from command1831" << std::endl;
 // last command was command number 1831
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1832" << std::endl;
 // last command was command number 1832
const string items1833[] = {"pro351","pro240",};
const int itemsNum1833[] = {6,-84,};
_testGetOrder(r,-6, items1833, itemsNum1833);
std::cerr << "last output should be ERROR from command1833" << std::endl;
 // last command was command number 1833
_testPrintProfits(r);
std::cout << "last command was number: 1834 " << std::endl;
// last command was command number 1834
_testGetCheck(r);
std::cout << "last command was number: 1835 " << std::endl;
// last command was command number 1835
const string items1836[] = {"pro120","bad product!","pro328",};
const int itemsNum1836[] = {8,3,9,};
_testGetOrder(r,3, items1836, itemsNum1836);
std::cerr << "last output should be ERROR from command1836" << std::endl;
 // last command was command number 1836
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1837" << std::endl;
 // last command was command number 1837
_testGetCheck(r);
std::cout << "last command was number: 1838 " << std::endl;
// last command was command number 1838
_testPrintServedList(r);
std::cout << "last command was number: 1839 " << std::endl;
// last command was command number 1839
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1840" << std::endl;
 // last command was command number 1840
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1841" << std::endl;
 // last command was command number 1841
_testSitAtTable(r);
std::cout << "last command was number: 1842 " << std::endl;
// last command was command number 1842
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1843" << std::endl;
 // last command was command number 1843
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1844" << std::endl;
 // last command was command number 1844
_testPrintCheckList(r);
std::cout << "last command was number: 1845 " << std::endl;
// last command was command number 1845
const string items1846[] = {"pro757","bad product!","pro912",};
const int itemsNum1846[] = {2,7,8,};
_testGetOrder(r,-89, items1846, itemsNum1846);
std::cerr << "last output should be ERROR from command1846" << std::endl;
 // last command was command number 1846
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command1847" << std::endl;
 // last command was command number 1847
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1848" << std::endl;
 // last command was command number 1848
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1849" << std::endl;
 // last command was command number 1849
_testGetCheck(r);
std::cout << "last command was number: 1850 " << std::endl;
// last command was command number 1850
const string items1851[] = {"pro248","pro733","pro120","bad product!","pro959",};
const int itemsNum1851[] = {3,7,5,7,6,};
_testGetOrder(r,5, items1851, itemsNum1851);
std::cerr << "last output should be ERROR from command1851" << std::endl;
 // last command was command number 1851
_testPrintOpenOrders(r);
std::cout << "last command was number: 1852 " << std::endl;
// last command was command number 1852
_testAddToWaitList(r,73);
std::cout << "last command was number: 1853 " << std::endl;
// last command was command number 1853
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1854" << std::endl;
 // last command was command number 1854
_testPrintTables(r);
std::cout << "last command was number: 1855 " << std::endl;
// last command was command number 1855
_testPrintCheckList(r);
std::cout << "last command was number: 1856 " << std::endl;
// last command was command number 1856
const string items1857[] = {"pro977","pro956","pro325","pro713",};
const int itemsNum1857[] = {8,1,1,-60,};
_testGetOrder(r,4, items1857, itemsNum1857);
std::cerr << "last output should be ERROR from command1857" << std::endl;
 // last command was command number 1857
_testPrintTables(r);
std::cout << "last command was number: 1858 " << std::endl;
// last command was command number 1858
const string items1859[] = {"bad product!","pro956","pro184","pro709",};
const int itemsNum1859[] = {9,2,7,3,};
_testGetOrder(r,4, items1859, itemsNum1859);
std::cerr << "last output should be ERROR from command1859" << std::endl;
 // last command was command number 1859
_testSitAtTable(r);
std::cout << "last command was number: 1860 " << std::endl;
// last command was command number 1860
_testAddToWaitList(r,56);
std::cout << "last command was number: 1861 " << std::endl;
// last command was command number 1861
_testPrintWaitList(r);
std::cout << "last command was number: 1862 " << std::endl;
// last command was command number 1862
const string items1863[] = {"bad product!","pro855","pro608","pro279",};
const int itemsNum1863[] = {10,5,2,1,};
_testGetOrder(r,4, items1863, itemsNum1863);
std::cerr << "last output should be ERROR from command1863" << std::endl;
 // last command was command number 1863
const string items1864[] = {"pro746","pro502",};
const int itemsNum1864[] = {6,3,};
_testGetOrder(r,2, items1864, itemsNum1864);
std::cout << "last command was number: 1864 " << std::endl;
// last command was command number 1864
const string items1865[] = {"pro440",};
const int itemsNum1865[] = {-67,};
_testGetOrder(r,-62, items1865, itemsNum1865);
std::cerr << "last output should be ERROR from command1865" << std::endl;
 // last command was command number 1865
_testPrintServedList(r);
std::cout << "last command was number: 1866 " << std::endl;
// last command was command number 1866
const string items1867[] = {"pro262","pro331","pro402","pro872","pro736",};
const int itemsNum1867[] = {4,5,3,4,2,};
_testGetOrder(r,5, items1867, itemsNum1867);
std::cout << "last command was number: 1867 " << std::endl;
// last command was command number 1867
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1868" << std::endl;
 // last command was command number 1868
_testGetCheck(r);
std::cout << "last command was number: 1869 " << std::endl;
// last command was command number 1869
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1870" << std::endl;
 // last command was command number 1870
_testAddToWaitList(r,54);
std::cout << "last command was number: 1871 " << std::endl;
// last command was command number 1871
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1872" << std::endl;
 // last command was command number 1872
const string items1873[] = {"pro158","pro375","pro201","pro608","pro120",};
const int itemsNum1873[] = {-31,7,1,3,6,};
_testGetOrder(r,-49, items1873, itemsNum1873);
std::cerr << "last output should be ERROR from command1873" << std::endl;
 // last command was command number 1873
_testSitAtTable(r);
std::cout << "last command was number: 1874 " << std::endl;
// last command was command number 1874
const string items1875[] = {"pro402","pro863","pro947","pro702","pro201",};
const int itemsNum1875[] = {9,7,4,10,4,};
_testGetOrder(r,5, items1875, itemsNum1875);
std::cout << "last command was number: 1875 " << std::endl;
// last command was command number 1875
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1876" << std::endl;
 // last command was command number 1876
_testGetCheck(r);
std::cout << "last command was number: 1877 " << std::endl;
// last command was command number 1877
const string items1878[] = {"pro575",};
const int itemsNum1878[] = {6,};
_testGetOrder(r,1, items1878, itemsNum1878);
std::cout << "last command was number: 1878 " << std::endl;
// last command was command number 1878
const string items1879[] = {"pro397","pro605","pro760",};
const int itemsNum1879[] = {2,5,9,};
_testGetOrder(r,3, items1879, itemsNum1879);
std::cout << "last command was number: 1879 " << std::endl;
// last command was command number 1879
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1880" << std::endl;
 // last command was command number 1880
_testAddToWaitList(r,50);
std::cout << "last command was number: 1881 " << std::endl;
// last command was command number 1881
_testSitAtTable(r);
std::cout << "last command was number: 1882 " << std::endl;
// last command was command number 1882
_testAddToWaitList(r,100);
std::cout << "last command was number: 1883 " << std::endl;
// last command was command number 1883
_testPrintOpenOrders(r);
std::cout << "last command was number: 1884 " << std::endl;
// last command was command number 1884
const string items1885[] = {"pro929","bad product!",};
const int itemsNum1885[] = {2,5,};
_testGetOrder(r,2, items1885, itemsNum1885);
std::cerr << "last output should be ERROR from command1885" << std::endl;
 // last command was command number 1885
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1886" << std::endl;
 // last command was command number 1886
_testAddToWaitList(r,69);
std::cout << "last command was number: 1887 " << std::endl;
// last command was command number 1887
const string items1888[] = {"pro575","pro240","pro279","pro285",};
const int itemsNum1888[] = {10,9,3,5,};
_testGetOrder(r,4, items1888, itemsNum1888);
std::cout << "last command was number: 1888 " << std::endl;
// last command was command number 1888
const string items1889[] = {"pro912","pro230","pro148","pro240",};
const int itemsNum1889[] = {7,2,8,-50,};
_testGetOrder(r,4, items1889, itemsNum1889);
std::cerr << "last output should be ERROR from command1889" << std::endl;
 // last command was command number 1889
_testPrintServedList(r);
std::cout << "last command was number: 1890 " << std::endl;
// last command was command number 1890
_testPrintWaitList(r);
std::cout << "last command was number: 1891 " << std::endl;
// last command was command number 1891
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1892" << std::endl;
 // last command was command number 1892
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1893" << std::endl;
 // last command was command number 1893
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1894" << std::endl;
 // last command was command number 1894
_testPrintServedList(r);
std::cout << "last command was number: 1895 " << std::endl;
// last command was command number 1895
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1896" << std::endl;
 // last command was command number 1896
_testAddToWaitList(r,56);
std::cout << "last command was number: 1897 " << std::endl;
// last command was command number 1897
_testPrintProfits(r);
std::cout << "last command was number: 1898 " << std::endl;
// last command was command number 1898
_testPrintProfits(r);
std::cout << "last command was number: 1899 " << std::endl;
// last command was command number 1899
_testPrintCheckList(r);
std::cout << "last command was number: 1900 " << std::endl;
// last command was command number 1900
const string items1901[] = {"pro709","bad product!","pro379",};
const int itemsNum1901[] = {7,3,7,};
_testGetOrder(r,-45, items1901, itemsNum1901);
std::cerr << "last output should be ERROR from command1901" << std::endl;
 // last command was command number 1901
_testAddToWaitList(r,59);
std::cout << "last command was number: 1902 " << std::endl;
// last command was command number 1902
const string items1903[] = {"pro167","pro201","pro136","pro821",};
const int itemsNum1903[] = {10,7,3,5,};
_testGetOrder(r,-12, items1903, itemsNum1903);
std::cerr << "last output should be ERROR from command1903" << std::endl;
 // last command was command number 1903
_testSitAtTable(r);
std::cout << "last command was number: 1904 " << std::endl;
// last command was command number 1904
_testSitAtTable(r);
std::cout << "last command was number: 1905 " << std::endl;
// last command was command number 1905
_testSitAtTable(r);
std::cout << "last command was number: 1906 " << std::endl;
// last command was command number 1906
_testPrintServedList(r);
std::cout << "last command was number: 1907 " << std::endl;
// last command was command number 1907
_testPrintOpenOrders(r);
std::cout << "last command was number: 1908 " << std::endl;
// last command was command number 1908
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1909" << std::endl;
 // last command was command number 1909
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1910" << std::endl;
 // last command was command number 1910
_testAddToWaitList(r,81);
std::cout << "last command was number: 1911 " << std::endl;
// last command was command number 1911
const string items1912[] = {"pro390","pro760",};
const int itemsNum1912[] = {-65,2,};
_testGetOrder(r,2, items1912, itemsNum1912);
std::cerr << "last output should be ERROR from command1912" << std::endl;
 // last command was command number 1912
_testSitAtTable(r);
std::cout << "last command was number: 1913 " << std::endl;
// last command was command number 1913
const string items1914[] = {"pro719","pro648","bad product!","pro534",};
const int itemsNum1914[] = {10,2,8,2,};
_testGetOrder(r,4, items1914, itemsNum1914);
std::cerr << "last output should be ERROR from command1914" << std::endl;
 // last command was command number 1914
const string items1915[] = {"pro912","pro330","pro390","pro100","pro543",};
const int itemsNum1915[] = {6,10,1,9,5,};
_testGetOrder(r,5, items1915, itemsNum1915);
std::cout << "last command was number: 1915 " << std::endl;
// last command was command number 1915
_testPrintWaitList(r);
std::cout << "last command was number: 1916 " << std::endl;
// last command was command number 1916
_testAddToWaitList(r,69);
std::cout << "last command was number: 1917 " << std::endl;
// last command was command number 1917
_testPrintServedList(r);
std::cout << "last command was number: 1918 " << std::endl;
// last command was command number 1918
_testSitAtTable(r);
std::cout << "last command was number: 1919 " << std::endl;
// last command was command number 1919
_testPrintServedList(r);
std::cout << "last command was number: 1920 " << std::endl;
// last command was command number 1920
_testPrintOpenOrders(r);
std::cout << "last command was number: 1921 " << std::endl;
// last command was command number 1921
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1922" << std::endl;
 // last command was command number 1922
const string items1923[] = {"bad product!",};
const int itemsNum1923[] = {5,};
_testGetOrder(r,-15, items1923, itemsNum1923);
std::cerr << "last output should be ERROR from command1923" << std::endl;
 // last command was command number 1923
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1924" << std::endl;
 // last command was command number 1924
const string items1925[] = {"pro539","pro262","pro138","pro760","pro7",};
const int itemsNum1925[] = {3,6,4,3,8,};
_testGetOrder(r,-5, items1925, itemsNum1925);
std::cerr << "last output should be ERROR from command1925" << std::endl;
 // last command was command number 1925
const string items1926[] = {"pro262","pro328","pro863",};
const int itemsNum1926[] = {4,10,5,};
_testGetOrder(r,3, items1926, itemsNum1926);
std::cout << "last command was number: 1926 " << std::endl;
// last command was command number 1926
_testGetCheck(r);
std::cout << "last command was number: 1927 " << std::endl;
// last command was command number 1927
_testPrintOpenOrders(r);
std::cout << "last command was number: 1928 " << std::endl;
// last command was command number 1928
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1929" << std::endl;
 // last command was command number 1929
_testSitAtTable(r);
std::cout << "last command was number: 1930 " << std::endl;
// last command was command number 1930
_testGetCheck(r);
std::cout << "last command was number: 1931 " << std::endl;
// last command was command number 1931
_testPrintProfits(r);
std::cout << "last command was number: 1932 " << std::endl;
// last command was command number 1932
const string items1933[] = {"pro966","bad product!","pro535","pro335","pro440",};
const int itemsNum1933[] = {10,2,5,6,3,};
_testGetOrder(r,5, items1933, itemsNum1933);
std::cerr << "last output should be ERROR from command1933" << std::endl;
 // last command was command number 1933
const string items1934[] = {"pro810","bad product!",};
const int itemsNum1934[] = {-81,2,};
_testGetOrder(r,2, items1934, itemsNum1934);
std::cerr << "last output should be ERROR from command1934" << std::endl;
 // last command was command number 1934
_testPrintOpenOrders(r);
std::cout << "last command was number: 1935 " << std::endl;
// last command was command number 1935
_testAddToWaitList(r,84);
std::cout << "last command was number: 1936 " << std::endl;
// last command was command number 1936
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1937" << std::endl;
 // last command was command number 1937
_testSitAtTable(r);
std::cout << "last command was number: 1938 " << std::endl;
// last command was command number 1938
_testAddToWaitList(r,78);
std::cout << "last command was number: 1939 " << std::endl;
// last command was command number 1939
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command1940" << std::endl;
 // last command was command number 1940
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1941" << std::endl;
 // last command was command number 1941
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1942" << std::endl;
 // last command was command number 1942
_testPrintTables(r);
std::cout << "last command was number: 1943 " << std::endl;
// last command was command number 1943
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command1944" << std::endl;
 // last command was command number 1944
_testGetCheck(r);
std::cout << "last command was number: 1945 " << std::endl;
// last command was command number 1945
_testPrintCheckList(r);
std::cout << "last command was number: 1946 " << std::endl;
// last command was command number 1946
const string items1947[] = {"pro248","pro956","pro77","pro148","pro929",};
const int itemsNum1947[] = {6,5,1,7,-53,};
_testGetOrder(r,-76, items1947, itemsNum1947);
std::cerr << "last output should be ERROR from command1947" << std::endl;
 // last command was command number 1947
const string items1948[] = {"bad product!","pro543",};
const int itemsNum1948[] = {9,5,};
_testGetOrder(r,2, items1948, itemsNum1948);
std::cerr << "last output should be ERROR from command1948" << std::endl;
 // last command was command number 1948
const string items1949[] = {"pro390","pro695","pro167","pro535","pro929",};
const int itemsNum1949[] = {6,10,10,-39,7,};
_testGetOrder(r,5, items1949, itemsNum1949);
std::cerr << "last output should be ERROR from command1949" << std::endl;
 // last command was command number 1949
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command1950" << std::endl;
 // last command was command number 1950
_testAddToWaitList(r,87);
std::cout << "last command was number: 1951 " << std::endl;
// last command was command number 1951
const string items1952[] = {"pro810",};
const int itemsNum1952[] = {6,};
_testGetOrder(r,1, items1952, itemsNum1952);
std::cout << "last command was number: 1952 " << std::endl;
// last command was command number 1952
_testPrintOpenOrders(r);
std::cout << "last command was number: 1953 " << std::endl;
// last command was command number 1953
const string items1954[] = {"pro402","pro120","pro262",};
const int itemsNum1954[] = {4,2,10,};
_testGetOrder(r,-9, items1954, itemsNum1954);
std::cerr << "last output should be ERROR from command1954" << std::endl;
 // last command was command number 1954
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command1955" << std::endl;
 // last command was command number 1955
_testSitAtTable(r);
std::cout << "last command was number: 1956 " << std::endl;
// last command was command number 1956
const string items1957[] = {"pro895","pro243","pro77","bad product!",};
const int itemsNum1957[] = {10,0,2,4,};
_testGetOrder(r,-29, items1957, itemsNum1957);
std::cerr << "last output should be ERROR from command1957" << std::endl;
 // last command was command number 1957
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1958" << std::endl;
 // last command was command number 1958
const string items1959[] = {"pro365","pro947",};
const int itemsNum1959[] = {8,1,};
_testGetOrder(r,-97, items1959, itemsNum1959);
std::cerr << "last output should be ERROR from command1959" << std::endl;
 // last command was command number 1959
const string items1960[] = {"pro895","pro535","pro440","pro457","pro740",};
const int itemsNum1960[] = {-71,5,1,3,9,};
_testGetOrder(r,5, items1960, itemsNum1960);
std::cerr << "last output should be ERROR from command1960" << std::endl;
 // last command was command number 1960
const string items1961[] = {"pro377","pro981","pro605","pro294","pro100",};
const int itemsNum1961[] = {-86,7,10,4,4,};
_testGetOrder(r,-15, items1961, itemsNum1961);
std::cerr << "last output should be ERROR from command1961" << std::endl;
 // last command was command number 1961
_testGetCheck(r);
std::cout << "last command was number: 1962 " << std::endl;
// last command was command number 1962
const string items1963[] = {"pro138","pro156",};
const int itemsNum1963[] = {-58,4,};
_testGetOrder(r,2, items1963, itemsNum1963);
std::cerr << "last output should be ERROR from command1963" << std::endl;
 // last command was command number 1963
const string items1964[] = {"pro702","pro381","pro213","pro433","pro648",};
const int itemsNum1964[] = {4,10,-59,1,2,};
_testGetOrder(r,5, items1964, itemsNum1964);
std::cerr << "last output should be ERROR from command1964" << std::endl;
 // last command was command number 1964
const string items1965[] = {"bad product!","pro77","pro335",};
const int itemsNum1965[] = {8,2,10,};
_testGetOrder(r,3, items1965, itemsNum1965);
std::cerr << "last output should be ERROR from command1965" << std::endl;
 // last command was command number 1965
_testSitAtTable(r);
std::cout << "last command was number: 1966 " << std::endl;
// last command was command number 1966
_testSitAtTable(r);
std::cout << "last command was number: 1967 " << std::endl;
// last command was command number 1967
const string items1968[] = {"pro241","pro912","pro243","pro491",};
const int itemsNum1968[] = {7,8,9,10,};
_testGetOrder(r,-93, items1968, itemsNum1968);
std::cerr << "last output should be ERROR from command1968" << std::endl;
 // last command was command number 1968
const string items1969[] = {"pro969","pro136",};
const int itemsNum1969[] = {8,-51,};
_testGetOrder(r,2, items1969, itemsNum1969);
std::cerr << "last output should be ERROR from command1969" << std::endl;
 // last command was command number 1969
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1970" << std::endl;
 // last command was command number 1970
_testAddToWaitList(r,94);
std::cout << "last command was number: 1971 " << std::endl;
// last command was command number 1971
const string items1972[] = {"pro956","pro539",};
const int itemsNum1972[] = {8,4,};
_testGetOrder(r,-22, items1972, itemsNum1972);
std::cerr << "last output should be ERROR from command1972" << std::endl;
 // last command was command number 1972
_testPrintProfits(r);
std::cout << "last command was number: 1973 " << std::endl;
// last command was command number 1973
_testPrintProfits(r);
std::cout << "last command was number: 1974 " << std::endl;
// last command was command number 1974
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command1975" << std::endl;
 // last command was command number 1975
_testPrintWaitList(r);
std::cout << "last command was number: 1976 " << std::endl;
// last command was command number 1976
const string items1977[] = {"pro440","pro433","pro863",};
const int itemsNum1977[] = {8,2,8,};
_testGetOrder(r,-14, items1977, itemsNum1977);
std::cerr << "last output should be ERROR from command1977" << std::endl;
 // last command was command number 1977
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1978" << std::endl;
 // last command was command number 1978
_testSitAtTable(r);
std::cout << "last command was number: 1979 " << std::endl;
// last command was command number 1979
const string items1980[] = {"pro810","pro390","pro402","pro912",};
const int itemsNum1980[] = {7,1,9,6,};
_testGetOrder(r,4, items1980, itemsNum1980);
std::cout << "last command was number: 1980 " << std::endl;
// last command was command number 1980
const string items1981[] = {"pro230","pro148","pro595",};
const int itemsNum1981[] = {8,4,10,};
_testGetOrder(r,3, items1981, itemsNum1981);
std::cout << "last command was number: 1981 " << std::endl;
// last command was command number 1981
_testPrintTables(r);
std::cout << "last command was number: 1982 " << std::endl;
// last command was command number 1982
_testPrintProfits(r);
std::cout << "last command was number: 1983 " << std::endl;
// last command was command number 1983
_testGetCheck(r);
std::cout << "last command was number: 1984 " << std::endl;
// last command was command number 1984
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1985" << std::endl;
 // last command was command number 1985
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command1986" << std::endl;
 // last command was command number 1986
_testPrintProfits(r);
std::cout << "last command was number: 1987 " << std::endl;
// last command was command number 1987
_testPrintProfits(r);
std::cout << "last command was number: 1988 " << std::endl;
// last command was command number 1988
_testPrintServedList(r);
std::cout << "last command was number: 1989 " << std::endl;
// last command was command number 1989
_testAddToWaitList(r,96);
std::cout << "last command was number: 1990 " << std::endl;
// last command was command number 1990
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command1991" << std::endl;
 // last command was command number 1991
_testGetCheck(r);
std::cout << "last command was number: 1992 " << std::endl;
// last command was command number 1992
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command1993" << std::endl;
 // last command was command number 1993
_testPrintCheckList(r);
std::cout << "last command was number: 1994 " << std::endl;
// last command was command number 1994
_testAddToWaitList(r,98);
std::cout << "last command was number: 1995 " << std::endl;
// last command was command number 1995
const string items1996[] = {"pro148","pro605","pro508","pro539","pro872",};
const int itemsNum1996[] = {5,5,1,10,2,};
_testGetOrder(r,5, items1996, itemsNum1996);
std::cout << "last command was number: 1996 " << std::endl;
// last command was command number 1996
_testPrintOpenOrders(r);
std::cout << "last command was number: 1997 " << std::endl;
// last command was command number 1997
_testGetCheck(r);
std::cout << "last command was number: 1998 " << std::endl;
// last command was command number 1998
_testPrintOpenOrders(r);
std::cout << "last command was number: 1999 " << std::endl;
// last command was command number 1999
_testAddToWaitList(r,88);
std::cout << "last command was number: 2000 " << std::endl;
// last command was command number 2000
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2001" << std::endl;
 // last command was command number 2001
const string items2002[] = {"pro987","pro746","bad product!",};
const int itemsNum2002[] = {3,5,2,};
_testGetOrder(r,3, items2002, itemsNum2002);
std::cerr << "last output should be ERROR from command2002" << std::endl;
 // last command was command number 2002
_testAddToWaitList(r,73);
std::cout << "last command was number: 2003 " << std::endl;
// last command was command number 2003
_testPrintServedList(r);
std::cout << "last command was number: 2004 " << std::endl;
// last command was command number 2004
_testAddToWaitList(r,61);
std::cout << "last command was number: 2005 " << std::endl;
// last command was command number 2005
_testGetCheck(r);
std::cout << "last command was number: 2006 " << std::endl;
// last command was command number 2006
_testPrintOpenOrders(r);
std::cout << "last command was number: 2007 " << std::endl;
// last command was command number 2007
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2008" << std::endl;
 // last command was command number 2008
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2009" << std::endl;
 // last command was command number 2009
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2010" << std::endl;
 // last command was command number 2010
_testGetCheck(r);
std::cout << "last command was number: 2011 " << std::endl;
// last command was command number 2011
const string items2012[] = {"pro895",};
const int itemsNum2012[] = {7,};
_testGetOrder(r,1, items2012, itemsNum2012);
std::cout << "last command was number: 2012 " << std::endl;
// last command was command number 2012
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2013" << std::endl;
 // last command was command number 2013
_testPrintOpenOrders(r);
std::cout << "last command was number: 2014 " << std::endl;
// last command was command number 2014
_testSitAtTable(r);
std::cout << "last command was number: 2015 " << std::endl;
// last command was command number 2015
const string items2016[] = {"pro230","pro969",};
const int itemsNum2016[] = {-80,6,};
_testGetOrder(r,2, items2016, itemsNum2016);
std::cerr << "last output should be ERROR from command2016" << std::endl;
 // last command was command number 2016
_testAddToWaitList(r,50);
std::cout << "last command was number: 2017 " << std::endl;
// last command was command number 2017
const string items2018[] = {"bad product!",};
const int itemsNum2018[] = {-58,};
_testGetOrder(r,1, items2018, itemsNum2018);
std::cerr << "last output should be ERROR from command2018" << std::endl;
 // last command was command number 2018
const string items2019[] = {"pro702","pro929","pro535",};
const int itemsNum2019[] = {5,6,4,};
_testGetOrder(r,3, items2019, itemsNum2019);
std::cout << "last command was number: 2019 " << std::endl;
// last command was command number 2019
_testPrintTables(r);
std::cout << "last command was number: 2020 " << std::endl;
// last command was command number 2020
_testSitAtTable(r);
std::cout << "last command was number: 2021 " << std::endl;
// last command was command number 2021
_testGetCheck(r);
std::cout << "last command was number: 2022 " << std::endl;
// last command was command number 2022
_testAddToWaitList(r,65);
std::cout << "last command was number: 2023 " << std::endl;
// last command was command number 2023
_testGetCheck(r);
std::cout << "last command was number: 2024 " << std::endl;
// last command was command number 2024
const string items2025[] = {"pro330","pro760","pro328","pro508",};
const int itemsNum2025[] = {4,5,10,1,};
_testGetOrder(r,4, items2025, itemsNum2025);
std::cout << "last command was number: 2025 " << std::endl;
// last command was command number 2025
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2026" << std::endl;
 // last command was command number 2026
_testAddToWaitList(r,77);
std::cout << "last command was number: 2027 " << std::endl;
// last command was command number 2027
const string items2028[] = {"pro299","pro966","pro335","pro605","pro912",};
const int itemsNum2028[] = {9,6,7,5,3,};
_testGetOrder(r,5, items2028, itemsNum2028);
std::cout << "last command was number: 2028 " << std::endl;
// last command was command number 2028
const string items2029[] = {"pro243","pro863",};
const int itemsNum2029[] = {10,7,};
_testGetOrder(r,2, items2029, itemsNum2029);
std::cout << "last command was number: 2029 " << std::endl;
// last command was command number 2029
const string items2030[] = {"pro648","pro981",};
const int itemsNum2030[] = {10,10,};
_testGetOrder(r,2, items2030, itemsNum2030);
std::cout << "last command was number: 2030 " << std::endl;
// last command was command number 2030
const string items2031[] = {"pro148","pro208","bad product!","pro535","pro77",};
const int itemsNum2031[] = {4,5,10,7,1,};
_testGetOrder(r,-52, items2031, itemsNum2031);
std::cerr << "last output should be ERROR from command2031" << std::endl;
 // last command was command number 2031
const string items2032[] = {"pro648",};
const int itemsNum2032[] = {5,};
_testGetOrder(r,1, items2032, itemsNum2032);
std::cout << "last command was number: 2032 " << std::endl;
// last command was command number 2032
const string items2033[] = {"pro253","pro351","pro912",};
const int itemsNum2033[] = {10,3,3,};
_testGetOrder(r,3, items2033, itemsNum2033);
std::cout << "last command was number: 2033 " << std::endl;
// last command was command number 2033
_testGetCheck(r);
std::cout << "last command was number: 2034 " << std::endl;
// last command was command number 2034
const string items2035[] = {"pro253",};
const int itemsNum2035[] = {9,};
_testGetOrder(r,1, items2035, itemsNum2035);
std::cout << "last command was number: 2035 " << std::endl;
// last command was command number 2035
const string items2036[] = {"pro402","pro120","pro208","pro457",};
const int itemsNum2036[] = {8,1,5,7,};
_testGetOrder(r,4, items2036, itemsNum2036);
std::cout << "last command was number: 2036 " << std::endl;
// last command was command number 2036
_testAddToWaitList(r,97);
std::cout << "last command was number: 2037 " << std::endl;
// last command was command number 2037
const string items2038[] = {"pro137","pro661","pro457",};
const int itemsNum2038[] = {-34,7,6,};
_testGetOrder(r,3, items2038, itemsNum2038);
std::cerr << "last output should be ERROR from command2038" << std::endl;
 // last command was command number 2038
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2039" << std::endl;
 // last command was command number 2039
_testSitAtTable(r);
std::cout << "last command was number: 2040 " << std::endl;
// last command was command number 2040
_testPrintProfits(r);
std::cout << "last command was number: 2041 " << std::endl;
// last command was command number 2041
_testPrintOpenOrders(r);
std::cout << "last command was number: 2042 " << std::endl;
// last command was command number 2042
_testAddToWaitList(r,85);
std::cout << "last command was number: 2043 " << std::endl;
// last command was command number 2043
_testPrintTables(r);
std::cout << "last command was number: 2044 " << std::endl;
// last command was command number 2044
_testAddToWaitList(r,82);
std::cout << "last command was number: 2045 " << std::endl;
// last command was command number 2045
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2046" << std::endl;
 // last command was command number 2046
const string items2047[] = {"pro285","bad product!","pro713",};
const int itemsNum2047[] = {9,8,2,};
_testGetOrder(r,3, items2047, itemsNum2047);
std::cerr << "last output should be ERROR from command2047" << std::endl;
 // last command was command number 2047
const string items2048[] = {"bad product!",};
const int itemsNum2048[] = {2,};
_testGetOrder(r,1, items2048, itemsNum2048);
std::cerr << "last output should be ERROR from command2048" << std::endl;
 // last command was command number 2048
_testGetCheck(r);
std::cout << "last command was number: 2049 " << std::endl;
// last command was command number 2049
_testAddToWaitList(r,86);
std::cout << "last command was number: 2050 " << std::endl;
// last command was command number 2050
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2051" << std::endl;
 // last command was command number 2051
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2052" << std::endl;
 // last command was command number 2052
_testPrintWaitList(r);
std::cout << "last command was number: 2053 " << std::endl;
// last command was command number 2053
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2054" << std::endl;
 // last command was command number 2054
_testPrintTables(r);
std::cout << "last command was number: 2055 " << std::endl;
// last command was command number 2055
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2056" << std::endl;
 // last command was command number 2056
const string items2057[] = {"pro695","pro279","pro397",};
const int itemsNum2057[] = {9,9,-86,};
_testGetOrder(r,3, items2057, itemsNum2057);
std::cerr << "last output should be ERROR from command2057" << std::endl;
 // last command was command number 2057
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2058" << std::endl;
 // last command was command number 2058
const string items2059[] = {"pro377",};
const int itemsNum2059[] = {-17,};
_testGetOrder(r,1, items2059, itemsNum2059);
std::cerr << "last output should be ERROR from command2059" << std::endl;
 // last command was command number 2059
const string items2060[] = {"pro365",};
const int itemsNum2060[] = {3,};
_testGetOrder(r,1, items2060, itemsNum2060);
std::cout << "last command was number: 2060 " << std::endl;
// last command was command number 2060
const string items2061[] = {"pro279","pro154","pro508","pro365","pro543",};
const int itemsNum2061[] = {6,5,5,3,6,};
_testGetOrder(r,5, items2061, itemsNum2061);
std::cout << "last command was number: 2061 " << std::endl;
// last command was command number 2061
_testGetCheck(r);
std::cout << "last command was number: 2062 " << std::endl;
// last command was command number 2062
const string items2063[] = {"pro760","pro895","bad product!",};
const int itemsNum2063[] = {5,2,4,};
_testGetOrder(r,3, items2063, itemsNum2063);
std::cerr << "last output should be ERROR from command2063" << std::endl;
 // last command was command number 2063
_testPrintServedList(r);
std::cout << "last command was number: 2064 " << std::endl;
// last command was command number 2064
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2065" << std::endl;
 // last command was command number 2065
_testAddToWaitList(r,59);
std::cout << "last command was number: 2066 " << std::endl;
// last command was command number 2066
const string items2067[] = {"pro253","bad product!","pro120","pro605","pro156",};
const int itemsNum2067[] = {6,6,6,2,10,};
_testGetOrder(r,5, items2067, itemsNum2067);
std::cerr << "last output should be ERROR from command2067" << std::endl;
 // last command was command number 2067
const string items2068[] = {"pro736","pro167","bad product!",};
const int itemsNum2068[] = {9,5,10,};
_testGetOrder(r,3, items2068, itemsNum2068);
std::cerr << "last output should be ERROR from command2068" << std::endl;
 // last command was command number 2068
_testAddToWaitList(r,70);
std::cout << "last command was number: 2069 " << std::endl;
// last command was command number 2069
_testPrintTables(r);
std::cout << "last command was number: 2070 " << std::endl;
// last command was command number 2070
const string items2071[] = {"pro491",};
const int itemsNum2071[] = {3,};
_testGetOrder(r,1, items2071, itemsNum2071);
std::cout << "last command was number: 2071 " << std::endl;
// last command was command number 2071
_testSitAtTable(r);
std::cout << "last command was number: 2072 " << std::endl;
// last command was command number 2072
const string items2073[] = {"pro736","pro440","pro713","pro255","pro969",};
const int itemsNum2073[] = {4,-58,7,7,2,};
_testGetOrder(r,5, items2073, itemsNum2073);
std::cerr << "last output should be ERROR from command2073" << std::endl;
 // last command was command number 2073
_testPrintOpenOrders(r);
std::cout << "last command was number: 2074 " << std::endl;
// last command was command number 2074
const string items2075[] = {"pro248","pro821","pro184","pro77","pro6",};
const int itemsNum2075[] = {5,4,1,9,10,};
_testGetOrder(r,5, items2075, itemsNum2075);
std::cout << "last command was number: 2075 " << std::endl;
// last command was command number 2075
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2076" << std::endl;
 // last command was command number 2076
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2077" << std::endl;
 // last command was command number 2077
_testPrintTables(r);
std::cout << "last command was number: 2078 " << std::endl;
// last command was command number 2078
_testSitAtTable(r);
std::cout << "last command was number: 2079 " << std::endl;
// last command was command number 2079
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2080" << std::endl;
 // last command was command number 2080
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2081" << std::endl;
 // last command was command number 2081
_testSitAtTable(r);
std::cout << "last command was number: 2082 " << std::endl;
// last command was command number 2082
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2083" << std::endl;
 // last command was command number 2083
const string items2084[] = {"pro303",};
const int itemsNum2084[] = {5,};
_testGetOrder(r,1, items2084, itemsNum2084);
std::cout << "last command was number: 2084 " << std::endl;
// last command was command number 2084
const string items2085[] = {"pro365",};
const int itemsNum2085[] = {2,};
_testGetOrder(r,1, items2085, itemsNum2085);
std::cout << "last command was number: 2085 " << std::endl;
// last command was command number 2085
_testPrintCheckList(r);
std::cout << "last command was number: 2086 " << std::endl;
// last command was command number 2086
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2087" << std::endl;
 // last command was command number 2087
const string items2088[] = {"pro440","pro331","pro351","pro77","pro709",};
const int itemsNum2088[] = {2,1,8,9,2,};
_testGetOrder(r,5, items2088, itemsNum2088);
std::cout << "last command was number: 2088 " << std::endl;
// last command was command number 2088
const string items2089[] = {"pro129",};
const int itemsNum2089[] = {-34,};
_testGetOrder(r,-19, items2089, itemsNum2089);
std::cerr << "last output should be ERROR from command2089" << std::endl;
 // last command was command number 2089
_testSitAtTable(r);
std::cout << "last command was number: 2090 " << std::endl;
// last command was command number 2090
_testSitAtTable(r);
std::cout << "last command was number: 2091 " << std::endl;
// last command was command number 2091
const string items2092[] = {"pro545","pro262","bad product!","pro977","pro137",};
const int itemsNum2092[] = {7,9,7,3,7,};
_testGetOrder(r,5, items2092, itemsNum2092);
std::cerr << "last output should be ERROR from command2092" << std::endl;
 // last command was command number 2092
const string items2093[] = {"pro138","pro912","pro129","pro592","pro742",};
const int itemsNum2093[] = {4,1,5,2,7,};
_testGetOrder(r,5, items2093, itemsNum2093);
std::cout << "last command was number: 2093 " << std::endl;
// last command was command number 2093
_testAddToWaitList(r,78);
std::cout << "last command was number: 2094 " << std::endl;
// last command was command number 2094
const string items2095[] = {"pro543","bad product!",};
const int itemsNum2095[] = {3,3,};
_testGetOrder(r,2, items2095, itemsNum2095);
std::cerr << "last output should be ERROR from command2095" << std::endl;
 // last command was command number 2095
const string items2096[] = {"pro335",};
const int itemsNum2096[] = {-1,};
_testGetOrder(r,1, items2096, itemsNum2096);
std::cerr << "last output should be ERROR from command2096" << std::endl;
 // last command was command number 2096
_testPrintServedList(r);
std::cout << "last command was number: 2097 " << std::endl;
// last command was command number 2097
_testSitAtTable(r);
std::cout << "last command was number: 2098 " << std::endl;
// last command was command number 2098
const string items2099[] = {"pro299",};
const int itemsNum2099[] = {2,};
_testGetOrder(r,-40, items2099, itemsNum2099);
std::cerr << "last output should be ERROR from command2099" << std::endl;
 // last command was command number 2099
_testPrintWaitList(r);
std::cout << "last command was number: 2100 " << std::endl;
// last command was command number 2100
const string items2101[] = {"pro375","pro248","pro129",};
const int itemsNum2101[] = {5,6,9,};
_testGetOrder(r,-26, items2101, itemsNum2101);
std::cerr << "last output should be ERROR from command2101" << std::endl;
 // last command was command number 2101
const string items2102[] = {"pro253","pro457","pro661","pro303","bad product!",};
const int itemsNum2102[] = {9,8,3,2,4,};
_testGetOrder(r,5, items2102, itemsNum2102);
std::cerr << "last output should be ERROR from command2102" << std::endl;
 // last command was command number 2102
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2103" << std::endl;
 // last command was command number 2103
_testSitAtTable(r);
std::cout << "last command was number: 2104 " << std::endl;
// last command was command number 2104
const string items2105[] = {"pro977","pro895",};
const int itemsNum2105[] = {7,8,};
_testGetOrder(r,2, items2105, itemsNum2105);
std::cout << "last command was number: 2105 " << std::endl;
// last command was command number 2105
_testPrintOpenOrders(r);
std::cout << "last command was number: 2106 " << std::endl;
// last command was command number 2106
const string items2107[] = {"bad product!","pro299",};
const int itemsNum2107[] = {7,7,};
_testGetOrder(r,2, items2107, itemsNum2107);
std::cerr << "last output should be ERROR from command2107" << std::endl;
 // last command was command number 2107
_testGetCheck(r);
std::cout << "last command was number: 2108 " << std::endl;
// last command was command number 2108
_testPrintOpenOrders(r);
std::cout << "last command was number: 2109 " << std::endl;
// last command was command number 2109
const string items2110[] = {"pro709","pro440","pro138","bad product!",};
const int itemsNum2110[] = {7,3,4,3,};
_testGetOrder(r,-86, items2110, itemsNum2110);
std::cerr << "last output should be ERROR from command2110" << std::endl;
 // last command was command number 2110
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2111" << std::endl;
 // last command was command number 2111
const string items2112[] = {"pro760","pro294","bad product!",};
const int itemsNum2112[] = {2,1,6,};
_testGetOrder(r,3, items2112, itemsNum2112);
std::cerr << "last output should be ERROR from command2112" << std::endl;
 // last command was command number 2112
_testPrintCheckList(r);
std::cout << "last command was number: 2113 " << std::endl;
// last command was command number 2113
_testAddToWaitList(r,66);
std::cout << "last command was number: 2114 " << std::endl;
// last command was command number 2114
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2115" << std::endl;
 // last command was command number 2115
_testSitAtTable(r);
std::cout << "last command was number: 2116 " << std::endl;
// last command was command number 2116
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2117" << std::endl;
 // last command was command number 2117
_testPrintServedList(r);
std::cout << "last command was number: 2118 " << std::endl;
// last command was command number 2118
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2119" << std::endl;
 // last command was command number 2119
_testPrintServedList(r);
std::cout << "last command was number: 2120 " << std::endl;
// last command was command number 2120
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2121" << std::endl;
 // last command was command number 2121
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2122" << std::endl;
 // last command was command number 2122
_testGetCheck(r);
std::cout << "last command was number: 2123 " << std::endl;
// last command was command number 2123
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2124" << std::endl;
 // last command was command number 2124
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2125" << std::endl;
 // last command was command number 2125
_testGetCheck(r);
std::cout << "last command was number: 2126 " << std::endl;
// last command was command number 2126
_testPrintProfits(r);
std::cout << "last command was number: 2127 " << std::endl;
// last command was command number 2127
_testGetCheck(r);
std::cout << "last command was number: 2128 " << std::endl;
// last command was command number 2128
const string items2129[] = {"bad product!","pro325",};
const int itemsNum2129[] = {1,7,};
_testGetOrder(r,2, items2129, itemsNum2129);
std::cerr << "last output should be ERROR from command2129" << std::endl;
 // last command was command number 2129
const string items2130[] = {"pro543","bad product!",};
const int itemsNum2130[] = {8,1,};
_testGetOrder(r,2, items2130, itemsNum2130);
std::cerr << "last output should be ERROR from command2130" << std::endl;
 // last command was command number 2130
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2131" << std::endl;
 // last command was command number 2131
const string items2132[] = {"bad product!","pro988",};
const int itemsNum2132[] = {2,3,};
_testGetOrder(r,2, items2132, itemsNum2132);
std::cerr << "last output should be ERROR from command2132" << std::endl;
 // last command was command number 2132
const string items2133[] = {"bad product!",};
const int itemsNum2133[] = {3,};
_testGetOrder(r,1, items2133, itemsNum2133);
std::cerr << "last output should be ERROR from command2133" << std::endl;
 // last command was command number 2133
const string items2134[] = {"pro966","pro491","pro575","bad product!","pro331",};
const int itemsNum2134[] = {6,6,8,2,9,};
_testGetOrder(r,5, items2134, itemsNum2134);
std::cerr << "last output should be ERROR from command2134" << std::endl;
 // last command was command number 2134
_testGetCheck(r);
std::cout << "last command was number: 2135 " << std::endl;
// last command was command number 2135
_testGetCheck(r);
std::cout << "last command was number: 2136 " << std::endl;
// last command was command number 2136
_testSitAtTable(r);
std::cout << "last command was number: 2137 " << std::endl;
// last command was command number 2137
_testGetCheck(r);
std::cout << "last command was number: 2138 " << std::endl;
// last command was command number 2138
const string items2139[] = {"pro230","pro491","pro768",};
const int itemsNum2139[] = {10,2,1,};
_testGetOrder(r,3, items2139, itemsNum2139);
std::cout << "last command was number: 2139 " << std::endl;
// last command was command number 2139
const string items2140[] = {"pro7","pro240",};
const int itemsNum2140[] = {8,8,};
_testGetOrder(r,2, items2140, itemsNum2140);
std::cout << "last command was number: 2140 " << std::endl;
// last command was command number 2140
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2141" << std::endl;
 // last command was command number 2141
_testPrintServedList(r);
std::cout << "last command was number: 2142 " << std::endl;
// last command was command number 2142
const string items2143[] = {"bad product!",};
const int itemsNum2143[] = {2,};
_testGetOrder(r,-71, items2143, itemsNum2143);
std::cerr << "last output should be ERROR from command2143" << std::endl;
 // last command was command number 2143
_testPrintProfits(r);
std::cout << "last command was number: 2144 " << std::endl;
// last command was command number 2144
_testSitAtTable(r);
std::cout << "last command was number: 2145 " << std::endl;
// last command was command number 2145
_testSitAtTable(r);
std::cout << "last command was number: 2146 " << std::endl;
// last command was command number 2146
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2147" << std::endl;
 // last command was command number 2147
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2148" << std::endl;
 // last command was command number 2148
_testSitAtTable(r);
std::cout << "last command was number: 2149 " << std::endl;
// last command was command number 2149
const string items2150[] = {"pro230","pro351","pro539","pro381",};
const int itemsNum2150[] = {4,6,5,4,};
_testGetOrder(r,4, items2150, itemsNum2150);
std::cout << "last command was number: 2150 " << std::endl;
// last command was command number 2150
const string items2151[] = {"pro757","pro77","pro745",};
const int itemsNum2151[] = {10,-4,1,};
_testGetOrder(r,3, items2151, itemsNum2151);
std::cerr << "last output should be ERROR from command2151" << std::endl;
 // last command was command number 2151
_testSitAtTable(r);
std::cout << "last command was number: 2152 " << std::endl;
// last command was command number 2152
const string items2153[] = {"bad product!",};
const int itemsNum2153[] = {4,};
_testGetOrder(r,1, items2153, itemsNum2153);
std::cerr << "last output should be ERROR from command2153" << std::endl;
 // last command was command number 2153
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2154" << std::endl;
 // last command was command number 2154
const string items2155[] = {"pro605",};
const int itemsNum2155[] = {2,};
_testGetOrder(r,-69, items2155, itemsNum2155);
std::cerr << "last output should be ERROR from command2155" << std::endl;
 // last command was command number 2155
const string items2156[] = {"pro702","pro351","pro491","pro720","pro402",};
const int itemsNum2156[] = {7,3,6,10,-16,};
_testGetOrder(r,5, items2156, itemsNum2156);
std::cerr << "last output should be ERROR from command2156" << std::endl;
 // last command was command number 2156
_testPrintOpenOrders(r);
std::cout << "last command was number: 2157 " << std::endl;
// last command was command number 2157
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2158" << std::endl;
 // last command was command number 2158
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2159" << std::endl;
 // last command was command number 2159
_testSitAtTable(r);
std::cout << "last command was number: 2160 " << std::endl;
// last command was command number 2160
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2161" << std::endl;
 // last command was command number 2161
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2162" << std::endl;
 // last command was command number 2162
_testAddToWaitList(r,61);
std::cout << "last command was number: 2163 " << std::endl;
// last command was command number 2163
_testPrintServedList(r);
std::cout << "last command was number: 2164 " << std::endl;
// last command was command number 2164
const string items2165[] = {"pro575","pro740","pro895","pro335",};
const int itemsNum2165[] = {6,3,2,7,};
_testGetOrder(r,4, items2165, itemsNum2165);
std::cout << "last command was number: 2165 " << std::endl;
// last command was command number 2165
const string items2166[] = {"pro167","pro977","pro377","pro325","bad product!",};
const int itemsNum2166[] = {2,10,5,8,3,};
_testGetOrder(r,5, items2166, itemsNum2166);
std::cerr << "last output should be ERROR from command2166" << std::endl;
 // last command was command number 2166
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2167" << std::endl;
 // last command was command number 2167
const string items2168[] = {"bad product!","pro328",};
const int itemsNum2168[] = {-82,1,};
_testGetOrder(r,2, items2168, itemsNum2168);
std::cerr << "last output should be ERROR from command2168" << std::endl;
 // last command was command number 2168
_testPrintOpenOrders(r);
std::cout << "last command was number: 2169 " << std::endl;
// last command was command number 2169
const string items2170[] = {"pro539","pro138","pro208","pro966","pro987",};
const int itemsNum2170[] = {9,2,3,7,8,};
_testGetOrder(r,-88, items2170, itemsNum2170);
std::cerr << "last output should be ERROR from command2170" << std::endl;
 // last command was command number 2170
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2171" << std::endl;
 // last command was command number 2171
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2172" << std::endl;
 // last command was command number 2172
const string items2173[] = {"pro508","pro397","bad product!",};
const int itemsNum2173[] = {7,2,8,};
_testGetOrder(r,3, items2173, itemsNum2173);
std::cerr << "last output should be ERROR from command2173" << std::endl;
 // last command was command number 2173
const string items2174[] = {"bad product!","pro390",};
const int itemsNum2174[] = {4,4,};
_testGetOrder(r,2, items2174, itemsNum2174);
std::cerr << "last output should be ERROR from command2174" << std::endl;
 // last command was command number 2174
const string items2175[] = {"pro77","bad product!",};
const int itemsNum2175[] = {9,5,};
_testGetOrder(r,2, items2175, itemsNum2175);
std::cerr << "last output should be ERROR from command2175" << std::endl;
 // last command was command number 2175
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2176" << std::endl;
 // last command was command number 2176
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2177" << std::endl;
 // last command was command number 2177
_testSitAtTable(r);
std::cout << "last command was number: 2178 " << std::endl;
// last command was command number 2178
const string items2179[] = {"pro138","pro303",};
const int itemsNum2179[] = {10,7,};
_testGetOrder(r,2, items2179, itemsNum2179);
std::cout << "last command was number: 2179 " << std::endl;
// last command was command number 2179
const string items2180[] = {"bad product!",};
const int itemsNum2180[] = {4,};
_testGetOrder(r,1, items2180, itemsNum2180);
std::cerr << "last output should be ERROR from command2180" << std::endl;
 // last command was command number 2180
const string items2181[] = {"pro959",};
const int itemsNum2181[] = {-20,};
_testGetOrder(r,1, items2181, itemsNum2181);
std::cerr << "last output should be ERROR from command2181" << std::endl;
 // last command was command number 2181
_testAddToWaitList(r,67);
std::cout << "last command was number: 2182 " << std::endl;
// last command was command number 2182
_testAddToWaitList(r,81);
std::cout << "last command was number: 2183 " << std::endl;
// last command was command number 2183
_testPrintOpenOrders(r);
std::cout << "last command was number: 2184 " << std::endl;
// last command was command number 2184
_testPrintCheckList(r);
std::cout << "last command was number: 2185 " << std::endl;
// last command was command number 2185
const string items2186[] = {"pro379","pro745",};
const int itemsNum2186[] = {9,4,};
_testGetOrder(r,2, items2186, itemsNum2186);
std::cout << "last command was number: 2186 " << std::endl;
// last command was command number 2186
_testGetCheck(r);
std::cout << "last command was number: 2187 " << std::endl;
// last command was command number 2187
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2188" << std::endl;
 // last command was command number 2188
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2189" << std::endl;
 // last command was command number 2189
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2190" << std::endl;
 // last command was command number 2190
_testGetCheck(r);
std::cout << "last command was number: 2191 " << std::endl;
// last command was command number 2191
const string items2192[] = {"pro374","pro608","pro719",};
const int itemsNum2192[] = {4,8,3,};
_testGetOrder(r,3, items2192, itemsNum2192);
std::cout << "last command was number: 2192 " << std::endl;
// last command was command number 2192
_testAddToWaitList(r,70);
std::cout << "last command was number: 2193 " << std::endl;
// last command was command number 2193
const string items2194[] = {"pro947","pro768","pro167",};
const int itemsNum2194[] = {10,4,5,};
_testGetOrder(r,-74, items2194, itemsNum2194);
std::cerr << "last output should be ERROR from command2194" << std::endl;
 // last command was command number 2194
_testSitAtTable(r);
std::cout << "last command was number: 2195 " << std::endl;
// last command was command number 2195
const string items2196[] = {"bad product!",};
const int itemsNum2196[] = {3,};
_testGetOrder(r,-31, items2196, itemsNum2196);
std::cerr << "last output should be ERROR from command2196" << std::endl;
 // last command was command number 2196
const string items2197[] = {"bad product!",};
const int itemsNum2197[] = {-11,};
_testGetOrder(r,1, items2197, itemsNum2197);
std::cerr << "last output should be ERROR from command2197" << std::endl;
 // last command was command number 2197
const string items2198[] = {"pro351","pro855","pro872",};
const int itemsNum2198[] = {1,9,7,};
_testGetOrder(r,3, items2198, itemsNum2198);
std::cout << "last command was number: 2198 " << std::endl;
// last command was command number 2198
_testPrintTables(r);
std::cout << "last command was number: 2199 " << std::endl;
// last command was command number 2199
_testPrintCheckList(r);
std::cout << "last command was number: 2200 " << std::endl;
// last command was command number 2200
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2201" << std::endl;
 // last command was command number 2201
const string items2202[] = {"pro328","pro136","pro545","pro390",};
const int itemsNum2202[] = {-45,10,2,2,};
_testGetOrder(r,-18, items2202, itemsNum2202);
std::cerr << "last output should be ERROR from command2202" << std::endl;
 // last command was command number 2202
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2203" << std::endl;
 // last command was command number 2203
const string items2204[] = {"pro605","pro661","pro299","bad product!",};
const int itemsNum2204[] = {4,7,6,10,};
_testGetOrder(r,4, items2204, itemsNum2204);
std::cerr << "last output should be ERROR from command2204" << std::endl;
 // last command was command number 2204
_testSitAtTable(r);
std::cout << "last command was number: 2205 " << std::endl;
// last command was command number 2205
_testGetCheck(r);
std::cout << "last command was number: 2206 " << std::endl;
// last command was command number 2206
_testAddToWaitList(r,53);
std::cout << "last command was number: 2207 " << std::endl;
// last command was command number 2207
_testAddToWaitList(r,75);
std::cout << "last command was number: 2208 " << std::endl;
// last command was command number 2208
const string items2209[] = {"pro709","pro929",};
const int itemsNum2209[] = {8,7,};
_testGetOrder(r,-15, items2209, itemsNum2209);
std::cerr << "last output should be ERROR from command2209" << std::endl;
 // last command was command number 2209
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2210" << std::endl;
 // last command was command number 2210
const string items2211[] = {"pro988","pro661","bad product!",};
const int itemsNum2211[] = {1,2,4,};
_testGetOrder(r,3, items2211, itemsNum2211);
std::cerr << "last output should be ERROR from command2211" << std::endl;
 // last command was command number 2211
const string items2212[] = {"pro713","bad product!","pro303","pro457","pro768",};
const int itemsNum2212[] = {4,7,7,4,7,};
_testGetOrder(r,5, items2212, itemsNum2212);
std::cerr << "last output should be ERROR from command2212" << std::endl;
 // last command was command number 2212
const string items2213[] = {"pro248",};
const int itemsNum2213[] = {5,};
_testGetOrder(r,-28, items2213, itemsNum2213);
std::cerr << "last output should be ERROR from command2213" << std::endl;
 // last command was command number 2213
const string items2214[] = {"pro240","bad product!","pro855","pro595","pro208",};
const int itemsNum2214[] = {6,4,5,8,3,};
_testGetOrder(r,5, items2214, itemsNum2214);
std::cerr << "last output should be ERROR from command2214" << std::endl;
 // last command was command number 2214
const string items2215[] = {"bad product!","pro863","pro746","pro100",};
const int itemsNum2215[] = {5,2,3,9,};
_testGetOrder(r,4, items2215, itemsNum2215);
std::cerr << "last output should be ERROR from command2215" << std::endl;
 // last command was command number 2215
_testSitAtTable(r);
std::cout << "last command was number: 2216 " << std::endl;
// last command was command number 2216
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2217" << std::endl;
 // last command was command number 2217
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2218" << std::endl;
 // last command was command number 2218
_testPrintCheckList(r);
std::cout << "last command was number: 2219 " << std::endl;
// last command was command number 2219
_testPrintTables(r);
std::cout << "last command was number: 2220 " << std::endl;
// last command was command number 2220
_testPrintServedList(r);
std::cout << "last command was number: 2221 " << std::endl;
// last command was command number 2221
const string items2222[] = {"bad product!",};
const int itemsNum2222[] = {-75,};
_testGetOrder(r,-87, items2222, itemsNum2222);
std::cerr << "last output should be ERROR from command2222" << std::endl;
 // last command was command number 2222
_testPrintWaitList(r);
std::cout << "last command was number: 2223 " << std::endl;
// last command was command number 2223
_testPrintOpenOrders(r);
std::cout << "last command was number: 2224 " << std::endl;
// last command was command number 2224
_testGetCheck(r);
std::cout << "last command was number: 2225 " << std::endl;
// last command was command number 2225
_testAddToWaitList(r,69);
std::cout << "last command was number: 2226 " << std::endl;
// last command was command number 2226
_testAddToWaitList(r,100);
std::cout << "last command was number: 2227 " << std::endl;
// last command was command number 2227
const string items2228[] = {"pro520","pro977","bad product!","pro988",};
const int itemsNum2228[] = {2,7,2,10,};
_testGetOrder(r,4, items2228, itemsNum2228);
std::cerr << "last output should be ERROR from command2228" << std::endl;
 // last command was command number 2228
_testPrintWaitList(r);
std::cout << "last command was number: 2229 " << std::endl;
// last command was command number 2229
_testAddToWaitList(r,83);
std::cout << "last command was number: 2230 " << std::endl;
// last command was command number 2230
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2231" << std::endl;
 // last command was command number 2231
_testAddToWaitList(r,85);
std::cout << "last command was number: 2232 " << std::endl;
// last command was command number 2232
const string items2233[] = {"pro713","pro351","pro745","bad product!",};
const int itemsNum2233[] = {1,3,7,2,};
_testGetOrder(r,-88, items2233, itemsNum2233);
std::cerr << "last output should be ERROR from command2233" << std::endl;
 // last command was command number 2233
_testAddToWaitList(r,84);
std::cout << "last command was number: 2234 " << std::endl;
// last command was command number 2234
_testPrintCheckList(r);
std::cout << "last command was number: 2235 " << std::endl;
// last command was command number 2235
_testPrintCheckList(r);
std::cout << "last command was number: 2236 " << std::endl;
// last command was command number 2236
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2237" << std::endl;
 // last command was command number 2237
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2238" << std::endl;
 // last command was command number 2238
_testSitAtTable(r);
std::cout << "last command was number: 2239 " << std::endl;
// last command was command number 2239
_testPrintOpenOrders(r);
std::cout << "last command was number: 2240 " << std::endl;
// last command was command number 2240
_testSitAtTable(r);
std::cout << "last command was number: 2241 " << std::endl;
// last command was command number 2241
const string items2242[] = {"bad product!","pro760",};
const int itemsNum2242[] = {1,5,};
_testGetOrder(r,2, items2242, itemsNum2242);
std::cerr << "last output should be ERROR from command2242" << std::endl;
 // last command was command number 2242
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2243" << std::endl;
 // last command was command number 2243
_testSitAtTable(r);
std::cout << "last command was number: 2244 " << std::endl;
// last command was command number 2244
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2245" << std::endl;
 // last command was command number 2245
const string items2246[] = {"pro736","pro241","bad product!","pro987","pro959",};
const int itemsNum2246[] = {6,7,4,4,3,};
_testGetOrder(r,5, items2246, itemsNum2246);
std::cerr << "last output should be ERROR from command2246" << std::endl;
 // last command was command number 2246
const string items2247[] = {"pro374","pro262","pro981","pro768","pro208",};
const int itemsNum2247[] = {2,6,10,4,2,};
_testGetOrder(r,-69, items2247, itemsNum2247);
std::cerr << "last output should be ERROR from command2247" << std::endl;
 // last command was command number 2247
_testGetCheck(r);
std::cout << "last command was number: 2248 " << std::endl;
// last command was command number 2248
_testAddToWaitList(r,94);
std::cout << "last command was number: 2249 " << std::endl;
// last command was command number 2249
_testPrintOpenOrders(r);
std::cout << "last command was number: 2250 " << std::endl;
// last command was command number 2250
const string items2251[] = {"pro325","pro6","pro736","pro379","pro285",};
const int itemsNum2251[] = {8,1,6,-96,4,};
_testGetOrder(r,5, items2251, itemsNum2251);
std::cerr << "last output should be ERROR from command2251" << std::endl;
 // last command was command number 2251
const string items2252[] = {"pro740","pro733","pro331","bad product!",};
const int itemsNum2252[] = {5,6,2,3,};
_testGetOrder(r,4, items2252, itemsNum2252);
std::cerr << "last output should be ERROR from command2252" << std::endl;
 // last command was command number 2252
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2253" << std::endl;
 // last command was command number 2253
const string items2254[] = {"pro535","bad product!",};
const int itemsNum2254[] = {-19,4,};
_testGetOrder(r,2, items2254, itemsNum2254);
std::cerr << "last output should be ERROR from command2254" << std::endl;
 // last command was command number 2254
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2255" << std::endl;
 // last command was command number 2255
_testSitAtTable(r);
std::cout << "last command was number: 2256 " << std::endl;
// last command was command number 2256
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2257" << std::endl;
 // last command was command number 2257
const string items2258[] = {"bad product!",};
const int itemsNum2258[] = {-81,};
_testGetOrder(r,-33, items2258, itemsNum2258);
std::cerr << "last output should be ERROR from command2258" << std::endl;
 // last command was command number 2258
_testPrintOpenOrders(r);
std::cout << "last command was number: 2259 " << std::endl;
// last command was command number 2259
const string items2260[] = {"bad product!","pro709","pro826",};
const int itemsNum2260[] = {9,8,7,};
_testGetOrder(r,3, items2260, itemsNum2260);
std::cerr << "last output should be ERROR from command2260" << std::endl;
 // last command was command number 2260
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2261" << std::endl;
 // last command was command number 2261
const string items2262[] = {"pro969","bad product!","pro136","pro184","pro299",};
const int itemsNum2262[] = {6,5,4,8,4,};
_testGetOrder(r,5, items2262, itemsNum2262);
std::cerr << "last output should be ERROR from command2262" << std::endl;
 // last command was command number 2262
_testAddToWaitList(r,73);
std::cout << "last command was number: 2263 " << std::endl;
// last command was command number 2263
_testPrintCheckList(r);
std::cout << "last command was number: 2264 " << std::endl;
// last command was command number 2264
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2265" << std::endl;
 // last command was command number 2265
const string items2266[] = {"pro713","pro213","bad product!","pro330",};
const int itemsNum2266[] = {9,7,6,2,};
_testGetOrder(r,4, items2266, itemsNum2266);
std::cerr << "last output should be ERROR from command2266" << std::endl;
 // last command was command number 2266
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2267" << std::endl;
 // last command was command number 2267
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2268" << std::endl;
 // last command was command number 2268
const string items2269[] = {"bad product!","pro605",};
const int itemsNum2269[] = {9,1,};
_testGetOrder(r,2, items2269, itemsNum2269);
std::cerr << "last output should be ERROR from command2269" << std::endl;
 // last command was command number 2269
const string items2270[] = {"pro605","pro709",};
const int itemsNum2270[] = {8,10,};
_testGetOrder(r,2, items2270, itemsNum2270);
std::cout << "last command was number: 2270 " << std::endl;
// last command was command number 2270
_testPrintWaitList(r);
std::cout << "last command was number: 2271 " << std::endl;
// last command was command number 2271
_testPrintServedList(r);
std::cout << "last command was number: 2272 " << std::endl;
// last command was command number 2272
_testSitAtTable(r);
std::cout << "last command was number: 2273 " << std::endl;
// last command was command number 2273
const string items2274[] = {"pro539","pro136",};
const int itemsNum2274[] = {-45,4,};
_testGetOrder(r,2, items2274, itemsNum2274);
std::cerr << "last output should be ERROR from command2274" << std::endl;
 // last command was command number 2274
const string items2275[] = {"pro240","pro294","bad product!","pro158",};
const int itemsNum2275[] = {10,7,5,8,};
_testGetOrder(r,4, items2275, itemsNum2275);
std::cerr << "last output should be ERROR from command2275" << std::endl;
 // last command was command number 2275
_testSitAtTable(r);
std::cout << "last command was number: 2276 " << std::endl;
// last command was command number 2276
const string items2277[] = {"bad product!","pro294","pro184","pro608","pro279",};
const int itemsNum2277[] = {6,2,1,9,7,};
_testGetOrder(r,5, items2277, itemsNum2277);
std::cerr << "last output should be ERROR from command2277" << std::endl;
 // last command was command number 2277
const string items2278[] = {"pro745","pro457",};
const int itemsNum2278[] = {5,8,};
_testGetOrder(r,2, items2278, itemsNum2278);
std::cout << "last command was number: 2278 " << std::endl;
// last command was command number 2278
_testPrintWaitList(r);
std::cout << "last command was number: 2279 " << std::endl;
// last command was command number 2279
_testAddToWaitList(r,63);
std::cout << "last command was number: 2280 " << std::endl;
// last command was command number 2280
const string items2281[] = {"pro156","pro520","bad product!",};
const int itemsNum2281[] = {9,6,1,};
_testGetOrder(r,3, items2281, itemsNum2281);
std::cerr << "last output should be ERROR from command2281" << std::endl;
 // last command was command number 2281
_testAddToWaitList(r,80);
std::cout << "last command was number: 2282 " << std::endl;
// last command was command number 2282
const string items2283[] = {"pro375","pro240","pro299","pro545","pro208",};
const int itemsNum2283[] = {5,5,3,9,10,};
_testGetOrder(r,-6, items2283, itemsNum2283);
std::cerr << "last output should be ERROR from command2283" << std::endl;
 // last command was command number 2283
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2284" << std::endl;
 // last command was command number 2284
const string items2285[] = {"pro912","pro201","pro720","pro120","pro508",};
const int itemsNum2285[] = {4,-40,9,8,8,};
_testGetOrder(r,5, items2285, itemsNum2285);
std::cerr << "last output should be ERROR from command2285" << std::endl;
 // last command was command number 2285
_testPrintCheckList(r);
std::cout << "last command was number: 2286 " << std::endl;
// last command was command number 2286
const string items2287[] = {"pro381","bad product!","pro545","pro719",};
const int itemsNum2287[] = {4,6,9,7,};
_testGetOrder(r,4, items2287, itemsNum2287);
std::cerr << "last output should be ERROR from command2287" << std::endl;
 // last command was command number 2287
_testAddToWaitList(r,76);
std::cout << "last command was number: 2288 " << std::endl;
// last command was command number 2288
const string items2289[] = {"pro535","pro947","pro381","pro243",};
const int itemsNum2289[] = {8,1,4,5,};
_testGetOrder(r,4, items2289, itemsNum2289);
std::cout << "last command was number: 2289 " << std::endl;
// last command was command number 2289
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2290" << std::endl;
 // last command was command number 2290
_testPrintOpenOrders(r);
std::cout << "last command was number: 2291 " << std::endl;
// last command was command number 2291
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2292" << std::endl;
 // last command was command number 2292
_testGetCheck(r);
std::cout << "last command was number: 2293 " << std::endl;
// last command was command number 2293
_testPrintWaitList(r);
std::cout << "last command was number: 2294 " << std::endl;
// last command was command number 2294
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2295" << std::endl;
 // last command was command number 2295
_testAddToWaitList(r,50);
std::cout << "last command was number: 2296 " << std::endl;
// last command was command number 2296
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2297" << std::endl;
 // last command was command number 2297
const string items2298[] = {"pro720","pro966","pro397","pro351","pro768",};
const int itemsNum2298[] = {1,7,4,7,-68,};
_testGetOrder(r,5, items2298, itemsNum2298);
std::cerr << "last output should be ERROR from command2298" << std::endl;
 // last command was command number 2298
_testSitAtTable(r);
std::cout << "last command was number: 2299 " << std::endl;
// last command was command number 2299
_testPrintTables(r);
std::cout << "last command was number: 2300 " << std::endl;
// last command was command number 2300
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2301" << std::endl;
 // last command was command number 2301
const string items2302[] = {"bad product!","pro895",};
const int itemsNum2302[] = {8,4,};
_testGetOrder(r,2, items2302, itemsNum2302);
std::cerr << "last output should be ERROR from command2302" << std::endl;
 // last command was command number 2302
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2303" << std::endl;
 // last command was command number 2303
_testGetCheck(r);
std::cout << "last command was number: 2304 " << std::endl;
// last command was command number 2304
_testGetCheck(r);
std::cout << "last command was number: 2305 " << std::endl;
// last command was command number 2305
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2306" << std::endl;
 // last command was command number 2306
const string items2307[] = {"pro746","pro351","pro855",};
const int itemsNum2307[] = {1,6,1,};
_testGetOrder(r,-58, items2307, itemsNum2307);
std::cerr << "last output should be ERROR from command2307" << std::endl;
 // last command was command number 2307
_testGetCheck(r);
std::cout << "last command was number: 2308 " << std::endl;
// last command was command number 2308
_testPrintCheckList(r);
std::cout << "last command was number: 2309 " << std::endl;
// last command was command number 2309
_testGetCheck(r);
std::cout << "last command was number: 2310 " << std::endl;
// last command was command number 2310
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2311" << std::endl;
 // last command was command number 2311
const string items2312[] = {"pro279",};
const int itemsNum2312[] = {5,};
_testGetOrder(r,1, items2312, itemsNum2312);
std::cout << "last command was number: 2312 " << std::endl;
// last command was command number 2312
const string items2313[] = {"pro440","pro746","bad product!",};
const int itemsNum2313[] = {6,10,9,};
_testGetOrder(r,3, items2313, itemsNum2313);
std::cerr << "last output should be ERROR from command2313" << std::endl;
 // last command was command number 2313
_testPrintWaitList(r);
std::cout << "last command was number: 2314 " << std::endl;
// last command was command number 2314
_testGetCheck(r);
std::cout << "last command was number: 2315 " << std::endl;
// last command was command number 2315
_testPrintOpenOrders(r);
std::cout << "last command was number: 2316 " << std::endl;
// last command was command number 2316
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2317" << std::endl;
 // last command was command number 2317
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2318" << std::endl;
 // last command was command number 2318
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2319" << std::endl;
 // last command was command number 2319
const string items2320[] = {"bad product!",};
const int itemsNum2320[] = {4,};
_testGetOrder(r,1, items2320, itemsNum2320);
std::cerr << "last output should be ERROR from command2320" << std::endl;
 // last command was command number 2320
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2321" << std::endl;
 // last command was command number 2321
_testPrintOpenOrders(r);
std::cout << "last command was number: 2322 " << std::endl;
// last command was command number 2322
const string items2323[] = {"pro508","pro543","pro433","pro201",};
const int itemsNum2323[] = {9,10,5,3,};
_testGetOrder(r,-87, items2323, itemsNum2323);
std::cerr << "last output should be ERROR from command2323" << std::endl;
 // last command was command number 2323
_testAddToWaitList(r,81);
std::cout << "last command was number: 2324 " << std::endl;
// last command was command number 2324
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2325" << std::endl;
 // last command was command number 2325
const string items2326[] = {"pro969","pro241","pro508","pro895",};
const int itemsNum2326[] = {6,-89,7,1,};
_testGetOrder(r,-80, items2326, itemsNum2326);
std::cerr << "last output should be ERROR from command2326" << std::endl;
 // last command was command number 2326
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2327" << std::endl;
 // last command was command number 2327
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2328" << std::endl;
 // last command was command number 2328
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2329" << std::endl;
 // last command was command number 2329
const string items2330[] = {"pro912","pro253","pro440","bad product!",};
const int itemsNum2330[] = {4,5,10,4,};
_testGetOrder(r,4, items2330, itemsNum2330);
std::cerr << "last output should be ERROR from command2330" << std::endl;
 // last command was command number 2330
const string items2331[] = {"bad product!",};
const int itemsNum2331[] = {1,};
_testGetOrder(r,1, items2331, itemsNum2331);
std::cerr << "last output should be ERROR from command2331" << std::endl;
 // last command was command number 2331
_testGetCheck(r);
std::cout << "last command was number: 2332 " << std::endl;
// last command was command number 2332
_testAddToWaitList(r,68);
std::cout << "last command was number: 2333 " << std::endl;
// last command was command number 2333
_testSitAtTable(r);
std::cout << "last command was number: 2334 " << std::endl;
// last command was command number 2334
const string items2335[] = {"pro810","pro746","pro230","bad product!",};
const int itemsNum2335[] = {1,10,3,4,};
_testGetOrder(r,4, items2335, itemsNum2335);
std::cerr << "last output should be ERROR from command2335" << std::endl;
 // last command was command number 2335
const string items2336[] = {"pro240","pro534","pro167",};
const int itemsNum2336[] = {8,6,2,};
_testGetOrder(r,3, items2336, itemsNum2336);
std::cout << "last command was number: 2336 " << std::endl;
// last command was command number 2336
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2337" << std::endl;
 // last command was command number 2337
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2338" << std::endl;
 // last command was command number 2338
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2339" << std::endl;
 // last command was command number 2339
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2340" << std::endl;
 // last command was command number 2340
_testAddToWaitList(r,85);
std::cout << "last command was number: 2341 " << std::endl;
// last command was command number 2341
_testSitAtTable(r);
std::cout << "last command was number: 2342 " << std::endl;
// last command was command number 2342
_testSitAtTable(r);
std::cout << "last command was number: 2343 " << std::endl;
// last command was command number 2343
const string items2344[] = {"pro7","bad product!","pro981",};
const int itemsNum2344[] = {4,4,7,};
_testGetOrder(r,3, items2344, itemsNum2344);
std::cerr << "last output should be ERROR from command2344" << std::endl;
 // last command was command number 2344
_testSitAtTable(r);
std::cout << "last command was number: 2345 " << std::endl;
// last command was command number 2345
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2346" << std::endl;
 // last command was command number 2346
const string items2347[] = {"pro397","pro745","pro981",};
const int itemsNum2347[] = {5,10,1,};
_testGetOrder(r,3, items2347, itemsNum2347);
std::cout << "last command was number: 2347 " << std::endl;
// last command was command number 2347
const string items2348[] = {"pro947","pro402",};
const int itemsNum2348[] = {2,10,};
_testGetOrder(r,2, items2348, itemsNum2348);
std::cout << "last command was number: 2348 " << std::endl;
// last command was command number 2348
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2349" << std::endl;
 // last command was command number 2349
_testGetCheck(r);
std::cout << "last command was number: 2350 " << std::endl;
// last command was command number 2350
const string items2351[] = {"pro279","pro760","pro375","pro243",};
const int itemsNum2351[] = {2,5,10,-45,};
_testGetOrder(r,-6, items2351, itemsNum2351);
std::cerr << "last output should be ERROR from command2351" << std::endl;
 // last command was command number 2351
_testAddToWaitList(r,55);
std::cout << "last command was number: 2352 " << std::endl;
// last command was command number 2352
const string items2353[] = {"bad product!","pro243","pro608",};
const int itemsNum2353[] = {7,9,7,};
_testGetOrder(r,3, items2353, itemsNum2353);
std::cerr << "last output should be ERROR from command2353" << std::endl;
 // last command was command number 2353
_testPrintTables(r);
std::cout << "last command was number: 2354 " << std::endl;
// last command was command number 2354
_testSitAtTable(r);
std::cout << "last command was number: 2355 " << std::endl;
// last command was command number 2355
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2356" << std::endl;
 // last command was command number 2356
const string items2357[] = {"pro736","pro184",};
const int itemsNum2357[] = {1,1,};
_testGetOrder(r,-65, items2357, itemsNum2357);
std::cerr << "last output should be ERROR from command2357" << std::endl;
 // last command was command number 2357
_testAddToWaitList(r,92);
std::cout << "last command was number: 2358 " << std::endl;
// last command was command number 2358
_testAddToWaitList(r,79);
std::cout << "last command was number: 2359 " << std::endl;
// last command was command number 2359
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2360" << std::endl;
 // last command was command number 2360
const string items2361[] = {"pro241","pro148",};
const int itemsNum2361[] = {8,-90,};
_testGetOrder(r,2, items2361, itemsNum2361);
std::cerr << "last output should be ERROR from command2361" << std::endl;
 // last command was command number 2361
_testPrintWaitList(r);
std::cout << "last command was number: 2362 " << std::endl;
// last command was command number 2362
_testGetCheck(r);
std::cout << "last command was number: 2363 " << std::endl;
// last command was command number 2363
const string items2364[] = {"pro365",};
const int itemsNum2364[] = {9,};
_testGetOrder(r,1, items2364, itemsNum2364);
std::cout << "last command was number: 2364 " << std::endl;
// last command was command number 2364
_testPrintTables(r);
std::cout << "last command was number: 2365 " << std::endl;
// last command was command number 2365
const string items2366[] = {"pro757","bad product!",};
const int itemsNum2366[] = {7,7,};
_testGetOrder(r,-13, items2366, itemsNum2366);
std::cerr << "last output should be ERROR from command2366" << std::endl;
 // last command was command number 2366
const string items2367[] = {"pro872","pro966","pro855","bad product!",};
const int itemsNum2367[] = {7,4,10,7,};
_testGetOrder(r,4, items2367, itemsNum2367);
std::cerr << "last output should be ERROR from command2367" << std::endl;
 // last command was command number 2367
const string items2368[] = {"pro129","bad product!","pro757",};
const int itemsNum2368[] = {6,10,10,};
_testGetOrder(r,-9, items2368, itemsNum2368);
std::cerr << "last output should be ERROR from command2368" << std::endl;
 // last command was command number 2368
_testPrintOpenOrders(r);
std::cout << "last command was number: 2369 " << std::endl;
// last command was command number 2369
_testPrintTables(r);
std::cout << "last command was number: 2370 " << std::endl;
// last command was command number 2370
const string items2371[] = {"pro77","pro977","pro390",};
const int itemsNum2371[] = {7,3,1,};
_testGetOrder(r,-99, items2371, itemsNum2371);
std::cerr << "last output should be ERROR from command2371" << std::endl;
 // last command was command number 2371
_testSitAtTable(r);
std::cout << "last command was number: 2372 " << std::endl;
// last command was command number 2372
const string items2373[] = {"pro695","pro6",};
const int itemsNum2373[] = {4,5,};
_testGetOrder(r,2, items2373, itemsNum2373);
std::cout << "last command was number: 2373 " << std::endl;
// last command was command number 2373
_testGetCheck(r);
std::cout << "last command was number: 2374 " << std::endl;
// last command was command number 2374
const string items2375[] = {"pro821","pro154","pro138","bad product!","pro201",};
const int itemsNum2375[] = {10,4,10,7,2,};
_testGetOrder(r,5, items2375, itemsNum2375);
std::cerr << "last output should be ERROR from command2375" << std::endl;
 // last command was command number 2375
const string items2376[] = {"pro543","pro740","bad product!","pro535",};
const int itemsNum2376[] = {7,6,10,5,};
_testGetOrder(r,4, items2376, itemsNum2376);
std::cerr << "last output should be ERROR from command2376" << std::endl;
 // last command was command number 2376
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2377" << std::endl;
 // last command was command number 2377
const string items2378[] = {"pro969","pro872","pro733","pro154","pro746",};
const int itemsNum2378[] = {2,9,1,7,5,};
_testGetOrder(r,5, items2378, itemsNum2378);
std::cout << "last command was number: 2378 " << std::endl;
// last command was command number 2378
const string items2379[] = {"pro912","pro575","pro863","bad product!","pro77",};
const int itemsNum2379[] = {8,7,10,3,7,};
_testGetOrder(r,5, items2379, itemsNum2379);
std::cerr << "last output should be ERROR from command2379" << std::endl;
 // last command was command number 2379
const string items2380[] = {"bad product!","pro872","pro253",};
const int itemsNum2380[] = {10,8,6,};
_testGetOrder(r,3, items2380, itemsNum2380);
std::cerr << "last output should be ERROR from command2380" << std::endl;
 // last command was command number 2380
const string items2381[] = {"pro987","bad product!",};
const int itemsNum2381[] = {10,9,};
_testGetOrder(r,2, items2381, itemsNum2381);
std::cerr << "last output should be ERROR from command2381" << std::endl;
 // last command was command number 2381
const string items2382[] = {"pro768","pro760","pro520","pro351",};
const int itemsNum2382[] = {9,5,7,10,};
_testGetOrder(r,-50, items2382, itemsNum2382);
std::cerr << "last output should be ERROR from command2382" << std::endl;
 // last command was command number 2382
const string items2383[] = {"pro929","pro956","bad product!",};
const int itemsNum2383[] = {6,1,8,};
_testGetOrder(r,3, items2383, itemsNum2383);
std::cerr << "last output should be ERROR from command2383" << std::endl;
 // last command was command number 2383
_testSitAtTable(r);
std::cout << "last command was number: 2384 " << std::endl;
// last command was command number 2384
const string items2385[] = {"pro328","pro709","pro374","pro977",};
const int itemsNum2385[] = {10,-43,9,3,};
_testGetOrder(r,4, items2385, itemsNum2385);
std::cerr << "last output should be ERROR from command2385" << std::endl;
 // last command was command number 2385
const string items2386[] = {"pro736",};
const int itemsNum2386[] = {8,};
_testGetOrder(r,1, items2386, itemsNum2386);
std::cout << "last command was number: 2386 " << std::endl;
// last command was command number 2386
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2387" << std::endl;
 // last command was command number 2387
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2388" << std::endl;
 // last command was command number 2388
_testPrintOpenOrders(r);
std::cout << "last command was number: 2389 " << std::endl;
// last command was command number 2389
_testPrintWaitList(r);
std::cout << "last command was number: 2390 " << std::endl;
// last command was command number 2390
const string items2391[] = {"pro534","pro760",};
const int itemsNum2391[] = {5,-37,};
_testGetOrder(r,0, items2391, itemsNum2391);
std::cerr << "last output should be ERROR from command2391" << std::endl;
 // last command was command number 2391
_testPrintOpenOrders(r);
std::cout << "last command was number: 2392 " << std::endl;
// last command was command number 2392
const string items2393[] = {"bad product!",};
const int itemsNum2393[] = {9,};
_testGetOrder(r,-92, items2393, itemsNum2393);
std::cerr << "last output should be ERROR from command2393" << std::endl;
 // last command was command number 2393
_testAddToWaitList(r,76);
std::cout << "last command was number: 2394 " << std::endl;
// last command was command number 2394
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2395" << std::endl;
 // last command was command number 2395
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2396" << std::endl;
 // last command was command number 2396
_testGetCheck(r);
std::cout << "last command was number: 2397 " << std::endl;
// last command was command number 2397
const string items2398[] = {"pro325","pro240",};
const int itemsNum2398[] = {1,5,};
_testGetOrder(r,2, items2398, itemsNum2398);
std::cout << "last command was number: 2398 " << std::endl;
// last command was command number 2398
_testPrintServedList(r);
std::cout << "last command was number: 2399 " << std::endl;
// last command was command number 2399
_testPrintWaitList(r);
std::cout << "last command was number: 2400 " << std::endl;
// last command was command number 2400
_testSitAtTable(r);
std::cout << "last command was number: 2401 " << std::endl;
// last command was command number 2401
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2402" << std::endl;
 // last command was command number 2402
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2403" << std::endl;
 // last command was command number 2403
_testPrintCheckList(r);
std::cout << "last command was number: 2404 " << std::endl;
// last command was command number 2404
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2405" << std::endl;
 // last command was command number 2405
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2406" << std::endl;
 // last command was command number 2406
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2407" << std::endl;
 // last command was command number 2407
_testSitAtTable(r);
std::cout << "last command was number: 2408 " << std::endl;
// last command was command number 2408
_testPrintOpenOrders(r);
std::cout << "last command was number: 2409 " << std::endl;
// last command was command number 2409
const string items2410[] = {"pro129","pro440",};
const int itemsNum2410[] = {-99,7,};
_testGetOrder(r,2, items2410, itemsNum2410);
std::cerr << "last output should be ERROR from command2410" << std::endl;
 // last command was command number 2410
_testPrintProfits(r);
std::cout << "last command was number: 2411 " << std::endl;
// last command was command number 2411
_testPrintWaitList(r);
std::cout << "last command was number: 2412 " << std::endl;
// last command was command number 2412
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2413" << std::endl;
 // last command was command number 2413
const string items2414[] = {"pro502","pro440","pro535","pro325","pro77",};
const int itemsNum2414[] = {-48,8,4,3,4,};
_testGetOrder(r,-22, items2414, itemsNum2414);
std::cerr << "last output should be ERROR from command2414" << std::endl;
 // last command was command number 2414
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2415" << std::endl;
 // last command was command number 2415
const string items2416[] = {"bad product!",};
const int itemsNum2416[] = {10,};
_testGetOrder(r,1, items2416, itemsNum2416);
std::cerr << "last output should be ERROR from command2416" << std::endl;
 // last command was command number 2416
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2417" << std::endl;
 // last command was command number 2417
_testGetCheck(r);
std::cout << "last command was number: 2418 " << std::endl;
// last command was command number 2418
_testGetCheck(r);
std::cout << "last command was number: 2419 " << std::endl;
// last command was command number 2419
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2420" << std::endl;
 // last command was command number 2420
_testPrintProfits(r);
std::cout << "last command was number: 2421 " << std::endl;
// last command was command number 2421
_testGetCheck(r);
std::cout << "last command was number: 2422 " << std::endl;
// last command was command number 2422
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2423" << std::endl;
 // last command was command number 2423
_testGetCheck(r);
std::cout << "last command was number: 2424 " << std::endl;
// last command was command number 2424
_testAddToWaitList(r,67);
std::cout << "last command was number: 2425 " << std::endl;
// last command was command number 2425
const string items2426[] = {"pro100","pro575","bad product!","pro720","pro365",};
const int itemsNum2426[] = {3,3,2,4,10,};
_testGetOrder(r,5, items2426, itemsNum2426);
std::cerr << "last output should be ERROR from command2426" << std::endl;
 // last command was command number 2426
_testAddToWaitList(r,98);
std::cout << "last command was number: 2427 " << std::endl;
// last command was command number 2427
_testSitAtTable(r);
std::cout << "last command was number: 2428 " << std::endl;
// last command was command number 2428
_testSitAtTable(r);
std::cout << "last command was number: 2429 " << std::endl;
// last command was command number 2429
const string items2430[] = {"pro661","pro981","pro648","pro575","pro757",};
const int itemsNum2430[] = {6,8,2,9,6,};
_testGetOrder(r,5, items2430, itemsNum2430);
std::cout << "last command was number: 2430 " << std::endl;
// last command was command number 2430
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2431" << std::endl;
 // last command was command number 2431
_testPrintOpenOrders(r);
std::cout << "last command was number: 2432 " << std::endl;
// last command was command number 2432
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2433" << std::endl;
 // last command was command number 2433
_testPrintWaitList(r);
std::cout << "last command was number: 2434 " << std::endl;
// last command was command number 2434
const string items2435[] = {"pro608","pro136","pro303",};
const int itemsNum2435[] = {5,6,6,};
_testGetOrder(r,3, items2435, itemsNum2435);
std::cout << "last command was number: 2435 " << std::endl;
// last command was command number 2435
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2436" << std::endl;
 // last command was command number 2436
const string items2437[] = {"pro746","pro184","pro966","pro872","bad product!",};
const int itemsNum2437[] = {2,3,7,4,7,};
_testGetOrder(r,5, items2437, itemsNum2437);
std::cerr << "last output should be ERROR from command2437" << std::endl;
 // last command was command number 2437
_testSitAtTable(r);
std::cout << "last command was number: 2438 " << std::endl;
// last command was command number 2438
const string items2439[] = {"pro156","pro255",};
const int itemsNum2439[] = {4,3,};
_testGetOrder(r,2, items2439, itemsNum2439);
std::cout << "last command was number: 2439 " << std::endl;
// last command was command number 2439
const string items2440[] = {"pro129","pro661","pro977",};
const int itemsNum2440[] = {4,10,3,};
_testGetOrder(r,3, items2440, itemsNum2440);
std::cout << "last command was number: 2440 " << std::endl;
// last command was command number 2440
const string items2441[] = {"pro299","pro331",};
const int itemsNum2441[] = {2,5,};
_testGetOrder(r,2, items2441, itemsNum2441);
std::cout << "last command was number: 2441 " << std::endl;
// last command was command number 2441
const string items2442[] = {"bad product!","pro575",};
const int itemsNum2442[] = {8,9,};
_testGetOrder(r,2, items2442, itemsNum2442);
std::cerr << "last output should be ERROR from command2442" << std::endl;
 // last command was command number 2442
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2443" << std::endl;
 // last command was command number 2443
const string items2444[] = {"pro100","pro535","pro608","pro929",};
const int itemsNum2444[] = {2,3,9,1,};
_testGetOrder(r,-68, items2444, itemsNum2444);
std::cerr << "last output should be ERROR from command2444" << std::endl;
 // last command was command number 2444
const string items2445[] = {"pro695","pro241","pro969",};
const int itemsNum2445[] = {2,4,1,};
_testGetOrder(r,3, items2445, itemsNum2445);
std::cout << "last command was number: 2445 " << std::endl;
// last command was command number 2445
const string items2446[] = {"pro545","bad product!","pro987",};
const int itemsNum2446[] = {8,8,5,};
_testGetOrder(r,-49, items2446, itemsNum2446);
std::cerr << "last output should be ERROR from command2446" << std::endl;
 // last command was command number 2446
const string items2447[] = {"pro768","pro966","pro821","bad product!",};
const int itemsNum2447[] = {4,6,7,10,};
_testGetOrder(r,4, items2447, itemsNum2447);
std::cerr << "last output should be ERROR from command2447" << std::endl;
 // last command was command number 2447
const string items2448[] = {"pro156","pro713",};
const int itemsNum2448[] = {-40,3,};
_testGetOrder(r,2, items2448, itemsNum2448);
std::cerr << "last output should be ERROR from command2448" << std::endl;
 // last command was command number 2448
_testGetCheck(r);
std::cout << "last command was number: 2449 " << std::endl;
// last command was command number 2449
_testPrintProfits(r);
std::cout << "last command was number: 2450 " << std::endl;
// last command was command number 2450
_testAddToWaitList(r,90);
std::cout << "last command was number: 2451 " << std::endl;
// last command was command number 2451
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2452" << std::endl;
 // last command was command number 2452
const string items2453[] = {"pro136","pro947","pro6",};
const int itemsNum2453[] = {9,5,4,};
_testGetOrder(r,3, items2453, itemsNum2453);
std::cout << "last command was number: 2453 " << std::endl;
// last command was command number 2453
_testGetCheck(r);
std::cout << "last command was number: 2454 " << std::endl;
// last command was command number 2454
const string items2455[] = {"bad product!",};
const int itemsNum2455[] = {7,};
_testGetOrder(r,1, items2455, itemsNum2455);
std::cerr << "last output should be ERROR from command2455" << std::endl;
 // last command was command number 2455
const string items2456[] = {"pro381","pro390","pro703","pro545","pro255",};
const int itemsNum2456[] = {10,8,9,2,1,};
_testGetOrder(r,-10, items2456, itemsNum2456);
std::cerr << "last output should be ERROR from command2456" << std::endl;
 // last command was command number 2456
const string items2457[] = {"pro695","pro987","pro757","bad product!",};
const int itemsNum2457[] = {3,6,3,2,};
_testGetOrder(r,-25, items2457, itemsNum2457);
std::cerr << "last output should be ERROR from command2457" << std::endl;
 // last command was command number 2457
const string items2458[] = {"bad product!","pro709","pro746",};
const int itemsNum2458[] = {4,3,9,};
_testGetOrder(r,-2, items2458, itemsNum2458);
std::cerr << "last output should be ERROR from command2458" << std::endl;
 // last command was command number 2458
const string items2459[] = {"pro745","bad product!",};
const int itemsNum2459[] = {5,4,};
_testGetOrder(r,2, items2459, itemsNum2459);
std::cerr << "last output should be ERROR from command2459" << std::endl;
 // last command was command number 2459
const string items2460[] = {"bad product!",};
const int itemsNum2460[] = {4,};
_testGetOrder(r,-61, items2460, itemsNum2460);
std::cerr << "last output should be ERROR from command2460" << std::endl;
 // last command was command number 2460
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2461" << std::endl;
 // last command was command number 2461
const string items2462[] = {"pro575","pro365","pro534","pro733","bad product!",};
const int itemsNum2462[] = {10,9,1,6,8,};
_testGetOrder(r,5, items2462, itemsNum2462);
std::cerr << "last output should be ERROR from command2462" << std::endl;
 // last command was command number 2462
_testGetCheck(r);
std::cout << "last command was number: 2463 " << std::endl;
// last command was command number 2463
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2464" << std::endl;
 // last command was command number 2464
_testGetCheck(r);
std::cout << "last command was number: 2465 " << std::endl;
// last command was command number 2465
const string items2466[] = {"pro719","bad product!",};
const int itemsNum2466[] = {7,6,};
_testGetOrder(r,2, items2466, itemsNum2466);
std::cerr << "last output should be ERROR from command2466" << std::endl;
 // last command was command number 2466
_testPrintServedList(r);
std::cout << "last command was number: 2467 " << std::endl;
// last command was command number 2467
const string items2468[] = {"pro534","pro158",};
const int itemsNum2468[] = {6,7,};
_testGetOrder(r,-34, items2468, itemsNum2468);
std::cerr << "last output should be ERROR from command2468" << std::endl;
 // last command was command number 2468
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2469" << std::endl;
 // last command was command number 2469
_testPrintTables(r);
std::cout << "last command was number: 2470 " << std::endl;
// last command was command number 2470
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2471" << std::endl;
 // last command was command number 2471
const string items2472[] = {"pro855",};
const int itemsNum2472[] = {2,};
_testGetOrder(r,-52, items2472, itemsNum2472);
std::cerr << "last output should be ERROR from command2472" << std::endl;
 // last command was command number 2472
_testAddToWaitList(r,98);
std::cout << "last command was number: 2473 " << std::endl;
// last command was command number 2473
_testPrintOpenOrders(r);
std::cout << "last command was number: 2474 " << std::endl;
// last command was command number 2474
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2475" << std::endl;
 // last command was command number 2475
_testGetCheck(r);
std::cout << "last command was number: 2476 " << std::endl;
// last command was command number 2476
_testPrintTables(r);
std::cout << "last command was number: 2477 " << std::endl;
// last command was command number 2477
_testGetCheck(r);
std::cout << "last command was number: 2478 " << std::endl;
// last command was command number 2478
const string items2479[] = {"pro6","bad product!",};
const int itemsNum2479[] = {6,8,};
_testGetOrder(r,2, items2479, itemsNum2479);
std::cerr << "last output should be ERROR from command2479" << std::endl;
 // last command was command number 2479
const string items2480[] = {"pro535","pro279","pro534","pro713","bad product!",};
const int itemsNum2480[] = {8,7,7,6,-8,};
_testGetOrder(r,5, items2480, itemsNum2480);
std::cerr << "last output should be ERROR from command2480" << std::endl;
 // last command was command number 2480
const string items2481[] = {"pro213","pro184","pro397","pro575",};
const int itemsNum2481[] = {5,10,7,9,};
_testGetOrder(r,4, items2481, itemsNum2481);
std::cout << "last command was number: 2481 " << std::endl;
// last command was command number 2481
_testPrintProfits(r);
std::cout << "last command was number: 2482 " << std::endl;
// last command was command number 2482
const string items2483[] = {"bad product!","pro821",};
const int itemsNum2483[] = {2,3,};
_testGetOrder(r,2, items2483, itemsNum2483);
std::cerr << "last output should be ERROR from command2483" << std::endl;
 // last command was command number 2483
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2484" << std::endl;
 // last command was command number 2484
_testGetCheck(r);
std::cout << "last command was number: 2485 " << std::endl;
// last command was command number 2485
const string items2486[] = {"pro213","pro325",};
const int itemsNum2486[] = {7,-8,};
_testGetOrder(r,2, items2486, itemsNum2486);
std::cerr << "last output should be ERROR from command2486" << std::endl;
 // last command was command number 2486
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2487" << std::endl;
 // last command was command number 2487
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2488" << std::endl;
 // last command was command number 2488
_testPrintProfits(r);
std::cout << "last command was number: 2489 " << std::endl;
// last command was command number 2489
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2490" << std::endl;
 // last command was command number 2490
const string items2491[] = {"bad product!",};
const int itemsNum2491[] = {2,};
_testGetOrder(r,1, items2491, itemsNum2491);
std::cerr << "last output should be ERROR from command2491" << std::endl;
 // last command was command number 2491
const string items2492[] = {"pro154","pro543",};
const int itemsNum2492[] = {-83,9,};
_testGetOrder(r,2, items2492, itemsNum2492);
std::cerr << "last output should be ERROR from command2492" << std::endl;
 // last command was command number 2492
_testAddToWaitList(r,87);
std::cout << "last command was number: 2493 " << std::endl;
// last command was command number 2493
const string items2494[] = {"pro959","pro543",};
const int itemsNum2494[] = {3,-15,};
_testGetOrder(r,-65, items2494, itemsNum2494);
std::cerr << "last output should be ERROR from command2494" << std::endl;
 // last command was command number 2494
_testPrintProfits(r);
std::cout << "last command was number: 2495 " << std::endl;
// last command was command number 2495
_testPrintServedList(r);
std::cout << "last command was number: 2496 " << std::endl;
// last command was command number 2496
const string items2497[] = {"pro285","pro702","pro719","pro379","pro872",};
const int itemsNum2497[] = {2,7,6,6,-54,};
_testGetOrder(r,-69, items2497, itemsNum2497);
std::cerr << "last output should be ERROR from command2497" << std::endl;
 // last command was command number 2497
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2498" << std::endl;
 // last command was command number 2498
const string items2499[] = {"bad product!","pro137","pro757",};
const int itemsNum2499[] = {6,7,8,};
_testGetOrder(r,3, items2499, itemsNum2499);
std::cerr << "last output should be ERROR from command2499" << std::endl;
 // last command was command number 2499
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2500" << std::endl;
 // last command was command number 2500
_testGetCheck(r);
std::cout << "last command was number: 2501 " << std::endl;
// last command was command number 2501
const string items2502[] = {"pro299","pro100",};
const int itemsNum2502[] = {8,6,};
_testGetOrder(r,-64, items2502, itemsNum2502);
std::cerr << "last output should be ERROR from command2502" << std::endl;
 // last command was command number 2502
const string items2503[] = {"pro184","pro959","pro719","pro248",};
const int itemsNum2503[] = {4,8,6,1,};
_testGetOrder(r,-65, items2503, itemsNum2503);
std::cerr << "last output should be ERROR from command2503" << std::endl;
 // last command was command number 2503
_testGetCheck(r);
std::cout << "last command was number: 2504 " << std::endl;
// last command was command number 2504
const string items2505[] = {"pro457","pro508",};
const int itemsNum2505[] = {1,6,};
_testGetOrder(r,-16, items2505, itemsNum2505);
std::cerr << "last output should be ERROR from command2505" << std::endl;
 // last command was command number 2505
_testPrintServedList(r);
std::cout << "last command was number: 2506 " << std::endl;
// last command was command number 2506
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2507" << std::endl;
 // last command was command number 2507
_testSitAtTable(r);
std::cout << "last command was number: 2508 " << std::endl;
// last command was command number 2508
const string items2509[] = {"pro713","pro702","bad product!",};
const int itemsNum2509[] = {6,8,6,};
_testGetOrder(r,3, items2509, itemsNum2509);
std::cerr << "last output should be ERROR from command2509" << std::endl;
 // last command was command number 2509
_testSitAtTable(r);
std::cout << "last command was number: 2510 " << std::endl;
// last command was command number 2510
_testPrintTables(r);
std::cout << "last command was number: 2511 " << std::endl;
// last command was command number 2511
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2512" << std::endl;
 // last command was command number 2512
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2513" << std::endl;
 // last command was command number 2513
_testPrintCheckList(r);
std::cout << "last command was number: 2514 " << std::endl;
// last command was command number 2514
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2515" << std::endl;
 // last command was command number 2515
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2516" << std::endl;
 // last command was command number 2516
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2517" << std::endl;
 // last command was command number 2517
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2518" << std::endl;
 // last command was command number 2518
_testPrintCheckList(r);
std::cout << "last command was number: 2519 " << std::endl;
// last command was command number 2519
_testPrintTables(r);
std::cout << "last command was number: 2520 " << std::endl;
// last command was command number 2520
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2521" << std::endl;
 // last command was command number 2521
_testAddToWaitList(r,71);
std::cout << "last command was number: 2522 " << std::endl;
// last command was command number 2522
const string items2523[] = {"pro255",};
const int itemsNum2523[] = {-2,};
_testGetOrder(r,-61, items2523, itemsNum2523);
std::cerr << "last output should be ERROR from command2523" << std::endl;
 // last command was command number 2523
const string items2524[] = {"pro351","bad product!",};
const int itemsNum2524[] = {8,2,};
_testGetOrder(r,2, items2524, itemsNum2524);
std::cerr << "last output should be ERROR from command2524" << std::endl;
 // last command was command number 2524
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2525" << std::endl;
 // last command was command number 2525
_testAddToWaitList(r,50);
std::cout << "last command was number: 2526 " << std::endl;
// last command was command number 2526
_testAddToWaitList(r,86);
std::cout << "last command was number: 2527 " << std::endl;
// last command was command number 2527
const string items2528[] = {"pro184","pro740","pro709","pro100","pro158",};
const int itemsNum2528[] = {3,1,2,7,2,};
_testGetOrder(r,5, items2528, itemsNum2528);
std::cout << "last command was number: 2528 " << std::endl;
// last command was command number 2528
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2529" << std::endl;
 // last command was command number 2529
_testSitAtTable(r);
std::cout << "last command was number: 2530 " << std::endl;
// last command was command number 2530
_testAddToWaitList(r,70);
std::cout << "last command was number: 2531 " << std::endl;
// last command was command number 2531
_testAddToWaitList(r,84);
std::cout << "last command was number: 2532 " << std::endl;
// last command was command number 2532
_testPrintProfits(r);
std::cout << "last command was number: 2533 " << std::endl;
// last command was command number 2533
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2534" << std::endl;
 // last command was command number 2534
_testPrintServedList(r);
std::cout << "last command was number: 2535 " << std::endl;
// last command was command number 2535
_testPrintWaitList(r);
std::cout << "last command was number: 2536 " << std::endl;
// last command was command number 2536
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2537" << std::endl;
 // last command was command number 2537
_testSitAtTable(r);
std::cout << "last command was number: 2538 " << std::endl;
// last command was command number 2538
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2539" << std::endl;
 // last command was command number 2539
_testSitAtTable(r);
std::cout << "last command was number: 2540 " << std::endl;
// last command was command number 2540
const string items2541[] = {"pro502","bad product!","pro508","pro255","pro977",};
const int itemsNum2541[] = {3,6,7,6,4,};
_testGetOrder(r,5, items2541, itemsNum2541);
std::cerr << "last output should be ERROR from command2541" << std::endl;
 // last command was command number 2541
const string items2542[] = {"pro148","pro208","pro595","pro230",};
const int itemsNum2542[] = {1,4,1,9,};
_testGetOrder(r,-54, items2542, itemsNum2542);
std::cerr << "last output should be ERROR from command2542" << std::endl;
 // last command was command number 2542
_testSitAtTable(r);
std::cout << "last command was number: 2543 " << std::endl;
// last command was command number 2543
_testSitAtTable(r);
std::cout << "last command was number: 2544 " << std::endl;
// last command was command number 2544
const string items2545[] = {"pro956","bad product!",};
const int itemsNum2545[] = {10,4,};
_testGetOrder(r,2, items2545, itemsNum2545);
std::cerr << "last output should be ERROR from command2545" << std::endl;
 // last command was command number 2545
_testAddToWaitList(r,91);
std::cout << "last command was number: 2546 " << std::endl;
// last command was command number 2546
const string items2547[] = {"pro502",};
const int itemsNum2547[] = {7,};
_testGetOrder(r,1, items2547, itemsNum2547);
std::cout << "last command was number: 2547 " << std::endl;
// last command was command number 2547
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2548" << std::endl;
 // last command was command number 2548
const string items2549[] = {"pro433",};
const int itemsNum2549[] = {-29,};
_testGetOrder(r,-50, items2549, itemsNum2549);
std::cerr << "last output should be ERROR from command2549" << std::endl;
 // last command was command number 2549
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2550" << std::endl;
 // last command was command number 2550
_testGetCheck(r);
std::cout << "last command was number: 2551 " << std::endl;
// last command was command number 2551
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2552" << std::endl;
 // last command was command number 2552
const string items2553[] = {"pro912","pro539","pro956","bad product!","pro248",};
const int itemsNum2553[] = {6,6,2,8,7,};
_testGetOrder(r,5, items2553, itemsNum2553);
std::cerr << "last output should be ERROR from command2553" << std::endl;
 // last command was command number 2553
_testPrintServedList(r);
std::cout << "last command was number: 2554 " << std::endl;
// last command was command number 2554
const string items2555[] = {"pro167","pro966","pro379","bad product!",};
const int itemsNum2555[] = {6,1,2,5,};
_testGetOrder(r,4, items2555, itemsNum2555);
std::cerr << "last output should be ERROR from command2555" << std::endl;
 // last command was command number 2555
_testAddToWaitList(r,100);
std::cout << "last command was number: 2556 " << std::endl;
// last command was command number 2556
const string items2557[] = {"pro895","pro768","pro390","pro959","pro733",};
const int itemsNum2557[] = {7,9,6,2,6,};
_testGetOrder(r,5, items2557, itemsNum2557);
std::cout << "last command was number: 2557 " << std::endl;
// last command was command number 2557
_testGetCheck(r);
std::cout << "last command was number: 2558 " << std::endl;
// last command was command number 2558
_testAddToWaitList(r,70);
std::cout << "last command was number: 2559 " << std::endl;
// last command was command number 2559
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2560" << std::endl;
 // last command was command number 2560
const string items2561[] = {"pro912","pro502",};
const int itemsNum2561[] = {6,-34,};
_testGetOrder(r,2, items2561, itemsNum2561);
std::cerr << "last output should be ERROR from command2561" << std::endl;
 // last command was command number 2561
_testPrintOpenOrders(r);
std::cout << "last command was number: 2562 " << std::endl;
// last command was command number 2562
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2563" << std::endl;
 // last command was command number 2563
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2564" << std::endl;
 // last command was command number 2564
const string items2565[] = {"bad product!",};
const int itemsNum2565[] = {10,};
_testGetOrder(r,1, items2565, itemsNum2565);
std::cerr << "last output should be ERROR from command2565" << std::endl;
 // last command was command number 2565
const string items2566[] = {"pro402","pro733",};
const int itemsNum2566[] = {9,-68,};
_testGetOrder(r,2, items2566, itemsNum2566);
std::cerr << "last output should be ERROR from command2566" << std::endl;
 // last command was command number 2566
_testGetCheck(r);
std::cout << "last command was number: 2567 " << std::endl;
// last command was command number 2567
_testAddToWaitList(r,88);
std::cout << "last command was number: 2568 " << std::endl;
// last command was command number 2568
_testAddToWaitList(r,85);
std::cout << "last command was number: 2569 " << std::endl;
// last command was command number 2569
_testSitAtTable(r);
std::cout << "last command was number: 2570 " << std::endl;
// last command was command number 2570
_testPrintTables(r);
std::cout << "last command was number: 2571 " << std::endl;
// last command was command number 2571
const string items2572[] = {"bad product!",};
const int itemsNum2572[] = {5,};
_testGetOrder(r,1, items2572, itemsNum2572);
std::cerr << "last output should be ERROR from command2572" << std::endl;
 // last command was command number 2572
const string items2573[] = {"pro374","pro241","pro745","pro240",};
const int itemsNum2573[] = {3,3,6,3,};
_testGetOrder(r,-80, items2573, itemsNum2573);
std::cerr << "last output should be ERROR from command2573" << std::endl;
 // last command was command number 2573
const string items2574[] = {"pro129","pro863","bad product!","pro294","pro351",};
const int itemsNum2574[] = {3,7,7,7,3,};
_testGetOrder(r,-22, items2574, itemsNum2574);
std::cerr << "last output should be ERROR from command2574" << std::endl;
 // last command was command number 2574
const string items2575[] = {"pro608","pro539","bad product!",};
const int itemsNum2575[] = {9,1,-40,};
_testGetOrder(r,-90, items2575, itemsNum2575);
std::cerr << "last output should be ERROR from command2575" << std::endl;
 // last command was command number 2575
const string items2576[] = {"pro375","pro987","pro328","pro241","pro736",};
const int itemsNum2576[] = {9,7,7,7,6,};
_testGetOrder(r,5, items2576, itemsNum2576);
std::cout << "last command was number: 2576 " << std::endl;
// last command was command number 2576
_testSitAtTable(r);
std::cout << "last command was number: 2577 " << std::endl;
// last command was command number 2577
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2578" << std::endl;
 // last command was command number 2578
const string items2579[] = {"pro702","pro508","pro240","pro243","pro821",};
const int itemsNum2579[] = {1,4,1,1,3,};
_testGetOrder(r,5, items2579, itemsNum2579);
std::cout << "last command was number: 2579 " << std::endl;
// last command was command number 2579
_testPrintProfits(r);
std::cout << "last command was number: 2580 " << std::endl;
// last command was command number 2580
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2581" << std::endl;
 // last command was command number 2581
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2582" << std::endl;
 // last command was command number 2582
const string items2583[] = {"pro757",};
const int itemsNum2583[] = {9,};
_testGetOrder(r,1, items2583, itemsNum2583);
std::cout << "last command was number: 2583 " << std::endl;
// last command was command number 2583
_testPrintWaitList(r);
std::cout << "last command was number: 2584 " << std::endl;
// last command was command number 2584
_testPrintWaitList(r);
std::cout << "last command was number: 2585 " << std::endl;
// last command was command number 2585
_testPrintTables(r);
std::cout << "last command was number: 2586 " << std::endl;
// last command was command number 2586
const string items2587[] = {"pro810","pro335","pro243","bad product!","pro959",};
const int itemsNum2587[] = {8,5,7,-80,10,};
_testGetOrder(r,-48, items2587, itemsNum2587);
std::cerr << "last output should be ERROR from command2587" << std::endl;
 // last command was command number 2587
const string items2588[] = {"bad product!","pro543","pro703",};
const int itemsNum2588[] = {5,2,2,};
_testGetOrder(r,3, items2588, itemsNum2588);
std::cerr << "last output should be ERROR from command2588" << std::endl;
 // last command was command number 2588
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2589" << std::endl;
 // last command was command number 2589
const string items2590[] = {"bad product!","pro745","pro365","pro895","pro592",};
const int itemsNum2590[] = {8,1,7,8,1,};
_testGetOrder(r,5, items2590, itemsNum2590);
std::cerr << "last output should be ERROR from command2590" << std::endl;
 // last command was command number 2590
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2591" << std::endl;
 // last command was command number 2591
_testAddToWaitList(r,82);
std::cout << "last command was number: 2592 " << std::endl;
// last command was command number 2592
_testPrintProfits(r);
std::cout << "last command was number: 2593 " << std::endl;
// last command was command number 2593
_testGetCheck(r);
std::cout << "last command was number: 2594 " << std::endl;
// last command was command number 2594
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2595" << std::endl;
 // last command was command number 2595
const string items2596[] = {"pro351","pro545","bad product!",};
const int itemsNum2596[] = {-97,9,6,};
_testGetOrder(r,3, items2596, itemsNum2596);
std::cerr << "last output should be ERROR from command2596" << std::endl;
 // last command was command number 2596
_testPrintTables(r);
std::cout << "last command was number: 2597 " << std::endl;
// last command was command number 2597
const string items2598[] = {"pro379",};
const int itemsNum2598[] = {-60,};
_testGetOrder(r,1, items2598, itemsNum2598);
std::cerr << "last output should be ERROR from command2598" << std::endl;
 // last command was command number 2598
_testGetCheck(r);
std::cout << "last command was number: 2599 " << std::endl;
// last command was command number 2599
_testAddToWaitList(r,51);
std::cout << "last command was number: 2600 " << std::endl;
// last command was command number 2600
const string items2601[] = {"pro608",};
const int itemsNum2601[] = {1,};
_testGetOrder(r,-48, items2601, itemsNum2601);
std::cerr << "last output should be ERROR from command2601" << std::endl;
 // last command was command number 2601
_testPrintProfits(r);
std::cout << "last command was number: 2602 " << std::endl;
// last command was command number 2602
const string items2603[] = {"bad product!",};
const int itemsNum2603[] = {10,};
_testGetOrder(r,1, items2603, itemsNum2603);
std::cerr << "last output should be ERROR from command2603" << std::endl;
 // last command was command number 2603
_testGetCheck(r);
std::cout << "last command was number: 2604 " << std::endl;
// last command was command number 2604
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2605" << std::endl;
 // last command was command number 2605
const string items2606[] = {"pro285","pro702","pro417","pro330",};
const int itemsNum2606[] = {8,9,7,4,};
_testGetOrder(r,-56, items2606, itemsNum2606);
std::cerr << "last output should be ERROR from command2606" << std::endl;
 // last command was command number 2606
const string items2607[] = {"bad product!","pro241","pro981","pro137","pro929",};
const int itemsNum2607[] = {9,2,1,9,7,};
_testGetOrder(r,5, items2607, itemsNum2607);
std::cerr << "last output should be ERROR from command2607" << std::endl;
 // last command was command number 2607
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2608" << std::endl;
 // last command was command number 2608
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2609" << std::endl;
 // last command was command number 2609
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2610" << std::endl;
 // last command was command number 2610
const string items2611[] = {"pro201","pro695","pro184","pro156","pro129",};
const int itemsNum2611[] = {2,9,5,2,-55,};
_testGetOrder(r,5, items2611, itemsNum2611);
std::cerr << "last output should be ERROR from command2611" << std::endl;
 // last command was command number 2611
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2612" << std::endl;
 // last command was command number 2612
_testSitAtTable(r);
std::cout << "last command was number: 2613 " << std::endl;
// last command was command number 2613
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2614" << std::endl;
 // last command was command number 2614
_testPrintProfits(r);
std::cout << "last command was number: 2615 " << std::endl;
// last command was command number 2615
const string items2616[] = {"pro375","bad product!",};
const int itemsNum2616[] = {4,6,};
_testGetOrder(r,2, items2616, itemsNum2616);
std::cerr << "last output should be ERROR from command2616" << std::endl;
 // last command was command number 2616
_testGetCheck(r);
std::cout << "last command was number: 2617 " << std::endl;
// last command was command number 2617
const string items2618[] = {"pro240","pro417","pro719",};
const int itemsNum2618[] = {7,6,4,};
_testGetOrder(r,3, items2618, itemsNum2618);
std::cout << "last command was number: 2618 " << std::endl;
// last command was command number 2618
const string items2619[] = {"pro863","pro417","pro328","pro303",};
const int itemsNum2619[] = {3,5,1,5,};
_testGetOrder(r,4, items2619, itemsNum2619);
std::cout << "last command was number: 2619 " << std::endl;
// last command was command number 2619
const string items2620[] = {"pro863","pro299","pro810",};
const int itemsNum2620[] = {1,10,3,};
_testGetOrder(r,-38, items2620, itemsNum2620);
std::cerr << "last output should be ERROR from command2620" << std::endl;
 // last command was command number 2620
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2621" << std::endl;
 // last command was command number 2621
const string items2622[] = {"bad product!","pro77",};
const int itemsNum2622[] = {10,5,};
_testGetOrder(r,2, items2622, itemsNum2622);
std::cerr << "last output should be ERROR from command2622" << std::endl;
 // last command was command number 2622
_testAddToWaitList(r,96);
std::cout << "last command was number: 2623 " << std::endl;
// last command was command number 2623
const string items2624[] = {"pro77","pro760",};
const int itemsNum2624[] = {8,-52,};
_testGetOrder(r,2, items2624, itemsNum2624);
std::cerr << "last output should be ERROR from command2624" << std::endl;
 // last command was command number 2624
_testGetCheck(r);
std::cout << "last command was number: 2625 " << std::endl;
// last command was command number 2625
_testAddToWaitList(r,90);
std::cout << "last command was number: 2626 " << std::endl;
// last command was command number 2626
_testGetCheck(r);
std::cout << "last command was number: 2627 " << std::endl;
// last command was command number 2627
const string items2628[] = {"pro374","pro863","pro502","pro661",};
const int itemsNum2628[] = {9,2,-70,3,};
_testGetOrder(r,4, items2628, itemsNum2628);
std::cerr << "last output should be ERROR from command2628" << std::endl;
 // last command was command number 2628
const string items2629[] = {"pro966","pro977",};
const int itemsNum2629[] = {5,7,};
_testGetOrder(r,2, items2629, itemsNum2629);
std::cout << "last command was number: 2629 " << std::endl;
// last command was command number 2629
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2630" << std::endl;
 // last command was command number 2630
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2631" << std::endl;
 // last command was command number 2631
_testAddToWaitList(r,79);
std::cout << "last command was number: 2632 " << std::endl;
// last command was command number 2632
const string items2633[] = {"pro100","bad product!",};
const int itemsNum2633[] = {2,7,};
_testGetOrder(r,-96, items2633, itemsNum2633);
std::cerr << "last output should be ERROR from command2633" << std::endl;
 // last command was command number 2633
_testPrintServedList(r);
std::cout << "last command was number: 2634 " << std::endl;
// last command was command number 2634
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2635" << std::endl;
 // last command was command number 2635
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2636" << std::endl;
 // last command was command number 2636
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2637" << std::endl;
 // last command was command number 2637
const string items2638[] = {"bad product!",};
const int itemsNum2638[] = {7,};
_testGetOrder(r,1, items2638, itemsNum2638);
std::cerr << "last output should be ERROR from command2638" << std::endl;
 // last command was command number 2638
_testAddToWaitList(r,94);
std::cout << "last command was number: 2639 " << std::endl;
// last command was command number 2639
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2640" << std::endl;
 // last command was command number 2640
const string items2641[] = {"bad product!","pro539","pro457","pro592","pro365",};
const int itemsNum2641[] = {6,7,5,1,5,};
_testGetOrder(r,5, items2641, itemsNum2641);
std::cerr << "last output should be ERROR from command2641" << std::endl;
 // last command was command number 2641
const string items2642[] = {"pro381","pro230","bad product!",};
const int itemsNum2642[] = {9,5,2,};
_testGetOrder(r,3, items2642, itemsNum2642);
std::cerr << "last output should be ERROR from command2642" << std::endl;
 // last command was command number 2642
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2643" << std::endl;
 // last command was command number 2643
const string items2644[] = {"bad product!","pro381","pro279","pro255",};
const int itemsNum2644[] = {8,10,7,3,};
_testGetOrder(r,4, items2644, itemsNum2644);
std::cerr << "last output should be ERROR from command2644" << std::endl;
 // last command was command number 2644
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2645" << std::endl;
 // last command was command number 2645
_testPrintServedList(r);
std::cout << "last command was number: 2646 " << std::endl;
// last command was command number 2646
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2647" << std::endl;
 // last command was command number 2647
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2648" << std::endl;
 // last command was command number 2648
_testGetCheck(r);
std::cout << "last command was number: 2649 " << std::endl;
// last command was command number 2649
_testAddToWaitList(r,55);
std::cout << "last command was number: 2650 " << std::endl;
// last command was command number 2650
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2651" << std::endl;
 // last command was command number 2651
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2652" << std::endl;
 // last command was command number 2652
_testGetCheck(r);
std::cout << "last command was number: 2653 " << std::endl;
// last command was command number 2653
_testPrintServedList(r);
std::cout << "last command was number: 2654 " << std::endl;
// last command was command number 2654
const string items2655[] = {"bad product!","pro129","pro330",};
const int itemsNum2655[] = {4,7,8,};
_testGetOrder(r,3, items2655, itemsNum2655);
std::cerr << "last output should be ERROR from command2655" << std::endl;
 // last command was command number 2655
const string items2656[] = {"pro648",};
const int itemsNum2656[] = {10,};
_testGetOrder(r,-2, items2656, itemsNum2656);
std::cerr << "last output should be ERROR from command2656" << std::endl;
 // last command was command number 2656
const string items2657[] = {"pro379","pro335","pro491","pro294","pro457",};
const int itemsNum2657[] = {5,1,1,8,9,};
_testGetOrder(r,5, items2657, itemsNum2657);
std::cout << "last command was number: 2657 " << std::endl;
// last command was command number 2657
const string items2658[] = {"pro520","pro703","pro433","pro969",};
const int itemsNum2658[] = {5,10,3,4,};
_testGetOrder(r,4, items2658, itemsNum2658);
std::cout << "last command was number: 2658 " << std::endl;
// last command was command number 2658
const string items2659[] = {"pro742","bad product!","pro539","pro535","pro987",};
const int itemsNum2659[] = {2,4,3,1,8,};
_testGetOrder(r,-73, items2659, itemsNum2659);
std::cerr << "last output should be ERROR from command2659" << std::endl;
 // last command was command number 2659
const string items2660[] = {"pro648","bad product!",};
const int itemsNum2660[] = {6,3,};
_testGetOrder(r,2, items2660, itemsNum2660);
std::cerr << "last output should be ERROR from command2660" << std::endl;
 // last command was command number 2660
_testPrintWaitList(r);
std::cout << "last command was number: 2661 " << std::endl;
// last command was command number 2661
_testPrintTables(r);
std::cout << "last command was number: 2662 " << std::endl;
// last command was command number 2662
_testPrintOpenOrders(r);
std::cout << "last command was number: 2663 " << std::endl;
// last command was command number 2663
_testGetCheck(r);
std::cout << "last command was number: 2664 " << std::endl;
// last command was command number 2664
const string items2665[] = {"pro137","pro768",};
const int itemsNum2665[] = {-89,10,};
_testGetOrder(r,2, items2665, itemsNum2665);
std::cerr << "last output should be ERROR from command2665" << std::endl;
 // last command was command number 2665
const string items2666[] = {"pro661","pro575","pro768",};
const int itemsNum2666[] = {1,4,6,};
_testGetOrder(r,-37, items2666, itemsNum2666);
std::cerr << "last output should be ERROR from command2666" << std::endl;
 // last command was command number 2666
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2667" << std::endl;
 // last command was command number 2667
_testGetCheck(r);
std::cout << "last command was number: 2668 " << std::endl;
// last command was command number 2668
_testPrintTables(r);
std::cout << "last command was number: 2669 " << std::endl;
// last command was command number 2669
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2670" << std::endl;
 // last command was command number 2670
_testSitAtTable(r);
std::cout << "last command was number: 2671 " << std::endl;
// last command was command number 2671
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2672" << std::endl;
 // last command was command number 2672
const string items2673[] = {"pro595","pro262",};
const int itemsNum2673[] = {5,9,};
_testGetOrder(r,2, items2673, itemsNum2673);
std::cout << "last command was number: 2673 " << std::endl;
// last command was command number 2673
_testGetCheck(r);
std::cout << "last command was number: 2674 " << std::endl;
// last command was command number 2674
_testAddToWaitList(r,81);
std::cout << "last command was number: 2675 " << std::endl;
// last command was command number 2675
_testAddToWaitList(r,67);
std::cout << "last command was number: 2676 " << std::endl;
// last command was command number 2676
_testPrintCheckList(r);
std::cout << "last command was number: 2677 " << std::endl;
// last command was command number 2677
const string items2678[] = {"pro736","bad product!",};
const int itemsNum2678[] = {3,4,};
_testGetOrder(r,2, items2678, itemsNum2678);
std::cerr << "last output should be ERROR from command2678" << std::endl;
 // last command was command number 2678
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2679" << std::endl;
 // last command was command number 2679
const string items2680[] = {"pro648",};
const int itemsNum2680[] = {9,};
_testGetOrder(r,1, items2680, itemsNum2680);
std::cout << "last command was number: 2680 " << std::endl;
// last command was command number 2680
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2681" << std::endl;
 // last command was command number 2681
const string items2682[] = {"pro240","pro457",};
const int itemsNum2682[] = {-1,8,};
_testGetOrder(r,2, items2682, itemsNum2682);
std::cerr << "last output should be ERROR from command2682" << std::endl;
 // last command was command number 2682
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2683" << std::endl;
 // last command was command number 2683
const string items2684[] = {"pro502",};
const int itemsNum2684[] = {8,};
_testGetOrder(r,-47, items2684, itemsNum2684);
std::cerr << "last output should be ERROR from command2684" << std::endl;
 // last command was command number 2684
_testAddToWaitList(r,84);
std::cout << "last command was number: 2685 " << std::endl;
// last command was command number 2685
_testGetCheck(r);
std::cout << "last command was number: 2686 " << std::endl;
// last command was command number 2686
const string items2687[] = {"bad product!","pro733","pro543","pro539",};
const int itemsNum2687[] = {8,5,1,4,};
_testGetOrder(r,4, items2687, itemsNum2687);
std::cerr << "last output should be ERROR from command2687" << std::endl;
 // last command was command number 2687
_testAddToWaitList(r,96);
std::cout << "last command was number: 2688 " << std::endl;
// last command was command number 2688
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2689" << std::endl;
 // last command was command number 2689
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2690" << std::endl;
 // last command was command number 2690
const string items2691[] = {"bad product!",};
const int itemsNum2691[] = {-62,};
_testGetOrder(r,1, items2691, itemsNum2691);
std::cerr << "last output should be ERROR from command2691" << std::endl;
 // last command was command number 2691
_testGetCheck(r);
std::cout << "last command was number: 2692 " << std::endl;
// last command was command number 2692
const string items2693[] = {"pro397",};
const int itemsNum2693[] = {-40,};
_testGetOrder(r,1, items2693, itemsNum2693);
std::cerr << "last output should be ERROR from command2693" << std::endl;
 // last command was command number 2693
const string items2694[] = {"bad product!","pro136",};
const int itemsNum2694[] = {7,6,};
_testGetOrder(r,2, items2694, itemsNum2694);
std::cerr << "last output should be ERROR from command2694" << std::endl;
 // last command was command number 2694
const string items2695[] = {"pro742","pro543","pro457",};
const int itemsNum2695[] = {7,6,10,};
_testGetOrder(r,-83, items2695, itemsNum2695);
std::cerr << "last output should be ERROR from command2695" << std::endl;
 // last command was command number 2695
const string items2696[] = {"pro213","pro981",};
const int itemsNum2696[] = {10,5,};
_testGetOrder(r,-18, items2696, itemsNum2696);
std::cerr << "last output should be ERROR from command2696" << std::endl;
 // last command was command number 2696
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2697" << std::endl;
 // last command was command number 2697
_testPrintServedList(r);
std::cout << "last command was number: 2698 " << std::endl;
// last command was command number 2698
_testPrintCheckList(r);
std::cout << "last command was number: 2699 " << std::endl;
// last command was command number 2699
_testAddToWaitList(r,100);
std::cout << "last command was number: 2700 " << std::endl;
// last command was command number 2700
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2701" << std::endl;
 // last command was command number 2701
_testPrintProfits(r);
std::cout << "last command was number: 2702 " << std::endl;
// last command was command number 2702
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2703" << std::endl;
 // last command was command number 2703
const string items2704[] = {"pro872","pro535","pro988","pro821","pro966",};
const int itemsNum2704[] = {3,5,10,4,-79,};
_testGetOrder(r,-33, items2704, itemsNum2704);
std::cerr << "last output should be ERROR from command2704" << std::endl;
 // last command was command number 2704
_testPrintServedList(r);
std::cout << "last command was number: 2705 " << std::endl;
// last command was command number 2705
_testPrintCheckList(r);
std::cout << "last command was number: 2706 " << std::endl;
// last command was command number 2706
const string items2707[] = {"pro299","pro167",};
const int itemsNum2707[] = {8,6,};
_testGetOrder(r,-56, items2707, itemsNum2707);
std::cerr << "last output should be ERROR from command2707" << std::endl;
 // last command was command number 2707
_testAddToWaitList(r,73);
std::cout << "last command was number: 2708 " << std::endl;
// last command was command number 2708
const string items2709[] = {"bad product!",};
const int itemsNum2709[] = {1,};
_testGetOrder(r,-42, items2709, itemsNum2709);
std::cerr << "last output should be ERROR from command2709" << std::endl;
 // last command was command number 2709
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2710" << std::endl;
 // last command was command number 2710
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2711" << std::endl;
 // last command was command number 2711
const string items2712[] = {"pro375","pro736","pro148",};
const int itemsNum2712[] = {-61,3,5,};
_testGetOrder(r,-81, items2712, itemsNum2712);
std::cerr << "last output should be ERROR from command2712" << std::endl;
 // last command was command number 2712
_testPrintOpenOrders(r);
std::cout << "last command was number: 2713 " << std::endl;
// last command was command number 2713
_testPrintTables(r);
std::cout << "last command was number: 2714 " << std::endl;
// last command was command number 2714
const string items2715[] = {"pro100","pro397","pro148","bad product!",};
const int itemsNum2715[] = {9,3,1,8,};
_testGetOrder(r,4, items2715, itemsNum2715);
std::cerr << "last output should be ERROR from command2715" << std::endl;
 // last command was command number 2715
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2716" << std::endl;
 // last command was command number 2716
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2717" << std::endl;
 // last command was command number 2717
_testAddToWaitList(r,75);
std::cout << "last command was number: 2718 " << std::endl;
// last command was command number 2718
_testAddToWaitList(r,85);
std::cout << "last command was number: 2719 " << std::endl;
// last command was command number 2719
const string items2720[] = {"pro325",};
const int itemsNum2720[] = {-53,};
_testGetOrder(r,1, items2720, itemsNum2720);
std::cerr << "last output should be ERROR from command2720" << std::endl;
 // last command was command number 2720
_testSitAtTable(r);
std::cout << "last command was number: 2721 " << std::endl;
// last command was command number 2721
_testGetCheck(r);
std::cout << "last command was number: 2722 " << std::endl;
// last command was command number 2722
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2723" << std::endl;
 // last command was command number 2723
_testPrintTables(r);
std::cout << "last command was number: 2724 " << std::endl;
// last command was command number 2724
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2725" << std::endl;
 // last command was command number 2725
const string items2726[] = {"pro661","pro417","pro7","pro230","pro491",};
const int itemsNum2726[] = {10,3,9,9,3,};
_testGetOrder(r,-49, items2726, itemsNum2726);
std::cerr << "last output should be ERROR from command2726" << std::endl;
 // last command was command number 2726
_testPrintCheckList(r);
std::cout << "last command was number: 2727 " << std::endl;
// last command was command number 2727
_testPrintServedList(r);
std::cout << "last command was number: 2728 " << std::endl;
// last command was command number 2728
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2729" << std::endl;
 // last command was command number 2729
_testPrintProfits(r);
std::cout << "last command was number: 2730 " << std::endl;
// last command was command number 2730
_testGetCheck(r);
std::cout << "last command was number: 2731 " << std::endl;
// last command was command number 2731
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2732" << std::endl;
 // last command was command number 2732
_testGetCheck(r);
std::cout << "last command was number: 2733 " << std::endl;
// last command was command number 2733
_testAddToWaitList(r,58);
std::cout << "last command was number: 2734 " << std::endl;
// last command was command number 2734
const string items2735[] = {"pro440","pro608","pro956",};
const int itemsNum2735[] = {6,3,4,};
_testGetOrder(r,3, items2735, itemsNum2735);
std::cout << "last command was number: 2735 " << std::endl;
// last command was command number 2735
const string items2736[] = {"pro988","pro457","pro402",};
const int itemsNum2736[] = {9,9,10,};
_testGetOrder(r,3, items2736, itemsNum2736);
std::cout << "last command was number: 2736 " << std::endl;
// last command was command number 2736
_testSitAtTable(r);
std::cout << "last command was number: 2737 " << std::endl;
// last command was command number 2737
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2738" << std::endl;
 // last command was command number 2738
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2739" << std::endl;
 // last command was command number 2739
_testAddToWaitList(r,67);
std::cout << "last command was number: 2740 " << std::endl;
// last command was command number 2740
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2741" << std::endl;
 // last command was command number 2741
const string items2742[] = {"pro440","pro605",};
const int itemsNum2742[] = {2,-92,};
_testGetOrder(r,2, items2742, itemsNum2742);
std::cerr << "last output should be ERROR from command2742" << std::endl;
 // last command was command number 2742
_testGetCheck(r);
std::cout << "last command was number: 2743 " << std::endl;
// last command was command number 2743
const string items2744[] = {"pro826","pro969",};
const int itemsNum2744[] = {8,1,};
_testGetOrder(r,2, items2744, itemsNum2744);
std::cout << "last command was number: 2744 " << std::endl;
// last command was command number 2744
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2745" << std::endl;
 // last command was command number 2745
const string items2746[] = {"pro595",};
const int itemsNum2746[] = {1,};
_testGetOrder(r,1, items2746, itemsNum2746);
std::cout << "last command was number: 2746 " << std::endl;
// last command was command number 2746
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2747" << std::endl;
 // last command was command number 2747
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2748" << std::endl;
 // last command was command number 2748
_testAddToWaitList(r,81);
std::cout << "last command was number: 2749 " << std::endl;
// last command was command number 2749
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2750" << std::endl;
 // last command was command number 2750
const string items2751[] = {"pro703","pro826","pro156",};
const int itemsNum2751[] = {2,10,2,};
_testGetOrder(r,-82, items2751, itemsNum2751);
std::cerr << "last output should be ERROR from command2751" << std::endl;
 // last command was command number 2751
const string items2752[] = {"pro605","pro240","pro137","pro381","pro208",};
const int itemsNum2752[] = {-78,7,5,8,5,};
_testGetOrder(r,5, items2752, itemsNum2752);
std::cerr << "last output should be ERROR from command2752" << std::endl;
 // last command was command number 2752
const string items2753[] = {"pro294","pro397","pro733",};
const int itemsNum2753[] = {2,2,2,};
_testGetOrder(r,3, items2753, itemsNum2753);
std::cout << "last command was number: 2753 " << std::endl;
// last command was command number 2753
const string items2754[] = {"pro947","pro545","bad product!",};
const int itemsNum2754[] = {5,6,10,};
_testGetOrder(r,3, items2754, itemsNum2754);
std::cerr << "last output should be ERROR from command2754" << std::endl;
 // last command was command number 2754
_testAddToWaitList(r,93);
std::cout << "last command was number: 2755 " << std::endl;
// last command was command number 2755
_testSitAtTable(r);
std::cout << "last command was number: 2756 " << std::endl;
// last command was command number 2756
const string items2757[] = {"pro137",};
const int itemsNum2757[] = {9,};
_testGetOrder(r,1, items2757, itemsNum2757);
std::cout << "last command was number: 2757 " << std::endl;
// last command was command number 2757
_testGetCheck(r);
std::cout << "last command was number: 2758 " << std::endl;
// last command was command number 2758
_testSitAtTable(r);
std::cout << "last command was number: 2759 " << std::endl;
// last command was command number 2759
const string items2760[] = {"bad product!","pro402","pro575","pro539","pro977",};
const int itemsNum2760[] = {2,1,3,8,4,};
_testGetOrder(r,5, items2760, itemsNum2760);
std::cerr << "last output should be ERROR from command2760" << std::endl;
 // last command was command number 2760
_testPrintServedList(r);
std::cout << "last command was number: 2761 " << std::endl;
// last command was command number 2761
const string items2762[] = {"pro713","pro757","pro977","pro959",};
const int itemsNum2762[] = {6,4,6,4,};
_testGetOrder(r,4, items2762, itemsNum2762);
std::cout << "last command was number: 2762 " << std::endl;
// last command was command number 2762
const string items2763[] = {"pro821",};
const int itemsNum2763[] = {-73,};
_testGetOrder(r,1, items2763, itemsNum2763);
std::cerr << "last output should be ERROR from command2763" << std::endl;
 // last command was command number 2763
_testPrintTables(r);
std::cout << "last command was number: 2764 " << std::endl;
// last command was command number 2764
_testPrintProfits(r);
std::cout << "last command was number: 2765 " << std::endl;
// last command was command number 2765
_testPrintProfits(r);
std::cout << "last command was number: 2766 " << std::endl;
// last command was command number 2766
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2767" << std::endl;
 // last command was command number 2767
const string items2768[] = {"pro138",};
const int itemsNum2768[] = {3,};
_testGetOrder(r,-65, items2768, itemsNum2768);
std::cerr << "last output should be ERROR from command2768" << std::endl;
 // last command was command number 2768
_testPrintServedList(r);
std::cout << "last command was number: 2769 " << std::endl;
// last command was command number 2769
_testGetCheck(r);
std::cout << "last command was number: 2770 " << std::endl;
// last command was command number 2770
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2771" << std::endl;
 // last command was command number 2771
const string items2772[] = {"pro719","pro240",};
const int itemsNum2772[] = {5,-56,};
_testGetOrder(r,2, items2772, itemsNum2772);
std::cerr << "last output should be ERROR from command2772" << std::endl;
 // last command was command number 2772
const string items2773[] = {"bad product!",};
const int itemsNum2773[] = {1,};
_testGetOrder(r,-84, items2773, itemsNum2773);
std::cerr << "last output should be ERROR from command2773" << std::endl;
 // last command was command number 2773
const string items2774[] = {"pro956","pro703","pro508","bad product!","pro543",};
const int itemsNum2774[] = {6,5,4,10,8,};
_testGetOrder(r,5, items2774, itemsNum2774);
std::cerr << "last output should be ERROR from command2774" << std::endl;
 // last command was command number 2774
_testGetCheck(r);
std::cout << "last command was number: 2775 " << std::endl;
// last command was command number 2775
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2776" << std::endl;
 // last command was command number 2776
const string items2777[] = {"pro661","pro167",};
const int itemsNum2777[] = {4,8,};
_testGetOrder(r,2, items2777, itemsNum2777);
std::cout << "last command was number: 2777 " << std::endl;
// last command was command number 2777
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2778" << std::endl;
 // last command was command number 2778
const string items2779[] = {"pro709","pro294","pro703","pro335",};
const int itemsNum2779[] = {1,-95,1,2,};
_testGetOrder(r,-66, items2779, itemsNum2779);
std::cerr << "last output should be ERROR from command2779" << std::endl;
 // last command was command number 2779
_testSitAtTable(r);
std::cout << "last command was number: 2780 " << std::endl;
// last command was command number 2780
const string items2781[] = {"pro77","bad product!",};
const int itemsNum2781[] = {6,7,};
_testGetOrder(r,2, items2781, itemsNum2781);
std::cerr << "last output should be ERROR from command2781" << std::endl;
 // last command was command number 2781
const string items2782[] = {"pro703","pro241","pro720","pro331",};
const int itemsNum2782[] = {2,2,7,9,};
_testGetOrder(r,-10, items2782, itemsNum2782);
std::cerr << "last output should be ERROR from command2782" << std::endl;
 // last command was command number 2782
_testGetCheck(r);
std::cout << "last command was number: 2783 " << std::endl;
// last command was command number 2783
_testGetCheck(r);
std::cout << "last command was number: 2784 " << std::endl;
// last command was command number 2784
_testPrintProfits(r);
std::cout << "last command was number: 2785 " << std::endl;
// last command was command number 2785
const string items2786[] = {"pro742","pro810","pro895","pro987","pro230",};
const int itemsNum2786[] = {1,3,7,6,1,};
_testGetOrder(r,-26, items2786, itemsNum2786);
std::cerr << "last output should be ERROR from command2786" << std::endl;
 // last command was command number 2786
const string items2787[] = {"pro201",};
const int itemsNum2787[] = {-19,};
_testGetOrder(r,1, items2787, itemsNum2787);
std::cerr << "last output should be ERROR from command2787" << std::endl;
 // last command was command number 2787
const string items2788[] = {"pro397",};
const int itemsNum2788[] = {-87,};
_testGetOrder(r,-57, items2788, itemsNum2788);
std::cerr << "last output should be ERROR from command2788" << std::endl;
 // last command was command number 2788
const string items2789[] = {"pro740","pro377","pro491","pro703","pro7",};
const int itemsNum2789[] = {-6,4,8,6,5,};
_testGetOrder(r,5, items2789, itemsNum2789);
std::cerr << "last output should be ERROR from command2789" << std::endl;
 // last command was command number 2789
const string items2790[] = {"bad product!",};
const int itemsNum2790[] = {8,};
_testGetOrder(r,1, items2790, itemsNum2790);
std::cerr << "last output should be ERROR from command2790" << std::endl;
 // last command was command number 2790
_testSitAtTable(r);
std::cout << "last command was number: 2791 " << std::endl;
// last command was command number 2791
const string items2792[] = {"pro433","pro374","pro100","bad product!",};
const int itemsNum2792[] = {4,9,5,1,};
_testGetOrder(r,4, items2792, itemsNum2792);
std::cerr << "last output should be ERROR from command2792" << std::endl;
 // last command was command number 2792
_testPrintCheckList(r);
std::cout << "last command was number: 2793 " << std::endl;
// last command was command number 2793
_testPrintOpenOrders(r);
std::cout << "last command was number: 2794 " << std::endl;
// last command was command number 2794
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2795" << std::endl;
 // last command was command number 2795
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2796" << std::endl;
 // last command was command number 2796
_testPrintCheckList(r);
std::cout << "last command was number: 2797 " << std::endl;
// last command was command number 2797
_testSitAtTable(r);
std::cout << "last command was number: 2798 " << std::endl;
// last command was command number 2798
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2799" << std::endl;
 // last command was command number 2799
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2800" << std::endl;
 // last command was command number 2800
_testSitAtTable(r);
std::cout << "last command was number: 2801 " << std::endl;
// last command was command number 2801
_testPrintOpenOrders(r);
std::cout << "last command was number: 2802 " << std::endl;
// last command was command number 2802
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2803" << std::endl;
 // last command was command number 2803
_testPrintTables(r);
std::cout << "last command was number: 2804 " << std::endl;
// last command was command number 2804
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2805" << std::endl;
 // last command was command number 2805
const string items2806[] = {"pro365","pro742","pro702",};
const int itemsNum2806[] = {-99,10,5,};
_testGetOrder(r,3, items2806, itemsNum2806);
std::cerr << "last output should be ERROR from command2806" << std::endl;
 // last command was command number 2806
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2807" << std::endl;
 // last command was command number 2807
const string items2808[] = {"pro768","pro262","bad product!",};
const int itemsNum2808[] = {3,2,10,};
_testGetOrder(r,3, items2808, itemsNum2808);
std::cerr << "last output should be ERROR from command2808" << std::endl;
 // last command was command number 2808
_testPrintWaitList(r);
std::cout << "last command was number: 2809 " << std::endl;
// last command was command number 2809
const string items2810[] = {"bad product!",};
const int itemsNum2810[] = {9,};
_testGetOrder(r,1, items2810, itemsNum2810);
std::cerr << "last output should be ERROR from command2810" << std::endl;
 // last command was command number 2810
_testPrintServedList(r);
std::cout << "last command was number: 2811 " << std::endl;
// last command was command number 2811
_testPrintProfits(r);
std::cout << "last command was number: 2812 " << std::endl;
// last command was command number 2812
_testAddToWaitList(r,51);
std::cout << "last command was number: 2813 " << std::endl;
// last command was command number 2813
const string items2814[] = {"pro167",};
const int itemsNum2814[] = {4,};
_testGetOrder(r,1, items2814, itemsNum2814);
std::cout << "last command was number: 2814 " << std::endl;
// last command was command number 2814
_testPrintTables(r);
std::cout << "last command was number: 2815 " << std::endl;
// last command was command number 2815
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2816" << std::endl;
 // last command was command number 2816
_testPrintWaitList(r);
std::cout << "last command was number: 2817 " << std::endl;
// last command was command number 2817
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2818" << std::endl;
 // last command was command number 2818
_testAddToWaitList(r,85);
std::cout << "last command was number: 2819 " << std::endl;
// last command was command number 2819
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2820" << std::endl;
 // last command was command number 2820
_testPrintWaitList(r);
std::cout << "last command was number: 2821 " << std::endl;
// last command was command number 2821
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2822" << std::endl;
 // last command was command number 2822
_testSitAtTable(r);
std::cout << "last command was number: 2823 " << std::endl;
// last command was command number 2823
const string items2824[] = {"pro872","pro947",};
const int itemsNum2824[] = {4,2,};
_testGetOrder(r,2, items2824, itemsNum2824);
std::cout << "last command was number: 2824 " << std::endl;
// last command was command number 2824
const string items2825[] = {"pro440","pro491","pro241","pro826","bad product!",};
const int itemsNum2825[] = {3,3,2,3,9,};
_testGetOrder(r,5, items2825, itemsNum2825);
std::cerr << "last output should be ERROR from command2825" << std::endl;
 // last command was command number 2825
_testPrintOpenOrders(r);
std::cout << "last command was number: 2826 " << std::endl;
// last command was command number 2826
const string items2827[] = {"pro605","bad product!",};
const int itemsNum2827[] = {3,9,};
_testGetOrder(r,2, items2827, itemsNum2827);
std::cerr << "last output should be ERROR from command2827" << std::endl;
 // last command was command number 2827
const string items2828[] = {"pro120","pro826","pro702","pro969","pro810",};
const int itemsNum2828[] = {8,2,8,3,6,};
_testGetOrder(r,5, items2828, itemsNum2828);
std::cout << "last command was number: 2828 " << std::endl;
// last command was command number 2828
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2829" << std::endl;
 // last command was command number 2829
const string items2830[] = {"bad product!","pro7","pro285",};
const int itemsNum2830[] = {6,7,3,};
_testGetOrder(r,3, items2830, itemsNum2830);
std::cerr << "last output should be ERROR from command2830" << std::endl;
 // last command was command number 2830
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2831" << std::endl;
 // last command was command number 2831
_testGetCheck(r);
std::cout << "last command was number: 2832 " << std::endl;
// last command was command number 2832
_testPrintCheckList(r);
std::cout << "last command was number: 2833 " << std::endl;
// last command was command number 2833
const string items2834[] = {"pro417","bad product!","pro720","pro608","pro184",};
const int itemsNum2834[] = {3,7,3,3,6,};
_testGetOrder(r,5, items2834, itemsNum2834);
std::cerr << "last output should be ERROR from command2834" << std::endl;
 // last command was command number 2834
const string items2835[] = {"pro661","pro733","pro956",};
const int itemsNum2835[] = {10,5,-64,};
_testGetOrder(r,3, items2835, itemsNum2835);
std::cerr << "last output should be ERROR from command2835" << std::endl;
 // last command was command number 2835
_testAddToWaitList(r,61);
std::cout << "last command was number: 2836 " << std::endl;
// last command was command number 2836
const string items2837[] = {"pro592","pro966","pro736","pro912","pro575",};
const int itemsNum2837[] = {6,8,-99,9,5,};
_testGetOrder(r,-82, items2837, itemsNum2837);
std::cerr << "last output should be ERROR from command2837" << std::endl;
 // last command was command number 2837
_testAddToWaitList(r,86);
std::cout << "last command was number: 2838 " << std::endl;
// last command was command number 2838
const string items2839[] = {"pro575","pro77","bad product!","pro959",};
const int itemsNum2839[] = {8,6,5,7,};
_testGetOrder(r,4, items2839, itemsNum2839);
std::cerr << "last output should be ERROR from command2839" << std::endl;
 // last command was command number 2839
_testPrintServedList(r);
std::cout << "last command was number: 2840 " << std::endl;
// last command was command number 2840
const string items2841[] = {"pro742","bad product!","pro661",};
const int itemsNum2841[] = {4,5,9,};
_testGetOrder(r,3, items2841, itemsNum2841);
std::cerr << "last output should be ERROR from command2841" << std::endl;
 // last command was command number 2841
_testPrintTables(r);
std::cout << "last command was number: 2842 " << std::endl;
// last command was command number 2842
_testAddToWaitList(r,82);
std::cout << "last command was number: 2843 " << std::endl;
// last command was command number 2843
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2844" << std::endl;
 // last command was command number 2844
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2845" << std::endl;
 // last command was command number 2845
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2846" << std::endl;
 // last command was command number 2846
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2847" << std::endl;
 // last command was command number 2847
_testPrintServedList(r);
std::cout << "last command was number: 2848 " << std::endl;
// last command was command number 2848
const string items2849[] = {"bad product!","pro433","pro947",};
const int itemsNum2849[] = {2,2,6,};
_testGetOrder(r,3, items2849, itemsNum2849);
std::cerr << "last output should be ERROR from command2849" << std::endl;
 // last command was command number 2849
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2850" << std::endl;
 // last command was command number 2850
const string items2851[] = {"pro988","pro760",};
const int itemsNum2851[] = {4,10,};
_testGetOrder(r,2, items2851, itemsNum2851);
std::cout << "last command was number: 2851 " << std::endl;
// last command was command number 2851
_testAddToWaitList(r,73);
std::cout << "last command was number: 2852 " << std::endl;
// last command was command number 2852
const string items2853[] = {"pro539",};
const int itemsNum2853[] = {9,};
_testGetOrder(r,1, items2853, itemsNum2853);
std::cout << "last command was number: 2853 " << std::endl;
// last command was command number 2853
_testPrintWaitList(r);
std::cout << "last command was number: 2854 " << std::endl;
// last command was command number 2854
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2855" << std::endl;
 // last command was command number 2855
_testPrintCheckList(r);
std::cout << "last command was number: 2856 " << std::endl;
// last command was command number 2856
const string items2857[] = {"pro390","pro255","bad product!",};
const int itemsNum2857[] = {1,10,3,};
_testGetOrder(r,3, items2857, itemsNum2857);
std::cerr << "last output should be ERROR from command2857" << std::endl;
 // last command was command number 2857
const string items2858[] = {"pro253","pro959","pro702","pro377",};
const int itemsNum2858[] = {9,1,2,3,};
_testGetOrder(r,4, items2858, itemsNum2858);
std::cout << "last command was number: 2858 " << std::endl;
// last command was command number 2858
_testPrintOpenOrders(r);
std::cout << "last command was number: 2859 " << std::endl;
// last command was command number 2859
const string items2860[] = {"pro757","pro440","pro379","pro351","pro981",};
const int itemsNum2860[] = {2,10,10,-29,5,};
_testGetOrder(r,5, items2860, itemsNum2860);
std::cerr << "last output should be ERROR from command2860" << std::endl;
 // last command was command number 2860
_testAddToWaitList(r,58);
std::cout << "last command was number: 2861 " << std::endl;
// last command was command number 2861
_testAddToWaitList(r,90);
std::cout << "last command was number: 2862 " << std::endl;
// last command was command number 2862
_testSitAtTable(r);
std::cout << "last command was number: 2863 " << std::endl;
// last command was command number 2863
const string items2864[] = {"pro534","pro100","pro440","pro895",};
const int itemsNum2864[] = {10,9,4,3,};
_testGetOrder(r,4, items2864, itemsNum2864);
std::cout << "last command was number: 2864 " << std::endl;
// last command was command number 2864
_testGetCheck(r);
std::cout << "last command was number: 2865 " << std::endl;
// last command was command number 2865
const string items2866[] = {"pro248",};
const int itemsNum2866[] = {-68,};
_testGetOrder(r,-65, items2866, itemsNum2866);
std::cerr << "last output should be ERROR from command2866" << std::endl;
 // last command was command number 2866
const string items2867[] = {"pro457","pro167",};
const int itemsNum2867[] = {6,9,};
_testGetOrder(r,-59, items2867, itemsNum2867);
std::cerr << "last output should be ERROR from command2867" << std::endl;
 // last command was command number 2867
_testAddToWaitList(r,66);
std::cout << "last command was number: 2868 " << std::endl;
// last command was command number 2868
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2869" << std::endl;
 // last command was command number 2869
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2870" << std::endl;
 // last command was command number 2870
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2871" << std::endl;
 // last command was command number 2871
_testAddToWaitList(r,55);
std::cout << "last command was number: 2872 " << std::endl;
// last command was command number 2872
_testGetCheck(r);
std::cout << "last command was number: 2873 " << std::endl;
// last command was command number 2873
_testGetCheck(r);
std::cout << "last command was number: 2874 " << std::endl;
// last command was command number 2874
_testGetCheck(r);
std::cout << "last command was number: 2875 " << std::endl;
// last command was command number 2875
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2876" << std::endl;
 // last command was command number 2876
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2877" << std::endl;
 // last command was command number 2877
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2878" << std::endl;
 // last command was command number 2878
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2879" << std::endl;
 // last command was command number 2879
_testGetCheck(r);
std::cout << "last command was number: 2880 " << std::endl;
// last command was command number 2880
_testPrintOpenOrders(r);
std::cout << "last command was number: 2881 " << std::endl;
// last command was command number 2881
const string items2882[] = {"pro826","pro213","pro184",};
const int itemsNum2882[] = {5,-57,2,};
_testGetOrder(r,3, items2882, itemsNum2882);
std::cerr << "last output should be ERROR from command2882" << std::endl;
 // last command was command number 2882
_testSitAtTable(r);
std::cout << "last command was number: 2883 " << std::endl;
// last command was command number 2883
_testSitAtTable(r);
std::cout << "last command was number: 2884 " << std::endl;
// last command was command number 2884
const string items2885[] = {"pro381","pro402","pro440","pro969","pro508",};
const int itemsNum2885[] = {4,6,10,4,3,};
_testGetOrder(r,5, items2885, itemsNum2885);
std::cout << "last command was number: 2885 " << std::endl;
// last command was command number 2885
_testPrintProfits(r);
std::cout << "last command was number: 2886 " << std::endl;
// last command was command number 2886
const string items2887[] = {"bad product!",};
const int itemsNum2887[] = {7,};
_testGetOrder(r,1, items2887, itemsNum2887);
std::cerr << "last output should be ERROR from command2887" << std::endl;
 // last command was command number 2887
const string items2888[] = {"pro575","pro826","pro303","pro520",};
const int itemsNum2888[] = {6,3,6,6,};
_testGetOrder(r,-12, items2888, itemsNum2888);
std::cerr << "last output should be ERROR from command2888" << std::endl;
 // last command was command number 2888
_testSitAtTable(r);
std::cout << "last command was number: 2889 " << std::endl;
// last command was command number 2889
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command2890" << std::endl;
 // last command was command number 2890
_testPrintTables(r);
std::cout << "last command was number: 2891 " << std::endl;
// last command was command number 2891
const string items2892[] = {"pro956","pro331","pro6",};
const int itemsNum2892[] = {2,10,5,};
_testGetOrder(r,3, items2892, itemsNum2892);
std::cout << "last command was number: 2892 " << std::endl;
// last command was command number 2892
const string items2893[] = {"pro977",};
const int itemsNum2893[] = {2,};
_testGetOrder(r,-78, items2893, itemsNum2893);
std::cerr << "last output should be ERROR from command2893" << std::endl;
 // last command was command number 2893
const string items2894[] = {"pro502","pro661","pro608","pro966","pro539",};
const int itemsNum2894[] = {6,4,3,3,10,};
_testGetOrder(r,5, items2894, itemsNum2894);
std::cout << "last command was number: 2894 " << std::endl;
// last command was command number 2894
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2895" << std::endl;
 // last command was command number 2895
_testPrintCheckList(r);
std::cout << "last command was number: 2896 " << std::endl;
// last command was command number 2896
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command2897" << std::endl;
 // last command was command number 2897
_testAddToWaitList(r,89);
std::cout << "last command was number: 2898 " << std::endl;
// last command was command number 2898
_testSitAtTable(r);
std::cout << "last command was number: 2899 " << std::endl;
// last command was command number 2899
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2900" << std::endl;
 // last command was command number 2900
const string items2901[] = {"pro760","pro969","pro7","pro136",};
const int itemsNum2901[] = {7,10,4,4,};
_testGetOrder(r,4, items2901, itemsNum2901);
std::cout << "last command was number: 2901 " << std::endl;
// last command was command number 2901
const string items2902[] = {"pro534","pro375","pro129",};
const int itemsNum2902[] = {6,3,4,};
_testGetOrder(r,3, items2902, itemsNum2902);
std::cerr << "last output should be ERROR from command2902" << std::endl;
 // last command was command number 2902
_testSitAtTable(r);
std::cout << "last command was number: 2903 " << std::endl;
// last command was command number 2903
const string items2904[] = {"pro7","pro201","pro6","pro966",};
const int itemsNum2904[] = {8,4,-66,2,};
_testGetOrder(r,4, items2904, itemsNum2904);
std::cerr << "last output should be ERROR from command2904" << std::endl;
 // last command was command number 2904
_testGetCheck(r);
std::cout << "last command was number: 2905 " << std::endl;
// last command was command number 2905
const string items2906[] = {"pro137","pro661","pro100","pro977",};
const int itemsNum2906[] = {6,-63,9,3,};
_testGetOrder(r,4, items2906, itemsNum2906);
std::cerr << "last output should be ERROR from command2906" << std::endl;
 // last command was command number 2906
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2907" << std::endl;
 // last command was command number 2907
_testPrintOpenOrders(r);
std::cout << "last command was number: 2908 " << std::endl;
// last command was command number 2908
const string items2909[] = {"pro381","pro745","bad product!",};
const int itemsNum2909[] = {-59,4,4,};
_testGetOrder(r,3, items2909, itemsNum2909);
std::cerr << "last output should be ERROR from command2909" << std::endl;
 // last command was command number 2909
const string items2910[] = {"bad product!",};
const int itemsNum2910[] = {8,};
_testGetOrder(r,1, items2910, itemsNum2910);
std::cerr << "last output should be ERROR from command2910" << std::endl;
 // last command was command number 2910
_testPrintWaitList(r);
std::cout << "last command was number: 2911 " << std::endl;
// last command was command number 2911
_testPrintProfits(r);
std::cout << "last command was number: 2912 " << std::endl;
// last command was command number 2912
_testAddToWaitList(r,59);
std::cout << "last command was number: 2913 " << std::endl;
// last command was command number 2913
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2914" << std::endl;
 // last command was command number 2914
_testSitAtTable(r);
std::cout << "last command was number: 2915 " << std::endl;
// last command was command number 2915
_testPrintOpenOrders(r);
std::cout << "last command was number: 2916 " << std::endl;
// last command was command number 2916
_testGetCheck(r);
std::cout << "last command was number: 2917 " << std::endl;
// last command was command number 2917
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command2918" << std::endl;
 // last command was command number 2918
const string items2919[] = {"pro959","pro167",};
const int itemsNum2919[] = {9,7,};
_testGetOrder(r,2, items2919, itemsNum2919);
std::cout << "last command was number: 2919 " << std::endl;
// last command was command number 2919
_testSitAtTable(r);
std::cout << "last command was number: 2920 " << std::endl;
// last command was command number 2920
const string items2921[] = {"pro100","pro129","pro262","pro988","pro279",};
const int itemsNum2921[] = {-7,7,1,7,2,};
_testGetOrder(r,5, items2921, itemsNum2921);
std::cerr << "last output should be ERROR from command2921" << std::endl;
 // last command was command number 2921
const string items2922[] = {"pro709","pro713","pro365","pro648",};
const int itemsNum2922[] = {9,9,2,6,};
_testGetOrder(r,4, items2922, itemsNum2922);
std::cout << "last command was number: 2922 " << std::endl;
// last command was command number 2922
_testAddToWaitList(r,64);
std::cout << "last command was number: 2923 " << std::endl;
// last command was command number 2923
_testSitAtTable(r);
std::cout << "last command was number: 2924 " << std::endl;
// last command was command number 2924
_testPrintServedList(r);
std::cout << "last command was number: 2925 " << std::endl;
// last command was command number 2925
const string items2926[] = {"pro695","bad product!","pro129",};
const int itemsNum2926[] = {4,7,9,};
_testGetOrder(r,3, items2926, itemsNum2926);
std::cerr << "last output should be ERROR from command2926" << std::endl;
 // last command was command number 2926
_testGetCheck(r);
std::cout << "last command was number: 2927 " << std::endl;
// last command was command number 2927
const string items2928[] = {"bad product!","pro745",};
const int itemsNum2928[] = {6,2,};
_testGetOrder(r,2, items2928, itemsNum2928);
std::cerr << "last output should be ERROR from command2928" << std::endl;
 // last command was command number 2928
_testGetCheck(r);
std::cout << "last command was number: 2929 " << std::endl;
// last command was command number 2929
_testPrintCheckList(r);
std::cout << "last command was number: 2930 " << std::endl;
// last command was command number 2930
_testGetCheck(r);
std::cout << "last command was number: 2931 " << std::endl;
// last command was command number 2931
const string items2932[] = {"pro821",};
const int itemsNum2932[] = {10,};
_testGetOrder(r,-69, items2932, itemsNum2932);
std::cerr << "last output should be ERROR from command2932" << std::endl;
 // last command was command number 2932
_testPrintServedList(r);
std::cout << "last command was number: 2933 " << std::endl;
// last command was command number 2933
_testAddToWaitList(r,73);
std::cout << "last command was number: 2934 " << std::endl;
// last command was command number 2934
_testPrintCheckList(r);
std::cout << "last command was number: 2935 " << std::endl;
// last command was command number 2935
_testPrintServedList(r);
std::cout << "last command was number: 2936 " << std::endl;
// last command was command number 2936
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command2937" << std::endl;
 // last command was command number 2937
const string items2938[] = {"pro713","pro184","pro661",};
const int itemsNum2938[] = {7,6,-86,};
_testGetOrder(r,-66, items2938, itemsNum2938);
std::cerr << "last output should be ERROR from command2938" << std::endl;
 // last command was command number 2938
const string items2939[] = {"bad product!","pro7","pro262","pro457","pro977",};
const int itemsNum2939[] = {5,7,1,4,4,};
_testGetOrder(r,5, items2939, itemsNum2939);
std::cerr << "last output should be ERROR from command2939" << std::endl;
 // last command was command number 2939
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2940" << std::endl;
 // last command was command number 2940
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2941" << std::endl;
 // last command was command number 2941
const string items2942[] = {"pro605","pro7",};
const int itemsNum2942[] = {4,2,};
_testGetOrder(r,-99, items2942, itemsNum2942);
std::cerr << "last output should be ERROR from command2942" << std::endl;
 // last command was command number 2942
_testSitAtTable(r);
std::cout << "last command was number: 2943 " << std::endl;
// last command was command number 2943
_testSitAtTable(r);
std::cout << "last command was number: 2944 " << std::endl;
// last command was command number 2944
_testGetCheck(r);
std::cout << "last command was number: 2945 " << std::endl;
// last command was command number 2945
const string items2946[] = {"pro330",};
const int itemsNum2946[] = {5,};
_testGetOrder(r,1, items2946, itemsNum2946);
std::cout << "last command was number: 2946 " << std::endl;
// last command was command number 2946
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2947" << std::endl;
 // last command was command number 2947
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2948" << std::endl;
 // last command was command number 2948
const string items2949[] = {"pro713","pro457",};
const int itemsNum2949[] = {1,6,};
_testGetOrder(r,2, items2949, itemsNum2949);
std::cout << "last command was number: 2949 " << std::endl;
// last command was command number 2949
_testSitAtTable(r);
std::cout << "last command was number: 2950 " << std::endl;
// last command was command number 2950
_testPrintProfits(r);
std::cout << "last command was number: 2951 " << std::endl;
// last command was command number 2951
_testPrintCheckList(r);
std::cout << "last command was number: 2952 " << std::endl;
// last command was command number 2952
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2953" << std::endl;
 // last command was command number 2953
_testPrintCheckList(r);
std::cout << "last command was number: 2954 " << std::endl;
// last command was command number 2954
_testAddToWaitList(r,58);
std::cout << "last command was number: 2955 " << std::endl;
// last command was command number 2955
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2956" << std::endl;
 // last command was command number 2956
const string items2957[] = {"pro294","pro491","pro243","pro208",};
const int itemsNum2957[] = {1,5,6,1,};
_testGetOrder(r,4, items2957, itemsNum2957);
std::cout << "last command was number: 2957 " << std::endl;
// last command was command number 2957
const string items2958[] = {"pro208","bad product!","pro719",};
const int itemsNum2958[] = {7,7,7,};
_testGetOrder(r,3, items2958, itemsNum2958);
std::cerr << "last output should be ERROR from command2958" << std::endl;
 // last command was command number 2958
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2959" << std::endl;
 // last command was command number 2959
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2960" << std::endl;
 // last command was command number 2960
_testSitAtTable(r);
std::cout << "last command was number: 2961 " << std::endl;
// last command was command number 2961
_testSitAtTable(r);
std::cout << "last command was number: 2962 " << std::endl;
// last command was command number 2962
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2963" << std::endl;
 // last command was command number 2963
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2964" << std::endl;
 // last command was command number 2964
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2965" << std::endl;
 // last command was command number 2965
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2966" << std::endl;
 // last command was command number 2966
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2967" << std::endl;
 // last command was command number 2967
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command2968" << std::endl;
 // last command was command number 2968
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command2969" << std::endl;
 // last command was command number 2969
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2970" << std::endl;
 // last command was command number 2970
const string items2971[] = {"pro895","pro243",};
const int itemsNum2971[] = {-45,1,};
_testGetOrder(r,2, items2971, itemsNum2971);
std::cerr << "last output should be ERROR from command2971" << std::endl;
 // last command was command number 2971
_testGetCheck(r);
std::cout << "last command was number: 2972 " << std::endl;
// last command was command number 2972
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2973" << std::endl;
 // last command was command number 2973
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command2974" << std::endl;
 // last command was command number 2974
const string items2975[] = {"bad product!",};
const int itemsNum2975[] = {8,};
_testGetOrder(r,-93, items2975, itemsNum2975);
std::cerr << "last output should be ERROR from command2975" << std::endl;
 // last command was command number 2975
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2976" << std::endl;
 // last command was command number 2976
_testGetCheck(r);
std::cout << "last command was number: 2977 " << std::endl;
// last command was command number 2977
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2978" << std::endl;
 // last command was command number 2978
_testGetCheck(r);
std::cout << "last command was number: 2979 " << std::endl;
// last command was command number 2979
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2980" << std::endl;
 // last command was command number 2980
_testPrintServedList(r);
std::cout << "last command was number: 2981 " << std::endl;
// last command was command number 2981
_testAddToWaitList(r,72);
std::cout << "last command was number: 2982 " << std::endl;
// last command was command number 2982
const string items2983[] = {"bad product!",};
const int itemsNum2983[] = {1,};
_testGetOrder(r,1, items2983, itemsNum2983);
std::cerr << "last output should be ERROR from command2983" << std::endl;
 // last command was command number 2983
_testGetCheck(r);
std::cout << "last command was number: 2984 " << std::endl;
// last command was command number 2984
const string items2985[] = {"pro255","pro703","pro375",};
const int itemsNum2985[] = {6,10,8,};
_testGetOrder(r,-86, items2985, itemsNum2985);
std::cerr << "last output should be ERROR from command2985" << std::endl;
 // last command was command number 2985
const string items2986[] = {"pro136","pro768","pro148","pro863","pro736",};
const int itemsNum2986[] = {7,4,9,9,10,};
_testGetOrder(r,-87, items2986, itemsNum2986);
std::cerr << "last output should be ERROR from command2986" << std::endl;
 // last command was command number 2986
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2987" << std::endl;
 // last command was command number 2987
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2988" << std::endl;
 // last command was command number 2988
const string items2989[] = {"pro365","pro742","bad product!",};
const int itemsNum2989[] = {3,9,8,};
_testGetOrder(r,3, items2989, itemsNum2989);
std::cerr << "last output should be ERROR from command2989" << std::endl;
 // last command was command number 2989
_testAddToWaitList(r,84);
std::cout << "last command was number: 2990 " << std::endl;
// last command was command number 2990
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command2991" << std::endl;
 // last command was command number 2991
_testPrintCheckList(r);
std::cout << "last command was number: 2992 " << std::endl;
// last command was command number 2992
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command2993" << std::endl;
 // last command was command number 2993
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2994" << std::endl;
 // last command was command number 2994
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command2995" << std::endl;
 // last command was command number 2995
const string items2996[] = {"bad product!","pro325","pro745","pro508","pro966",};
const int itemsNum2996[] = {1,6,2,6,10,};
_testGetOrder(r,5, items2996, itemsNum2996);
std::cerr << "last output should be ERROR from command2996" << std::endl;
 // last command was command number 2996
_testAddToWaitList(r,63);
std::cout << "last command was number: 2997 " << std::endl;
// last command was command number 2997
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command2998" << std::endl;
 // last command was command number 2998
_testPrintOpenOrders(r);
std::cout << "last command was number: 2999 " << std::endl;
// last command was command number 2999
_testPrintWaitList(r);
std::cout << "last command was number: 3000 " << std::endl;
// last command was command number 3000
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command3001" << std::endl;
 // last command was command number 3001
_testAddToWaitList(r,82);
std::cout << "last command was number: 3002 " << std::endl;
// last command was command number 3002
const string items3003[] = {"pro77","bad product!","pro709","pro299",};
const int itemsNum3003[] = {1,1,2,9,};
_testGetOrder(r,4, items3003, itemsNum3003);
std::cerr << "last output should be ERROR from command3003" << std::endl;
 // last command was command number 3003
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3004" << std::endl;
 // last command was command number 3004
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command3005" << std::endl;
 // last command was command number 3005
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3006" << std::endl;
 // last command was command number 3006
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command3007" << std::endl;
 // last command was command number 3007
const string items3008[] = {"bad product!",};
const int itemsNum3008[] = {9,};
_testGetOrder(r,1, items3008, itemsNum3008);
std::cerr << "last output should be ERROR from command3008" << std::endl;
 // last command was command number 3008
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3009" << std::endl;
 // last command was command number 3009
const string items3010[] = {"pro810","pro826",};
const int itemsNum3010[] = {7,-92,};
_testGetOrder(r,2, items3010, itemsNum3010);
std::cerr << "last output should be ERROR from command3010" << std::endl;
 // last command was command number 3010
const string items3011[] = {"pro138","bad product!",};
const int itemsNum3011[] = {5,2,};
_testGetOrder(r,2, items3011, itemsNum3011);
std::cerr << "last output should be ERROR from command3011" << std::endl;
 // last command was command number 3011
const string items3012[] = {"pro100","pro966","pro433",};
const int itemsNum3012[] = {6,7,-11,};
_testGetOrder(r,3, items3012, itemsNum3012);
std::cerr << "last output should be ERROR from command3012" << std::endl;
 // last command was command number 3012
const string items3013[] = {"bad product!",};
const int itemsNum3013[] = {7,};
_testGetOrder(r,1, items3013, itemsNum3013);
std::cerr << "last output should be ERROR from command3013" << std::endl;
 // last command was command number 3013
_testAddToWaitList(r,70);
std::cout << "last command was number: 3014 " << std::endl;
// last command was command number 3014
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3015" << std::endl;
 // last command was command number 3015
const string items3016[] = {"pro959","pro929","pro539",};
const int itemsNum3016[] = {2,1,-82,};
_testGetOrder(r,-74, items3016, itemsNum3016);
std::cerr << "last output should be ERROR from command3016" << std::endl;
 // last command was command number 3016
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command3017" << std::endl;
 // last command was command number 3017
const string items3018[] = {"pro120","pro379","pro241","pro969","pro981",};
const int itemsNum3018[] = {5,8,9,7,8,};
_testGetOrder(r,5, items3018, itemsNum3018);
std::cout << "last command was number: 3018 " << std::endl;
// last command was command number 3018
_testSitAtTable(r);
std::cerr << "last output should be ERROR from command3019" << std::endl;
 // last command was command number 3019
_testPrintServedList(r);
std::cout << "last command was number: 3020 " << std::endl;
// last command was command number 3020
_testGetCheck(r);
std::cout << "last command was number: 3021 " << std::endl;
// last command was command number 3021
_testSitAtTable(r);
std::cout << "last command was number: 3022 " << std::endl;
// last command was command number 3022
_testPrintServedList(r);
std::cout << "last command was number: 3023 " << std::endl;
// last command was command number 3023
const string items3024[] = {"pro981","pro381","pro895",};
const int itemsNum3024[] = {8,7,2,};
_testGetOrder(r,3, items3024, itemsNum3024);
std::cout << "last command was number: 3024 " << std::endl;
// last command was command number 3024
_testAddToWaitList(r,62);
std::cout << "last command was number: 3025 " << std::endl;
// last command was command number 3025
const string items3026[] = {"pro351","pro335","pro543",};
const int itemsNum3026[] = {10,4,-24,};
_testGetOrder(r,3, items3026, itemsNum3026);
std::cerr << "last output should be ERROR from command3026" << std::endl;
 // last command was command number 3026
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3027" << std::endl;
 // last command was command number 3027
_testPrintWaitList(r);
std::cout << "last command was number: 3028 " << std::endl;
// last command was command number 3028
_testAddToWaitList(r,56);
std::cout << "last command was number: 3029 " << std::endl;
// last command was command number 3029
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3030" << std::endl;
 // last command was command number 3030
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3031" << std::endl;
 // last command was command number 3031
const string items3032[] = {"pro129","pro365","pro863","pro7","pro539",};
const int itemsNum3032[] = {1,3,1,6,8,};
_testGetOrder(r,-7, items3032, itemsNum3032);
std::cerr << "last output should be ERROR from command3032" << std::endl;
 // last command was command number 3032
_testPrintProfits(r);
std::cout << "last command was number: 3033 " << std::endl;
// last command was command number 3033
_testGetCheck(r);
std::cout << "last command was number: 3034 " << std::endl;
// last command was command number 3034
_testPrintOpenOrders(r);
std::cout << "last command was number: 3035 " << std::endl;
// last command was command number 3035
_testPrintServedList(r);
std::cout << "last command was number: 3036 " << std::endl;
// last command was command number 3036
_testPrintOpenOrders(r);
std::cout << "last command was number: 3037 " << std::endl;
// last command was command number 3037
const string items3038[] = {"pro402","pro491","pro255","pro381",};
const int itemsNum3038[] = {6,2,3,-85,};
_testGetOrder(r,4, items3038, itemsNum3038);
std::cerr << "last output should be ERROR from command3038" << std::endl;
 // last command was command number 3038
_testPrintProfits(r);
std::cout << "last command was number: 3039 " << std::endl;
// last command was command number 3039
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3040" << std::endl;
 // last command was command number 3040
const string items3041[] = {"pro330","pro440","pro947","pro137",};
const int itemsNum3041[] = {2,7,2,8,};
_testGetOrder(r,-10, items3041, itemsNum3041);
std::cerr << "last output should be ERROR from command3041" << std::endl;
 // last command was command number 3041
const string items3042[] = {"pro148","pro433","bad product!",};
const int itemsNum3042[] = {3,2,-4,};
_testGetOrder(r,3, items3042, itemsNum3042);
std::cerr << "last output should be ERROR from command3042" << std::endl;
 // last command was command number 3042
_testAddToWaitList(r,78);
std::cout << "last command was number: 3043 " << std::endl;
// last command was command number 3043
const string items3044[] = {"bad product!",};
const int itemsNum3044[] = {4,};
_testGetOrder(r,1, items3044, itemsNum3044);
std::cerr << "last output should be ERROR from command3044" << std::endl;
 // last command was command number 3044
_testSitAtTable(r);
std::cout << "last command was number: 3045 " << std::endl;
// last command was command number 3045
_testGetCheck(r);
std::cout << "last command was number: 3046 " << std::endl;
// last command was command number 3046
_testGetCheck(r);
std::cout << "last command was number: 3047 " << std::endl;
// last command was command number 3047
_testPrintOpenOrders(r);
std::cout << "last command was number: 3048 " << std::endl;
// last command was command number 3048
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3049" << std::endl;
 // last command was command number 3049
_testSitAtTable(r);
std::cout << "last command was number: 3050 " << std::endl;
// last command was command number 3050
const string items3051[] = {"pro520","bad product!",};
const int itemsNum3051[] = {10,4,};
_testGetOrder(r,2, items3051, itemsNum3051);
std::cerr << "last output should be ERROR from command3051" << std::endl;
 // last command was command number 3051
const string items3052[] = {"pro768","bad product!","pro303",};
const int itemsNum3052[] = {9,2,6,};
_testGetOrder(r,3, items3052, itemsNum3052);
std::cerr << "last output should be ERROR from command3052" << std::endl;
 // last command was command number 3052
const string items3053[] = {"pro279","pro377","pro241",};
const int itemsNum3053[] = {6,1,5,};
_testGetOrder(r,3, items3053, itemsNum3053);
std::cout << "last command was number: 3053 " << std::endl;
// last command was command number 3053
_testAddToWaitList(r,59);
std::cout << "last command was number: 3054 " << std::endl;
// last command was command number 3054
const string items3055[] = {"pro365","pro740","pro7",};
const int itemsNum3055[] = {2,-15,7,};
_testGetOrder(r,-60, items3055, itemsNum3055);
std::cerr << "last output should be ERROR from command3055" << std::endl;
 // last command was command number 3055
_testSitAtTable(r);
std::cout << "last command was number: 3056 " << std::endl;
// last command was command number 3056
_testPrintCheckList(r);
std::cout << "last command was number: 3057 " << std::endl;
// last command was command number 3057
_testAddToWaitList(r,52);
std::cout << "last command was number: 3058 " << std::endl;
// last command was command number 3058
_testGetCheck(r);
std::cout << "last command was number: 3059 " << std::endl;
// last command was command number 3059
_testAddToWaitList(r,68);
std::cout << "last command was number: 3060 " << std::endl;
// last command was command number 3060
_testPrintServedList(r);
std::cout << "last command was number: 3061 " << std::endl;
// last command was command number 3061
_testSitAtTable(r);
std::cout << "last command was number: 3062 " << std::endl;
// last command was command number 3062
const string items3063[] = {"bad product!",};
const int itemsNum3063[] = {4,};
_testGetOrder(r,1, items3063, itemsNum3063);
std::cerr << "last output should be ERROR from command3063" << std::endl;
 // last command was command number 3063
const string items3064[] = {"pro213","pro457",};
const int itemsNum3064[] = {7,3,};
_testGetOrder(r,2, items3064, itemsNum3064);
std::cout << "last command was number: 3064 " << std::endl;
// last command was command number 3064
const string items3065[] = {"pro374","pro947","pro390","pro417","pro248",};
const int itemsNum3065[] = {8,10,10,1,10,};
_testGetOrder(r,5, items3065, itemsNum3065);
std::cout << "last command was number: 3065 " << std::endl;
// last command was command number 3065
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3066" << std::endl;
 // last command was command number 3066
_testGetCheck(r);
std::cout << "last command was number: 3067 " << std::endl;
// last command was command number 3067
_testSitAtTable(r);
std::cout << "last command was number: 3068 " << std::endl;
// last command was command number 3068
_testSitAtTable(r);
std::cout << "last command was number: 3069 " << std::endl;
// last command was command number 3069
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3070" << std::endl;
 // last command was command number 3070
_testSitAtTable(r);
std::cout << "last command was number: 3071 " << std::endl;
// last command was command number 3071
_testSitAtTable(r);
std::cout << "last command was number: 3072 " << std::endl;
// last command was command number 3072
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3073" << std::endl;
 // last command was command number 3073
const string items3074[] = {"pro328","pro733","bad product!",};
const int itemsNum3074[] = {6,7,10,};
_testGetOrder(r,3, items3074, itemsNum3074);
std::cerr << "last output should be ERROR from command3074" << std::endl;
 // last command was command number 3074
const string items3075[] = {"pro956","pro303","pro167","pro100","pro208",};
const int itemsNum3075[] = {8,10,10,10,6,};
_testGetOrder(r,-51, items3075, itemsNum3075);
std::cerr << "last output should be ERROR from command3075" << std::endl;
 // last command was command number 3075
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3076" << std::endl;
 // last command was command number 3076
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3077" << std::endl;
 // last command was command number 3077
const string items3078[] = {"pro988","pro977","pro208","pro740",};
const int itemsNum3078[] = {3,6,9,-30,};
_testGetOrder(r,4, items3078, itemsNum3078);
std::cerr << "last output should be ERROR from command3078" << std::endl;
 // last command was command number 3078
_testGetCheck(r);
std::cout << "last command was number: 3079 " << std::endl;
// last command was command number 3079
const string items3080[] = {"pro736","pro745","pro719","pro230","pro417",};
const int itemsNum3080[] = {4,10,4,4,2,};
_testGetOrder(r,5, items3080, itemsNum3080);
std::cout << "last command was number: 3080 " << std::endl;
// last command was command number 3080
_testPrintCheckList(r);
std::cout << "last command was number: 3081 " << std::endl;
// last command was command number 3081
const string items3082[] = {"bad product!","pro855","pro929",};
const int itemsNum3082[] = {4,-74,7,};
_testGetOrder(r,-24, items3082, itemsNum3082);
std::cerr << "last output should be ERROR from command3082" << std::endl;
 // last command was command number 3082
const string items3083[] = {"bad product!",};
const int itemsNum3083[] = {3,};
_testGetOrder(r,1, items3083, itemsNum3083);
std::cerr << "last output should be ERROR from command3083" << std::endl;
 // last command was command number 3083
const string items3084[] = {"pro137","bad product!","pro912","pro154",};
const int itemsNum3084[] = {-81,6,8,6,};
_testGetOrder(r,4, items3084, itemsNum3084);
std::cerr << "last output should be ERROR from command3084" << std::endl;
 // last command was command number 3084
const string items3085[] = {"pro255","pro184","pro208","pro397","pro929",};
const int itemsNum3085[] = {5,5,10,3,7,};
_testGetOrder(r,-29, items3085, itemsNum3085);
std::cerr << "last output should be ERROR from command3085" << std::endl;
 // last command was command number 3085
_testGetCheck(r);
std::cout << "last command was number: 3086 " << std::endl;
// last command was command number 3086
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3087" << std::endl;
 // last command was command number 3087
_testPrintCheckList(r);
std::cout << "last command was number: 3088 " << std::endl;
// last command was command number 3088
_testSitAtTable(r);
std::cout << "last command was number: 3089 " << std::endl;
// last command was command number 3089
_testGetCheck(r);
std::cout << "last command was number: 3090 " << std::endl;
// last command was command number 3090
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3091" << std::endl;
 // last command was command number 3091
_testGetCheck(r);
std::cout << "last command was number: 3092 " << std::endl;
// last command was command number 3092
_testAddToWaitList(r,78);
std::cout << "last command was number: 3093 " << std::endl;
// last command was command number 3093
_testAddToWaitList(r,77);
std::cout << "last command was number: 3094 " << std::endl;
// last command was command number 3094
_testAddToWaitList(r,77);
std::cout << "last command was number: 3095 " << std::endl;
// last command was command number 3095
_testPrintServedList(r);
std::cout << "last command was number: 3096 " << std::endl;
// last command was command number 3096
const string items3097[] = {"pro457","bad product!",};
const int itemsNum3097[] = {8,8,};
_testGetOrder(r,2, items3097, itemsNum3097);
std::cerr << "last output should be ERROR from command3097" << std::endl;
 // last command was command number 3097
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3098" << std::endl;
 // last command was command number 3098
_testAddToWaitList(r,67);
std::cout << "last command was number: 3099 " << std::endl;
// last command was command number 3099
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3100" << std::endl;
 // last command was command number 3100
const string items3101[] = {"pro703","pro545","pro592","pro757",};
const int itemsNum3101[] = {6,7,6,1,};
_testGetOrder(r,4, items3101, itemsNum3101);
std::cout << "last command was number: 3101 " << std::endl;
// last command was command number 3101
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3102" << std::endl;
 // last command was command number 3102
_testPrintCheckList(r);
std::cout << "last command was number: 3103 " << std::endl;
// last command was command number 3103
const string items3104[] = {"pro6","bad product!","pro294",};
const int itemsNum3104[] = {7,9,6,};
_testGetOrder(r,3, items3104, itemsNum3104);
std::cerr << "last output should be ERROR from command3104" << std::endl;
 // last command was command number 3104
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3105" << std::endl;
 // last command was command number 3105
_testPrintWaitList(r);
std::cout << "last command was number: 3106 " << std::endl;
// last command was command number 3106
_testGetCheck(r);
std::cout << "last command was number: 3107 " << std::endl;
// last command was command number 3107
const string items3108[] = {"pro912","bad product!",};
const int itemsNum3108[] = {6,3,};
_testGetOrder(r,2, items3108, itemsNum3108);
std::cerr << "last output should be ERROR from command3108" << std::endl;
 // last command was command number 3108
_testAddToWaitList(r,53);
std::cout << "last command was number: 3109 " << std::endl;
// last command was command number 3109
_testPrintServedList(r);
std::cout << "last command was number: 3110 " << std::endl;
// last command was command number 3110
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3111" << std::endl;
 // last command was command number 3111
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3112" << std::endl;
 // last command was command number 3112
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3113" << std::endl;
 // last command was command number 3113
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3114" << std::endl;
 // last command was command number 3114
const string items3115[] = {"pro440","pro508","pro208",};
const int itemsNum3115[] = {2,2,10,};
_testGetOrder(r,3, items3115, itemsNum3115);
std::cout << "last command was number: 3115 " << std::endl;
// last command was command number 3115
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3116" << std::endl;
 // last command was command number 3116
_testGetCheck(r);
std::cout << "last command was number: 3117 " << std::endl;
// last command was command number 3117
_testGetCheck(r);
std::cout << "last command was number: 3118 " << std::endl;
// last command was command number 3118
const string items3119[] = {"pro154",};
const int itemsNum3119[] = {5,};
_testGetOrder(r,1, items3119, itemsNum3119);
std::cout << "last command was number: 3119 " << std::endl;
// last command was command number 3119
const string items3120[] = {"pro77","pro136",};
const int itemsNum3120[] = {5,10,};
_testGetOrder(r,-47, items3120, itemsNum3120);
std::cerr << "last output should be ERROR from command3120" << std::endl;
 // last command was command number 3120
const string items3121[] = {"pro872","pro129","bad product!","pro987","pro520",};
const int itemsNum3121[] = {1,7,10,1,1,};
_testGetOrder(r,5, items3121, itemsNum3121);
std::cerr << "last output should be ERROR from command3121" << std::endl;
 // last command was command number 3121
const string items3122[] = {"pro912","pro508","pro713","pro137","pro390",};
const int itemsNum3122[] = {4,2,2,4,7,};
_testGetOrder(r,5, items3122, itemsNum3122);
std::cout << "last command was number: 3122 " << std::endl;
// last command was command number 3122
_testSitAtTable(r);
std::cout << "last command was number: 3123 " << std::endl;
// last command was command number 3123
const string items3124[] = {"pro417","pro129",};
const int itemsNum3124[] = {6,4,};
_testGetOrder(r,-11, items3124, itemsNum3124);
std::cerr << "last output should be ERROR from command3124" << std::endl;
 // last command was command number 3124
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3125" << std::endl;
 // last command was command number 3125
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3126" << std::endl;
 // last command was command number 3126
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3127" << std::endl;
 // last command was command number 3127
const string items3128[] = {"bad product!","pro208","pro303","pro243",};
const int itemsNum3128[] = {9,5,2,1,};
_testGetOrder(r,4, items3128, itemsNum3128);
std::cerr << "last output should be ERROR from command3128" << std::endl;
 // last command was command number 3128
const string items3129[] = {"pro545","pro137",};
const int itemsNum3129[] = {2,4,};
_testGetOrder(r,2, items3129, itemsNum3129);
std::cout << "last command was number: 3129 " << std::endl;
// last command was command number 3129
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3130" << std::endl;
 // last command was command number 3130
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3131" << std::endl;
 // last command was command number 3131
const string items3132[] = {"bad product!",};
const int itemsNum3132[] = {7,};
_testGetOrder(r,1, items3132, itemsNum3132);
std::cerr << "last output should be ERROR from command3132" << std::endl;
 // last command was command number 3132
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3133" << std::endl;
 // last command was command number 3133
_testAddToWaitList(r,77);
std::cout << "last command was number: 3134 " << std::endl;
// last command was command number 3134
_testAddToWaitList(r,95);
std::cout << "last command was number: 3135 " << std::endl;
// last command was command number 3135
const string items3136[] = {"bad product!",};
const int itemsNum3136[] = {2,};
_testGetOrder(r,1, items3136, itemsNum3136);
std::cerr << "last output should be ERROR from command3136" << std::endl;
 // last command was command number 3136
_testGetCheck(r);
std::cout << "last command was number: 3137 " << std::endl;
// last command was command number 3137
const string items3138[] = {"pro374","pro760","pro136","pro100","pro543",};
const int itemsNum3138[] = {4,4,2,10,2,};
_testGetOrder(r,5, items3138, itemsNum3138);
std::cout << "last command was number: 3138 " << std::endl;
// last command was command number 3138
_testSitAtTable(r);
std::cout << "last command was number: 3139 " << std::endl;
// last command was command number 3139
const string items3140[] = {"pro608","pro661","pro351","pro539",};
const int itemsNum3140[] = {10,8,2,6,};
_testGetOrder(r,4, items3140, itemsNum3140);
std::cout << "last command was number: 3140 " << std::endl;
// last command was command number 3140
const string items3141[] = {"pro539","pro240","pro158","pro929","pro745",};
const int itemsNum3141[] = {6,7,-8,1,10,};
_testGetOrder(r,5, items3141, itemsNum3141);
std::cerr << "last output should be ERROR from command3141" << std::endl;
 // last command was command number 3141
_testAddToWaitList(r,61);
std::cout << "last command was number: 3142 " << std::endl;
// last command was command number 3142
_testSitAtTable(r);
std::cout << "last command was number: 3143 " << std::endl;
// last command was command number 3143
const string items3144[] = {"bad product!",};
const int itemsNum3144[] = {7,};
_testGetOrder(r,1, items3144, itemsNum3144);
std::cerr << "last output should be ERROR from command3144" << std::endl;
 // last command was command number 3144
const string items3145[] = {"pro720","pro351","pro746","pro605","bad product!",};
const int itemsNum3145[] = {3,10,9,9,1,};
_testGetOrder(r,5, items3145, itemsNum3145);
std::cerr << "last output should be ERROR from command3145" << std::endl;
 // last command was command number 3145
_testGetCheck(r);
std::cout << "last command was number: 3146 " << std::endl;
// last command was command number 3146
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3147" << std::endl;
 // last command was command number 3147
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3148" << std::endl;
 // last command was command number 3148
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3149" << std::endl;
 // last command was command number 3149
const string items3150[] = {"pro746","pro826","bad product!","pro325",};
const int itemsNum3150[] = {9,7,5,8,};
_testGetOrder(r,4, items3150, itemsNum3150);
std::cerr << "last output should be ERROR from command3150" << std::endl;
 // last command was command number 3150
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3151" << std::endl;
 // last command was command number 3151
_testPrintCheckList(r);
std::cout << "last command was number: 3152 " << std::endl;
// last command was command number 3152
const string items3153[] = {"pro746",};
const int itemsNum3153[] = {-26,};
_testGetOrder(r,1, items3153, itemsNum3153);
std::cerr << "last output should be ERROR from command3153" << std::endl;
 // last command was command number 3153
_testAddToWaitList(r,77);
std::cout << "last command was number: 3154 " << std::endl;
// last command was command number 3154
const string items3155[] = {"pro248","pro912",};
const int itemsNum3155[] = {2,4,};
_testGetOrder(r,2, items3155, itemsNum3155);
std::cout << "last command was number: 3155 " << std::endl;
// last command was command number 3155
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3156" << std::endl;
 // last command was command number 3156
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3157" << std::endl;
 // last command was command number 3157
const string items3158[] = {"bad product!","pro534",};
const int itemsNum3158[] = {3,8,};
_testGetOrder(r,2, items3158, itemsNum3158);
std::cerr << "last output should be ERROR from command3158" << std::endl;
 // last command was command number 3158
const string items3159[] = {"pro240",};
const int itemsNum3159[] = {10,};
_testGetOrder(r,1, items3159, itemsNum3159);
std::cout << "last command was number: 3159 " << std::endl;
// last command was command number 3159
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3160" << std::endl;
 // last command was command number 3160
_testPrintOpenOrders(r);
std::cout << "last command was number: 3161 " << std::endl;
// last command was command number 3161
const string items3162[] = {"pro120","pro253","pro988","bad product!",};
const int itemsNum3162[] = {5,9,8,10,};
_testGetOrder(r,4, items3162, itemsNum3162);
std::cerr << "last output should be ERROR from command3162" << std::endl;
 // last command was command number 3162
const string items3163[] = {"pro375","pro262","pro502","pro605","pro328",};
const int itemsNum3163[] = {9,9,10,3,2,};
_testGetOrder(r,-86, items3163, itemsNum3163);
std::cerr << "last output should be ERROR from command3163" << std::endl;
 // last command was command number 3163
const string items3164[] = {"pro966","pro821","pro303","pro740","pro757",};
const int itemsNum3164[] = {6,5,1,1,8,};
_testGetOrder(r,5, items3164, itemsNum3164);
std::cout << "last command was number: 3164 " << std::endl;
// last command was command number 3164
_testPrintOpenOrders(r);
std::cout << "last command was number: 3165 " << std::endl;
// last command was command number 3165
_testPrintProfits(r);
std::cout << "last command was number: 3166 " << std::endl;
// last command was command number 3166
_testPrintProfits(r);
std::cout << "last command was number: 3167 " << std::endl;
// last command was command number 3167
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3168" << std::endl;
 // last command was command number 3168
_testSitAtTable(r);
std::cout << "last command was number: 3169 " << std::endl;
// last command was command number 3169
const string items3170[] = {"pro895","pro592","pro713",};
const int itemsNum3170[] = {-85,6,8,};
_testGetOrder(r,3, items3170, itemsNum3170);
std::cerr << "last output should be ERROR from command3170" << std::endl;
 // last command was command number 3170
_testSitAtTable(r);
std::cout << "last command was number: 3171 " << std::endl;
// last command was command number 3171
_testAddToWaitList(r,100);
std::cout << "last command was number: 3172 " << std::endl;
// last command was command number 3172
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3173" << std::endl;
 // last command was command number 3173
_testSitAtTable(r);
std::cout << "last command was number: 3174 " << std::endl;
// last command was command number 3174
const string items3175[] = {"pro285","bad product!","pro966","pro417","pro720",};
const int itemsNum3175[] = {8,4,7,3,2,};
_testGetOrder(r,5, items3175, itemsNum3175);
std::cerr << "last output should be ERROR from command3175" << std::endl;
 // last command was command number 3175
_testPrintProfits(r);
std::cout << "last command was number: 3176 " << std::endl;
// last command was command number 3176
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3177" << std::endl;
 // last command was command number 3177
const string items3178[] = {"pro661","bad product!","pro736",};
const int itemsNum3178[] = {7,2,5,};
_testGetOrder(r,3, items3178, itemsNum3178);
std::cerr << "last output should be ERROR from command3178" << std::endl;
 // last command was command number 3178
const string items3179[] = {"pro136","pro255","pro746","bad product!",};
const int itemsNum3179[] = {9,6,4,7,};
_testGetOrder(r,4, items3179, itemsNum3179);
std::cerr << "last output should be ERROR from command3179" << std::endl;
 // last command was command number 3179
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3180" << std::endl;
 // last command was command number 3180
const string items3181[] = {"bad product!","pro592","pro279","pro757","pro137",};
const int itemsNum3181[] = {5,7,1,8,10,};
_testGetOrder(r,5, items3181, itemsNum3181);
std::cerr << "last output should be ERROR from command3181" << std::endl;
 // last command was command number 3181
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3182" << std::endl;
 // last command was command number 3182
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3183" << std::endl;
 // last command was command number 3183
const string items3184[] = {"pro534","bad product!","pro365",};
const int itemsNum3184[] = {7,3,3,};
_testGetOrder(r,3, items3184, itemsNum3184);
std::cerr << "last output should be ERROR from command3184" << std::endl;
 // last command was command number 3184
const string items3185[] = {"pro821","pro661","bad product!",};
const int itemsNum3185[] = {7,9,8,};
_testGetOrder(r,3, items3185, itemsNum3185);
std::cerr << "last output should be ERROR from command3185" << std::endl;
 // last command was command number 3185
const string items3186[] = {"pro240",};
const int itemsNum3186[] = {9,};
_testGetOrder(r,1, items3186, itemsNum3186);
std::cout << "last command was number: 3186 " << std::endl;
// last command was command number 3186
_testSitAtTable(r);
std::cout << "last command was number: 3187 " << std::endl;
// last command was command number 3187
const string items3188[] = {"pro929","pro520","pro969","bad product!",};
const int itemsNum3188[] = {8,8,9,2,};
_testGetOrder(r,4, items3188, itemsNum3188);
std::cerr << "last output should be ERROR from command3188" << std::endl;
 // last command was command number 3188
_testAddToWaitList(r,92);
std::cout << "last command was number: 3189 " << std::endl;
// last command was command number 3189
const string items3190[] = {"bad product!",};
const int itemsNum3190[] = {7,};
_testGetOrder(r,1, items3190, itemsNum3190);
std::cerr << "last output should be ERROR from command3190" << std::endl;
 // last command was command number 3190
const string items3191[] = {"bad product!","pro592","pro375","pro746",};
const int itemsNum3191[] = {5,4,3,10,};
_testGetOrder(r,4, items3191, itemsNum3191);
std::cerr << "last output should be ERROR from command3191" << std::endl;
 // last command was command number 3191
const string items3192[] = {"pro279","pro757","pro702","pro608",};
const int itemsNum3192[] = {2,1,9,9,};
_testGetOrder(r,4, items3192, itemsNum3192);
std::cout << "last command was number: 3192 " << std::endl;
// last command was command number 3192
_testPrintServedList(r);
std::cout << "last command was number: 3193 " << std::endl;
// last command was command number 3193
_testPrintServedList(r);
std::cout << "last command was number: 3194 " << std::endl;
// last command was command number 3194
const string items3195[] = {"pro508","pro148","pro966",};
const int itemsNum3195[] = {6,3,5,};
_testGetOrder(r,3, items3195, itemsNum3195);
std::cout << "last command was number: 3195 " << std::endl;
// last command was command number 3195
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3196" << std::endl;
 // last command was command number 3196
_testGetCheck(r);
std::cout << "last command was number: 3197 " << std::endl;
// last command was command number 3197
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3198" << std::endl;
 // last command was command number 3198
_testPrintWaitList(r);
std::cout << "last command was number: 3199 " << std::endl;
// last command was command number 3199
_testPrintProfits(r);
std::cout << "last command was number: 3200 " << std::endl;
// last command was command number 3200
_testPrintWaitList(r);
std::cout << "last command was number: 3201 " << std::endl;
// last command was command number 3201
const string items3202[] = {"pro720",};
const int itemsNum3202[] = {-59,};
_testGetOrder(r,-67, items3202, itemsNum3202);
std::cerr << "last output should be ERROR from command3202" << std::endl;
 // last command was command number 3202
_testPrintCheckList(r);
std::cout << "last command was number: 3203 " << std::endl;
// last command was command number 3203
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3204" << std::endl;
 // last command was command number 3204
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3205" << std::endl;
 // last command was command number 3205
_testPrintProfits(r);
std::cout << "last command was number: 3206 " << std::endl;
// last command was command number 3206
const string items3207[] = {"pro299","pro167","pro77","pro129",};
const int itemsNum3207[] = {6,3,2,3,};
_testGetOrder(r,-5, items3207, itemsNum3207);
std::cerr << "last output should be ERROR from command3207" << std::endl;
 // last command was command number 3207
_testPrintOpenOrders(r);
std::cout << "last command was number: 3208 " << std::endl;
// last command was command number 3208
_testAddToWaitList(r,69);
std::cout << "last command was number: 3209 " << std::endl;
// last command was command number 3209
const string items3210[] = {"pro255","pro325","pro7","pro402","pro709",};
const int itemsNum3210[] = {9,9,7,5,-61,};
_testGetOrder(r,5, items3210, itemsNum3210);
std::cerr << "last output should be ERROR from command3210" << std::endl;
 // last command was command number 3210
_testPrintProfits(r);
std::cout << "last command was number: 3211 " << std::endl;
// last command was command number 3211
_testAddToWaitList(r,82);
std::cout << "last command was number: 3212 " << std::endl;
// last command was command number 3212
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3213" << std::endl;
 // last command was command number 3213
_testGetCheck(r);
std::cout << "last command was number: 3214 " << std::endl;
// last command was command number 3214
_testSitAtTable(r);
std::cout << "last command was number: 3215 " << std::endl;
// last command was command number 3215
_testAddToWaitList(r,51);
std::cout << "last command was number: 3216 " << std::endl;
// last command was command number 3216
const string items3217[] = {"pro379","pro760","pro855","pro508",};
const int itemsNum3217[] = {9,5,3,8,};
_testGetOrder(r,4, items3217, itemsNum3217);
std::cout << "last command was number: 3217 " << std::endl;
// last command was command number 3217
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3218" << std::endl;
 // last command was command number 3218
const string items3219[] = {"pro255","pro966","pro433",};
const int itemsNum3219[] = {8,9,2,};
_testGetOrder(r,3, items3219, itemsNum3219);
std::cout << "last command was number: 3219 " << std::endl;
// last command was command number 3219
_testGetCheck(r);
std::cout << "last command was number: 3220 " << std::endl;
// last command was command number 3220
const string items3221[] = {"pro330","pro294","pro508","pro440","pro299",};
const int itemsNum3221[] = {-51,4,7,8,1,};
_testGetOrder(r,5, items3221, itemsNum3221);
std::cerr << "last output should be ERROR from command3221" << std::endl;
 // last command was command number 3221
const string items3222[] = {"pro855","pro605","pro154","pro661","pro325",};
const int itemsNum3222[] = {9,8,6,8,10,};
_testGetOrder(r,5, items3222, itemsNum3222);
std::cout << "last command was number: 3222 " << std::endl;
// last command was command number 3222
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3223" << std::endl;
 // last command was command number 3223
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3224" << std::endl;
 // last command was command number 3224
_testGetCheck(r);
std::cout << "last command was number: 3225 " << std::endl;
// last command was command number 3225
const string items3226[] = {"pro534","pro137","pro138","pro402","pro303",};
const int itemsNum3226[] = {8,5,-6,3,4,};
_testGetOrder(r,-56, items3226, itemsNum3226);
std::cerr << "last output should be ERROR from command3226" << std::endl;
 // last command was command number 3226
_testPrintCheckList(r);
std::cout << "last command was number: 3227 " << std::endl;
// last command was command number 3227
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3228" << std::endl;
 // last command was command number 3228
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3229" << std::endl;
 // last command was command number 3229
const string items3230[] = {"pro303",};
const int itemsNum3230[] = {-61,};
_testGetOrder(r,-57, items3230, itemsNum3230);
std::cerr << "last output should be ERROR from command3230" << std::endl;
 // last command was command number 3230
_testGetCheck(r);
std::cout << "last command was number: 3231 " << std::endl;
// last command was command number 3231
const string items3232[] = {"pro158","pro433","pro167","pro397",};
const int itemsNum3232[] = {6,4,2,6,};
_testGetOrder(r,-77, items3232, itemsNum3232);
std::cerr << "last output should be ERROR from command3232" << std::endl;
 // last command was command number 3232
_testPrintCheckList(r);
std::cout << "last command was number: 3233 " << std::endl;
// last command was command number 3233
const string items3234[] = {"pro768","pro335","pro148","pro129","pro929",};
const int itemsNum3234[] = {5,8,2,1,9,};
_testGetOrder(r,5, items3234, itemsNum3234);
std::cerr << "last output should be ERROR from command3234" << std::endl;
 // last command was command number 3234
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3235" << std::endl;
 // last command was command number 3235
_testGetCheck(r);
std::cout << "last command was number: 3236 " << std::endl;
// last command was command number 3236
const string items3237[] = {"pro167",};
const int itemsNum3237[] = {-47,};
_testGetOrder(r,-85, items3237, itemsNum3237);
std::cerr << "last output should be ERROR from command3237" << std::endl;
 // last command was command number 3237
_testPrintOpenOrders(r);
std::cout << "last command was number: 3238 " << std::endl;
// last command was command number 3238
_testSitAtTable(r);
std::cout << "last command was number: 3239 " << std::endl;
// last command was command number 3239
_testPrintTables(r);
std::cout << "last command was number: 3240 " << std::endl;
// last command was command number 3240
const string items3241[] = {"pro977","pro417","pro740","pro381","pro719",};
const int itemsNum3241[] = {5,-66,2,2,6,};
_testGetOrder(r,-2, items3241, itemsNum3241);
std::cerr << "last output should be ERROR from command3241" << std::endl;
 // last command was command number 3241
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3242" << std::endl;
 // last command was command number 3242
const string items3243[] = {"pro595","pro947","pro702","pro253","pro736",};
const int itemsNum3243[] = {7,5,9,9,10,};
_testGetOrder(r,5, items3243, itemsNum3243);
std::cout << "last command was number: 3243 " << std::endl;
// last command was command number 3243
const string items3244[] = {"pro6","pro285",};
const int itemsNum3244[] = {4,2,};
_testGetOrder(r,2, items3244, itemsNum3244);
std::cerr << "last output should be ERROR from command3244" << std::endl;
 // last command was command number 3244
_testGetCheck(r);
std::cout << "last command was number: 3245 " << std::endl;
// last command was command number 3245
_testGetCheck(r);
std::cout << "last command was number: 3246 " << std::endl;
// last command was command number 3246
_testSitAtTable(r);
std::cout << "last command was number: 3247 " << std::endl;
// last command was command number 3247
_testAddToWaitList(r,95);
std::cout << "last command was number: 3248 " << std::endl;
// last command was command number 3248
const string items3249[] = {"bad product!","pro262",};
const int itemsNum3249[] = {7,10,};
_testGetOrder(r,2, items3249, itemsNum3249);
std::cerr << "last output should be ERROR from command3249" << std::endl;
 // last command was command number 3249
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3250" << std::endl;
 // last command was command number 3250
_testPrintOpenOrders(r);
std::cout << "last command was number: 3251 " << std::endl;
// last command was command number 3251
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3252" << std::endl;
 // last command was command number 3252
const string items3253[] = {"bad product!","pro947",};
const int itemsNum3253[] = {7,9,};
_testGetOrder(r,2, items3253, itemsNum3253);
std::cerr << "last output should be ERROR from command3253" << std::endl;
 // last command was command number 3253
const string items3254[] = {"pro491",};
const int itemsNum3254[] = {-76,};
_testGetOrder(r,-54, items3254, itemsNum3254);
std::cerr << "last output should be ERROR from command3254" << std::endl;
 // last command was command number 3254
_testAddToWaitList(r,98);
std::cout << "last command was number: 3255 " << std::endl;
// last command was command number 3255
_testPrintTables(r);
std::cout << "last command was number: 3256 " << std::endl;
// last command was command number 3256
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3257" << std::endl;
 // last command was command number 3257
const string items3258[] = {"pro491","pro956",};
const int itemsNum3258[] = {6,10,};
_testGetOrder(r,-13, items3258, itemsNum3258);
std::cerr << "last output should be ERROR from command3258" << std::endl;
 // last command was command number 3258
_testAddToWaitList(r,52);
std::cout << "last command was number: 3259 " << std::endl;
// last command was command number 3259
_testGetCheck(r);
std::cout << "last command was number: 3260 " << std::endl;
// last command was command number 3260
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3261" << std::endl;
 // last command was command number 3261
const string items3262[] = {"pro243","pro988","pro977",};
const int itemsNum3262[] = {10,6,5,};
_testGetOrder(r,3, items3262, itemsNum3262);
std::cout << "last command was number: 3262 " << std::endl;
// last command was command number 3262
_testPrintTables(r);
std::cout << "last command was number: 3263 " << std::endl;
// last command was command number 3263
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3264" << std::endl;
 // last command was command number 3264
const string items3265[] = {"pro543","pro129","pro138","pro365",};
const int itemsNum3265[] = {3,4,6,8,};
_testGetOrder(r,-52, items3265, itemsNum3265);
std::cerr << "last output should be ERROR from command3265" << std::endl;
 // last command was command number 3265
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3266" << std::endl;
 // last command was command number 3266
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3267" << std::endl;
 // last command was command number 3267
const string items3268[] = {"pro158","pro120",};
const int itemsNum3268[] = {4,3,};
_testGetOrder(r,2, items3268, itemsNum3268);
std::cerr << "last output should be ERROR from command3268" << std::endl;
 // last command was command number 3268
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3269" << std::endl;
 // last command was command number 3269
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3270" << std::endl;
 // last command was command number 3270
_testSitAtTable(r);
std::cout << "last command was number: 3271 " << std::endl;
// last command was command number 3271
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3272" << std::endl;
 // last command was command number 3272
_testAddToWaitList(r,60);
std::cout << "last command was number: 3273 " << std::endl;
// last command was command number 3273
_testGetCheck(r);
std::cout << "last command was number: 3274 " << std::endl;
// last command was command number 3274
_testPrintTables(r);
std::cout << "last command was number: 3275 " << std::endl;
// last command was command number 3275
_testGetCheck(r);
std::cout << "last command was number: 3276 " << std::endl;
// last command was command number 3276
const string items3277[] = {"pro120","pro158","pro137","pro299",};
const int itemsNum3277[] = {3,4,5,3,};
_testGetOrder(r,4, items3277, itemsNum3277);
std::cout << "last command was number: 3277 " << std::endl;
// last command was command number 3277
_testPrintOpenOrders(r);
std::cout << "last command was number: 3278 " << std::endl;
// last command was command number 3278
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3279" << std::endl;
 // last command was command number 3279
const string items3280[] = {"pro381","pro592",};
const int itemsNum3280[] = {6,-21,};
_testGetOrder(r,2, items3280, itemsNum3280);
std::cerr << "last output should be ERROR from command3280" << std::endl;
 // last command was command number 3280
_testPrintTables(r);
std::cout << "last command was number: 3281 " << std::endl;
// last command was command number 3281
_testSitAtTable(r);
std::cout << "last command was number: 3282 " << std::endl;
// last command was command number 3282
const string items3283[] = {"pro709","pro328","pro988","pro720",};
const int itemsNum3283[] = {-65,8,1,5,};
_testGetOrder(r,-56, items3283, itemsNum3283);
std::cerr << "last output should be ERROR from command3283" << std::endl;
 // last command was command number 3283
_testPrintServedList(r);
std::cout << "last command was number: 3284 " << std::endl;
// last command was command number 3284
const string items3285[] = {"pro417",};
const int itemsNum3285[] = {-60,};
_testGetOrder(r,1, items3285, itemsNum3285);
std::cerr << "last output should be ERROR from command3285" << std::endl;
 // last command was command number 3285
const string items3286[] = {"pro720","pro402","pro966","pro138",};
const int itemsNum3286[] = {5,3,9,10,};
_testGetOrder(r,4, items3286, itemsNum3286);
std::cout << "last command was number: 3286 " << std::endl;
// last command was command number 3286
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3287" << std::endl;
 // last command was command number 3287
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3288" << std::endl;
 // last command was command number 3288
const string items3289[] = {"bad product!","pro703","pro534","pro661",};
const int itemsNum3289[] = {9,5,-26,2,};
_testGetOrder(r,4, items3289, itemsNum3289);
std::cerr << "last output should be ERROR from command3289" << std::endl;
 // last command was command number 3289
const string items3290[] = {"pro768","pro417","pro167",};
const int itemsNum3290[] = {6,7,7,};
_testGetOrder(r,3, items3290, itemsNum3290);
std::cerr << "last output should be ERROR from command3290" << std::endl;
 // last command was command number 3290
const string items3291[] = {"pro402","pro417","pro977","pro365","pro240",};
const int itemsNum3291[] = {2,3,10,7,5,};
_testGetOrder(r,-45, items3291, itemsNum3291);
std::cerr << "last output should be ERROR from command3291" << std::endl;
 // last command was command number 3291
const string items3292[] = {"pro502","bad product!","pro988","pro661",};
const int itemsNum3292[] = {6,7,3,8,};
_testGetOrder(r,4, items3292, itemsNum3292);
std::cerr << "last output should be ERROR from command3292" << std::endl;
 // last command was command number 3292
const string items3293[] = {"pro377","bad product!","pro491","pro988",};
const int itemsNum3293[] = {2,10,5,3,};
_testGetOrder(r,-69, items3293, itemsNum3293);
std::cerr << "last output should be ERROR from command3293" << std::endl;
 // last command was command number 3293
_testPrintWaitList(r);
std::cout << "last command was number: 3294 " << std::endl;
// last command was command number 3294
_testAddToWaitList(r,59);
std::cout << "last command was number: 3295 " << std::endl;
// last command was command number 3295
_testSitAtTable(r);
std::cout << "last command was number: 3296 " << std::endl;
// last command was command number 3296
_testPrintCheckList(r);
std::cout << "last command was number: 3297 " << std::endl;
// last command was command number 3297
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3298" << std::endl;
 // last command was command number 3298
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3299" << std::endl;
 // last command was command number 3299
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3300" << std::endl;
 // last command was command number 3300
const string items3301[] = {"pro966",};
const int itemsNum3301[] = {3,};
_testGetOrder(r,1, items3301, itemsNum3301);
std::cout << "last command was number: 3301 " << std::endl;
// last command was command number 3301
_testPrintOpenOrders(r);
std::cout << "last command was number: 3302 " << std::endl;
// last command was command number 3302
_testPrintOpenOrders(r);
std::cout << "last command was number: 3303 " << std::endl;
// last command was command number 3303
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3304" << std::endl;
 // last command was command number 3304
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3305" << std::endl;
 // last command was command number 3305
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3306" << std::endl;
 // last command was command number 3306
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3307" << std::endl;
 // last command was command number 3307
const string items3308[] = {"pro279","pro328","pro746","pro77","pro331",};
const int itemsNum3308[] = {9,10,10,6,10,};
_testGetOrder(r,5, items3308, itemsNum3308);
std::cerr << "last output should be ERROR from command3308" << std::endl;
 // last command was command number 3308
_testPrintServedList(r);
std::cout << "last command was number: 3309 " << std::endl;
// last command was command number 3309
_testPrintProfits(r);
std::cout << "last command was number: 3310 " << std::endl;
// last command was command number 3310
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3311" << std::endl;
 // last command was command number 3311
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3312" << std::endl;
 // last command was command number 3312
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3313" << std::endl;
 // last command was command number 3313
const string items3314[] = {"bad product!",};
const int itemsNum3314[] = {-89,};
_testGetOrder(r,1, items3314, itemsNum3314);
std::cerr << "last output should be ERROR from command3314" << std::endl;
 // last command was command number 3314
const string items3315[] = {"pro77","pro988","pro956",};
const int itemsNum3315[] = {7,-80,10,};
_testGetOrder(r,3, items3315, itemsNum3315);
std::cerr << "last output should be ERROR from command3315" << std::endl;
 // last command was command number 3315
const string items3316[] = {"pro966","pro956","pro855",};
const int itemsNum3316[] = {5,7,-41,};
_testGetOrder(r,3, items3316, itemsNum3316);
std::cerr << "last output should be ERROR from command3316" << std::endl;
 // last command was command number 3316
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3317" << std::endl;
 // last command was command number 3317
_testPrintCheckList(r);
std::cout << "last command was number: 3318 " << std::endl;
// last command was command number 3318
_testPrintServedList(r);
std::cout << "last command was number: 3319 " << std::endl;
// last command was command number 3319
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3320" << std::endl;
 // last command was command number 3320
_testPrintWaitList(r);
std::cout << "last command was number: 3321 " << std::endl;
// last command was command number 3321
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3322" << std::endl;
 // last command was command number 3322
_testSitAtTable(r);
std::cout << "last command was number: 3323 " << std::endl;
// last command was command number 3323
_testAddToWaitList(r,74);
std::cout << "last command was number: 3324 " << std::endl;
// last command was command number 3324
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3325" << std::endl;
 // last command was command number 3325
const string items3326[] = {"pro6","pro241",};
const int itemsNum3326[] = {1,9,};
_testGetOrder(r,2, items3326, itemsNum3326);
std::cout << "last command was number: 3326 " << std::endl;
// last command was command number 3326
_testSitAtTable(r);
std::cout << "last command was number: 3327 " << std::endl;
// last command was command number 3327
_testPrintProfits(r);
std::cout << "last command was number: 3328 " << std::endl;
// last command was command number 3328
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3329" << std::endl;
 // last command was command number 3329
_testPrintCheckList(r);
std::cout << "last command was number: 3330 " << std::endl;
// last command was command number 3330
_testPrintServedList(r);
std::cout << "last command was number: 3331 " << std::endl;
// last command was command number 3331
_testGetCheck(r);
std::cout << "last command was number: 3332 " << std::endl;
// last command was command number 3332
const string items3333[] = {"pro508","pro285",};
const int itemsNum3333[] = {8,8,};
_testGetOrder(r,2, items3333, itemsNum3333);
std::cout << "last command was number: 3333 " << std::endl;
// last command was command number 3333
_testPrintWaitList(r);
std::cout << "last command was number: 3334 " << std::endl;
// last command was command number 3334
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3335" << std::endl;
 // last command was command number 3335
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3336" << std::endl;
 // last command was command number 3336
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3337" << std::endl;
 // last command was command number 3337
_testGetCheck(r);
std::cout << "last command was number: 3338 " << std::endl;
// last command was command number 3338
_testPrintWaitList(r);
std::cout << "last command was number: 3339 " << std::endl;
// last command was command number 3339
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3340" << std::endl;
 // last command was command number 3340
const string items3341[] = {"pro299",};
const int itemsNum3341[] = {4,};
_testGetOrder(r,1, items3341, itemsNum3341);
std::cerr << "last output should be ERROR from command3341" << std::endl;
 // last command was command number 3341
const string items3342[] = {"pro863","pro390","pro375","pro826",};
const int itemsNum3342[] = {7,8,4,1,};
_testGetOrder(r,4, items3342, itemsNum3342);
std::cerr << "last output should be ERROR from command3342" << std::endl;
 // last command was command number 3342
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3343" << std::endl;
 // last command was command number 3343
_testGetCheck(r);
std::cout << "last command was number: 3344 " << std::endl;
// last command was command number 3344
const string items3345[] = {"bad product!","pro895",};
const int itemsNum3345[] = {10,9,};
_testGetOrder(r,2, items3345, itemsNum3345);
std::cerr << "last output should be ERROR from command3345" << std::endl;
 // last command was command number 3345
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3346" << std::endl;
 // last command was command number 3346
_testGetCheck(r);
std::cout << "last command was number: 3347 " << std::endl;
// last command was command number 3347
_testAddToWaitList(r,99);
std::cout << "last command was number: 3348 " << std::endl;
// last command was command number 3348
_testAddToWaitList(r,98);
std::cout << "last command was number: 3349 " << std::endl;
// last command was command number 3349
_testPrintOpenOrders(r);
std::cout << "last command was number: 3350 " << std::endl;
// last command was command number 3350
_testPrintWaitList(r);
std::cout << "last command was number: 3351 " << std::endl;
// last command was command number 3351
_testPrintServedList(r);
std::cout << "last command was number: 3352 " << std::endl;
// last command was command number 3352
const string items3353[] = {"pro719","pro381","pro966","pro508",};
const int itemsNum3353[] = {8,7,-96,7,};
_testGetOrder(r,4, items3353, itemsNum3353);
std::cerr << "last output should be ERROR from command3353" << std::endl;
 // last command was command number 3353
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3354" << std::endl;
 // last command was command number 3354
_testPrintServedList(r);
std::cout << "last command was number: 3355 " << std::endl;
// last command was command number 3355
const string items3356[] = {"pro390","pro377","pro303","pro912","pro575",};
const int itemsNum3356[] = {10,3,4,10,2,};
_testGetOrder(r,5, items3356, itemsNum3356);
std::cerr << "last output should be ERROR from command3356" << std::endl;
 // last command was command number 3356
_testPrintCheckList(r);
std::cout << "last command was number: 3357 " << std::endl;
// last command was command number 3357
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3358" << std::endl;
 // last command was command number 3358
_testSitAtTable(r);
std::cout << "last command was number: 3359 " << std::endl;
// last command was command number 3359
const string items3360[] = {"pro810","pro661","pro201","pro156",};
const int itemsNum3360[] = {8,8,-49,9,};
_testGetOrder(r,4, items3360, itemsNum3360);
std::cerr << "last output should be ERROR from command3360" << std::endl;
 // last command was command number 3360
const string items3361[] = {"pro7","pro379","pro375","pro702",};
const int itemsNum3361[] = {7,5,8,9,};
_testGetOrder(r,4, items3361, itemsNum3361);
std::cout << "last command was number: 3361 " << std::endl;
// last command was command number 3361
_testGetCheck(r);
std::cout << "last command was number: 3362 " << std::endl;
// last command was command number 3362
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3363" << std::endl;
 // last command was command number 3363
_testPrintServedList(r);
std::cout << "last command was number: 3364 " << std::endl;
// last command was command number 3364
_testGetCheck(r);
std::cout << "last command was number: 3365 " << std::endl;
// last command was command number 3365
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3366" << std::endl;
 // last command was command number 3366
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3367" << std::endl;
 // last command was command number 3367
_testGetCheck(r);
std::cout << "last command was number: 3368 " << std::endl;
// last command was command number 3368
_testSitAtTable(r);
std::cout << "last command was number: 3369 " << std::endl;
// last command was command number 3369
_testPrintProfits(r);
std::cout << "last command was number: 3370 " << std::endl;
// last command was command number 3370
const string items3371[] = {"pro760","pro575","pro742",};
const int itemsNum3371[] = {6,7,-75,};
_testGetOrder(r,3, items3371, itemsNum3371);
std::cerr << "last output should be ERROR from command3371" << std::endl;
 // last command was command number 3371
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3372" << std::endl;
 // last command was command number 3372
_testAddToWaitList(r,54);
std::cout << "last command was number: 3373 " << std::endl;
// last command was command number 3373
const string items3374[] = {"pro381",};
const int itemsNum3374[] = {-29,};
_testGetOrder(r,-17, items3374, itemsNum3374);
std::cerr << "last output should be ERROR from command3374" << std::endl;
 // last command was command number 3374
_testPrintOpenOrders(r);
std::cout << "last command was number: 3375 " << std::endl;
// last command was command number 3375
const string items3376[] = {"pro595","pro608","pro736","pro262","pro7",};
const int itemsNum3376[] = {2,1,9,3,3,};
_testGetOrder(r,5, items3376, itemsNum3376);
std::cout << "last command was number: 3376 " << std::endl;
// last command was command number 3376
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3377" << std::endl;
 // last command was command number 3377
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3378" << std::endl;
 // last command was command number 3378
_testPrintOpenOrders(r);
std::cout << "last command was number: 3379 " << std::endl;
// last command was command number 3379
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3380" << std::endl;
 // last command was command number 3380
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3381" << std::endl;
 // last command was command number 3381
_testGetCheck(r);
std::cout << "last command was number: 3382 " << std::endl;
// last command was command number 3382
_testSitAtTable(r);
std::cout << "last command was number: 3383 " << std::endl;
// last command was command number 3383
const string items3384[] = {"pro539","pro543","pro208",};
const int itemsNum3384[] = {6,2,8,};
_testGetOrder(r,3, items3384, itemsNum3384);
std::cout << "last command was number: 3384 " << std::endl;
// last command was command number 3384
_testSitAtTable(r);
std::cout << "last command was number: 3385 " << std::endl;
// last command was command number 3385
_testPrintProfits(r);
std::cout << "last command was number: 3386 " << std::endl;
// last command was command number 3386
_testPrintOpenOrders(r);
std::cout << "last command was number: 3387 " << std::endl;
// last command was command number 3387
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3388" << std::endl;
 // last command was command number 3388
const string items3389[] = {"pro608","pro575","pro768","pro520","pro733",};
const int itemsNum3389[] = {9,10,9,6,-83,};
_testGetOrder(r,5, items3389, itemsNum3389);
std::cerr << "last output should be ERROR from command3389" << std::endl;
 // last command was command number 3389
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3390" << std::endl;
 // last command was command number 3390
const string items3391[] = {"pro695","pro331","bad product!",};
const int itemsNum3391[] = {1,1,7,};
_testGetOrder(r,3, items3391, itemsNum3391);
std::cerr << "last output should be ERROR from command3391" << std::endl;
 // last command was command number 3391
const string items3392[] = {"pro863","pro129","pro262","pro502","pro575",};
const int itemsNum3392[] = {-19,3,4,1,9,};
_testGetOrder(r,5, items3392, itemsNum3392);
std::cerr << "last output should be ERROR from command3392" << std::endl;
 // last command was command number 3392
_testPrintProfits(r);
std::cout << "last command was number: 3393 " << std::endl;
// last command was command number 3393
const string items3394[] = {"bad product!","pro746",};
const int itemsNum3394[] = {2,3,};
_testGetOrder(r,2, items3394, itemsNum3394);
std::cerr << "last output should be ERROR from command3394" << std::endl;
 // last command was command number 3394
const string items3395[] = {"pro365","pro285","pro243","pro713",};
const int itemsNum3395[] = {2,-31,10,2,};
_testGetOrder(r,4, items3395, itemsNum3395);
std::cerr << "last output should be ERROR from command3395" << std::endl;
 // last command was command number 3395
const string items3396[] = {"bad product!","pro328","pro156",};
const int itemsNum3396[] = {8,5,3,};
_testGetOrder(r,3, items3396, itemsNum3396);
std::cerr << "last output should be ERROR from command3396" << std::endl;
 // last command was command number 3396
_testSitAtTable(r);
std::cout << "last command was number: 3397 " << std::endl;
// last command was command number 3397
_testPrintServedList(r);
std::cout << "last command was number: 3398 " << std::endl;
// last command was command number 3398
const string items3399[] = {"pro230","pro262","pro148","pro863","bad product!",};
const int itemsNum3399[] = {3,8,10,6,7,};
_testGetOrder(r,5, items3399, itemsNum3399);
std::cerr << "last output should be ERROR from command3399" << std::endl;
 // last command was command number 3399
_testSitAtTable(r);
std::cout << "last command was number: 3400 " << std::endl;
// last command was command number 3400
_testAddToWaitList(r,57);
std::cout << "last command was number: 3401 " << std::endl;
// last command was command number 3401
const string items3402[] = {"bad product!","pro736",};
const int itemsNum3402[] = {1,5,};
_testGetOrder(r,2, items3402, itemsNum3402);
std::cerr << "last output should be ERROR from command3402" << std::endl;
 // last command was command number 3402
_testAddToWaitList(r,70);
std::cout << "last command was number: 3403 " << std::endl;
// last command was command number 3403
const string items3404[] = {"pro137","pro325",};
const int itemsNum3404[] = {7,-9,};
_testGetOrder(r,2, items3404, itemsNum3404);
std::cerr << "last output should be ERROR from command3404" << std::endl;
 // last command was command number 3404
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3405" << std::endl;
 // last command was command number 3405
const string items3406[] = {"pro331","bad product!","pro230","pro740","pro201",};
const int itemsNum3406[] = {5,-97,8,5,4,};
_testGetOrder(r,5, items3406, itemsNum3406);
std::cerr << "last output should be ERROR from command3406" << std::endl;
 // last command was command number 3406
_testAddToWaitList(r,71);
std::cout << "last command was number: 3407 " << std::endl;
// last command was command number 3407
_testAddToWaitList(r,70);
std::cout << "last command was number: 3408 " << std::endl;
// last command was command number 3408
const string items3409[] = {"pro695",};
const int itemsNum3409[] = {3,};
_testGetOrder(r,1, items3409, itemsNum3409);
std::cout << "last command was number: 3409 " << std::endl;
// last command was command number 3409
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3410" << std::endl;
 // last command was command number 3410
_testPrintCheckList(r);
std::cout << "last command was number: 3411 " << std::endl;
// last command was command number 3411
const string items3412[] = {"pro956","bad product!","pro397","pro7","pro821",};
const int itemsNum3412[] = {8,6,10,7,10,};
_testGetOrder(r,5, items3412, itemsNum3412);
std::cerr << "last output should be ERROR from command3412" << std::endl;
 // last command was command number 3412
_testAddToWaitList(r,99);
std::cout << "last command was number: 3413 " << std::endl;
// last command was command number 3413
_testSitAtTable(r);
std::cout << "last command was number: 3414 " << std::endl;
// last command was command number 3414
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3415" << std::endl;
 // last command was command number 3415
const string items3416[] = {"pro703","pro335","pro158","pro543","bad product!",};
const int itemsNum3416[] = {10,5,10,9,8,};
_testGetOrder(r,5, items3416, itemsNum3416);
std::cerr << "last output should be ERROR from command3416" << std::endl;
 // last command was command number 3416
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3417" << std::endl;
 // last command was command number 3417
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3418" << std::endl;
 // last command was command number 3418
_testPrintProfits(r);
std::cout << "last command was number: 3419 " << std::endl;
// last command was command number 3419
_testPrintProfits(r);
std::cout << "last command was number: 3420 " << std::endl;
// last command was command number 3420
_testPrintWaitList(r);
std::cout << "last command was number: 3421 " << std::endl;
// last command was command number 3421
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3422" << std::endl;
 // last command was command number 3422
const string items3423[] = {"pro605","pro988",};
const int itemsNum3423[] = {5,6,};
_testGetOrder(r,2, items3423, itemsNum3423);
std::cout << "last command was number: 3423 " << std::endl;
// last command was command number 3423
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3424" << std::endl;
 // last command was command number 3424
_testGetCheck(r);
std::cout << "last command was number: 3425 " << std::endl;
// last command was command number 3425
_testSitAtTable(r);
std::cout << "last command was number: 3426 " << std::endl;
// last command was command number 3426
const string items3427[] = {"pro545","pro810","pro543","pro595","pro138",};
const int itemsNum3427[] = {6,10,10,8,1,};
_testGetOrder(r,5, items3427, itemsNum3427);
std::cout << "last command was number: 3427 " << std::endl;
// last command was command number 3427
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3428" << std::endl;
 // last command was command number 3428
const string items3429[] = {"pro375","bad product!","pro740",};
const int itemsNum3429[] = {9,7,6,};
_testGetOrder(r,3, items3429, itemsNum3429);
std::cerr << "last output should be ERROR from command3429" << std::endl;
 // last command was command number 3429
const string items3430[] = {"pro959",};
const int itemsNum3430[] = {-19,};
_testGetOrder(r,1, items3430, itemsNum3430);
std::cerr << "last output should be ERROR from command3430" << std::endl;
 // last command was command number 3430
const string items3431[] = {"pro230","bad product!",};
const int itemsNum3431[] = {10,5,};
_testGetOrder(r,2, items3431, itemsNum3431);
std::cerr << "last output should be ERROR from command3431" << std::endl;
 // last command was command number 3431
_testAddToWaitList(r,99);
std::cout << "last command was number: 3432 " << std::endl;
// last command was command number 3432
_testPrintServedList(r);
std::cout << "last command was number: 3433 " << std::endl;
// last command was command number 3433
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3434" << std::endl;
 // last command was command number 3434
const string items3435[] = {"bad product!",};
const int itemsNum3435[] = {4,};
_testGetOrder(r,1, items3435, itemsNum3435);
std::cerr << "last output should be ERROR from command3435" << std::endl;
 // last command was command number 3435
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3436" << std::endl;
 // last command was command number 3436
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3437" << std::endl;
 // last command was command number 3437
const string items3438[] = {"pro709","pro742",};
const int itemsNum3438[] = {8,7,};
_testGetOrder(r,2, items3438, itemsNum3438);
std::cout << "last command was number: 3438 " << std::endl;
// last command was command number 3438
const string items3439[] = {"pro397","pro535","pro872","pro379",};
const int itemsNum3439[] = {-7,5,10,9,};
_testGetOrder(r,4, items3439, itemsNum3439);
std::cerr << "last output should be ERROR from command3439" << std::endl;
 // last command was command number 3439
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3440" << std::endl;
 // last command was command number 3440
const string items3441[] = {"pro440","pro733","pro592","bad product!","pro736",};
const int itemsNum3441[] = {10,7,1,8,-24,};
_testGetOrder(r,-55, items3441, itemsNum3441);
std::cerr << "last output should be ERROR from command3441" << std::endl;
 // last command was command number 3441
_testGetCheck(r);
std::cout << "last command was number: 3442 " << std::endl;
// last command was command number 3442
const string items3443[] = {"pro377",};
const int itemsNum3443[] = {10,};
_testGetOrder(r,-83, items3443, itemsNum3443);
std::cerr << "last output should be ERROR from command3443" << std::endl;
 // last command was command number 3443
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3444" << std::endl;
 // last command was command number 3444
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3445" << std::endl;
 // last command was command number 3445
const string items3446[] = {"bad product!",};
const int itemsNum3446[] = {4,};
_testGetOrder(r,1, items3446, itemsNum3446);
std::cerr << "last output should be ERROR from command3446" << std::endl;
 // last command was command number 3446
_testAddToWaitList(r,65);
std::cout << "last command was number: 3447 " << std::endl;
// last command was command number 3447
_testGetCheck(r);
std::cout << "last command was number: 3448 " << std::endl;
// last command was command number 3448
_testPrintTables(r);
std::cout << "last command was number: 3449 " << std::endl;
// last command was command number 3449
const string items3450[] = {"pro736",};
const int itemsNum3450[] = {2,};
_testGetOrder(r,-82, items3450, itemsNum3450);
std::cerr << "last output should be ERROR from command3450" << std::endl;
 // last command was command number 3450
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3451" << std::endl;
 // last command was command number 3451
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3452" << std::endl;
 // last command was command number 3452
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3453" << std::endl;
 // last command was command number 3453
_testSitAtTable(r);
std::cout << "last command was number: 3454 " << std::endl;
// last command was command number 3454
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3455" << std::endl;
 // last command was command number 3455
const string items3456[] = {"bad product!","pro768","pro351","pro810",};
const int itemsNum3456[] = {9,8,1,1,};
_testGetOrder(r,-2, items3456, itemsNum3456);
std::cerr << "last output should be ERROR from command3456" << std::endl;
 // last command was command number 3456
const string items3457[] = {"pro740","pro7",};
const int itemsNum3457[] = {2,9,};
_testGetOrder(r,2, items3457, itemsNum3457);
std::cout << "last command was number: 3457 " << std::endl;
// last command was command number 3457
const string items3458[] = {"pro299","pro826","pro167","pro279",};
const int itemsNum3458[] = {2,7,1,6,};
_testGetOrder(r,-92, items3458, itemsNum3458);
std::cerr << "last output should be ERROR from command3458" << std::endl;
 // last command was command number 3458
_testPrintWaitList(r);
std::cout << "last command was number: 3459 " << std::endl;
// last command was command number 3459
_testAddToWaitList(r,93);
std::cout << "last command was number: 3460 " << std::endl;
// last command was command number 3460
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3461" << std::endl;
 // last command was command number 3461
const string items3462[] = {"pro248","pro377","pro702","pro100",};
const int itemsNum3462[] = {-14,9,3,6,};
_testGetOrder(r,4, items3462, itemsNum3462);
std::cerr << "last output should be ERROR from command3462" << std::endl;
 // last command was command number 3462
_testGetCheck(r);
std::cout << "last command was number: 3463 " << std::endl;
// last command was command number 3463
const string items3464[] = {"bad product!","pro154","pro433",};
const int itemsNum3464[] = {7,-85,10,};
_testGetOrder(r,3, items3464, itemsNum3464);
std::cerr << "last output should be ERROR from command3464" << std::endl;
 // last command was command number 3464
const string items3465[] = {"pro241","pro520","pro240","pro417","pro648",};
const int itemsNum3465[] = {4,1,7,8,6,};
_testGetOrder(r,-14, items3465, itemsNum3465);
std::cerr << "last output should be ERROR from command3465" << std::endl;
 // last command was command number 3465
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3466" << std::endl;
 // last command was command number 3466
_testGetCheck(r);
std::cout << "last command was number: 3467 " << std::endl;
// last command was command number 3467
_testPrintTables(r);
std::cout << "last command was number: 3468 " << std::endl;
// last command was command number 3468
_testPrintServedList(r);
std::cout << "last command was number: 3469 " << std::endl;
// last command was command number 3469
const string items3470[] = {"pro213","pro156","pro595","pro661",};
const int itemsNum3470[] = {3,-97,2,8,};
_testGetOrder(r,4, items3470, itemsNum3470);
std::cerr << "last output should be ERROR from command3470" << std::endl;
 // last command was command number 3470
_testAddToWaitList(r,83);
std::cout << "last command was number: 3471 " << std::endl;
// last command was command number 3471
_testAddToWaitList(r,92);
std::cout << "last command was number: 3472 " << std::endl;
// last command was command number 3472
const string items3473[] = {"pro535","pro855",};
const int itemsNum3473[] = {3,5,};
_testGetOrder(r,-22, items3473, itemsNum3473);
std::cerr << "last output should be ERROR from command3473" << std::endl;
 // last command was command number 3473
const string items3474[] = {"bad product!","pro402","pro821",};
const int itemsNum3474[] = {6,1,9,};
_testGetOrder(r,3, items3474, itemsNum3474);
std::cerr << "last output should be ERROR from command3474" << std::endl;
 // last command was command number 3474
_testGetCheck(r);
std::cout << "last command was number: 3475 " << std::endl;
// last command was command number 3475
const string items3476[] = {"pro402","pro148","pro742","bad product!","pro760",};
const int itemsNum3476[] = {4,7,1,10,8,};
_testGetOrder(r,5, items3476, itemsNum3476);
std::cerr << "last output should be ERROR from command3476" << std::endl;
 // last command was command number 3476
_testSitAtTable(r);
std::cout << "last command was number: 3477 " << std::endl;
// last command was command number 3477
_testPrintOpenOrders(r);
std::cout << "last command was number: 3478 " << std::endl;
// last command was command number 3478
const string items3479[] = {"bad product!",};
const int itemsNum3479[] = {2,};
_testGetOrder(r,1, items3479, itemsNum3479);
std::cerr << "last output should be ERROR from command3479" << std::endl;
 // last command was command number 3479
_testSitAtTable(r);
std::cout << "last command was number: 3480 " << std::endl;
// last command was command number 3480
_testSitAtTable(r);
std::cout << "last command was number: 3481 " << std::endl;
// last command was command number 3481
const string items3482[] = {"pro253",};
const int itemsNum3482[] = {4,};
_testGetOrder(r,1, items3482, itemsNum3482);
std::cout << "last command was number: 3482 " << std::endl;
// last command was command number 3482
const string items3483[] = {"pro508","pro184",};
const int itemsNum3483[] = {8,7,};
_testGetOrder(r,2, items3483, itemsNum3483);
std::cout << "last command was number: 3483 " << std::endl;
// last command was command number 3483
_testSitAtTable(r);
std::cout << "last command was number: 3484 " << std::endl;
// last command was command number 3484
_testGetCheck(r);
std::cout << "last command was number: 3485 " << std::endl;
// last command was command number 3485
_testAddToWaitList(r,83);
std::cout << "last command was number: 3486 " << std::endl;
// last command was command number 3486
_testPrintOpenOrders(r);
std::cout << "last command was number: 3487 " << std::endl;
// last command was command number 3487
const string items3488[] = {"pro330","pro981","pro285",};
const int itemsNum3488[] = {5,9,10,};
_testGetOrder(r,3, items3488, itemsNum3488);
std::cout << "last command was number: 3488 " << std::endl;
// last command was command number 3488
const string items3489[] = {"pro365","bad product!",};
const int itemsNum3489[] = {9,9,};
_testGetOrder(r,2, items3489, itemsNum3489);
std::cerr << "last output should be ERROR from command3489" << std::endl;
 // last command was command number 3489
_testAddToWaitList(r,56);
std::cout << "last command was number: 3490 " << std::endl;
// last command was command number 3490
const string items3491[] = {"pro988","pro417","pro539",};
const int itemsNum3491[] = {10,8,6,};
_testGetOrder(r,3, items3491, itemsNum3491);
std::cout << "last command was number: 3491 " << std::endl;
// last command was command number 3491
_testPrintTables(r);
std::cout << "last command was number: 3492 " << std::endl;
// last command was command number 3492
const string items3493[] = {"bad product!",};
const int itemsNum3493[] = {2,};
_testGetOrder(r,1, items3493, itemsNum3493);
std::cerr << "last output should be ERROR from command3493" << std::endl;
 // last command was command number 3493
const string items3494[] = {"pro713","pro255",};
const int itemsNum3494[] = {3,10,};
_testGetOrder(r,-55, items3494, itemsNum3494);
std::cerr << "last output should be ERROR from command3494" << std::endl;
 // last command was command number 3494
const string items3495[] = {"pro374","pro390",};
const int itemsNum3495[] = {8,8,};
_testGetOrder(r,-74, items3495, itemsNum3495);
std::cerr << "last output should be ERROR from command3495" << std::endl;
 // last command was command number 3495
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3496" << std::endl;
 // last command was command number 3496
_testGetCheck(r);
std::cout << "last command was number: 3497 " << std::endl;
// last command was command number 3497
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3498" << std::endl;
 // last command was command number 3498
const string items3499[] = {"bad product!","pro746",};
const int itemsNum3499[] = {5,6,};
_testGetOrder(r,2, items3499, itemsNum3499);
std::cerr << "last output should be ERROR from command3499" << std::endl;
 // last command was command number 3499
_testAddToWaitList(r,50);
std::cout << "last command was number: 3500 " << std::endl;
// last command was command number 3500
_testGetCheck(r);
std::cout << "last command was number: 3501 " << std::endl;
// last command was command number 3501
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3502" << std::endl;
 // last command was command number 3502
const string items3503[] = {"pro745","bad product!","pro230",};
const int itemsNum3503[] = {10,2,4,};
_testGetOrder(r,3, items3503, itemsNum3503);
std::cerr << "last output should be ERROR from command3503" << std::endl;
 // last command was command number 3503
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3504" << std::endl;
 // last command was command number 3504
_testGetCheck(r);
std::cout << "last command was number: 3505 " << std::endl;
// last command was command number 3505
const string items3506[] = {"pro648","pro826","pro7","pro760",};
const int itemsNum3506[] = {6,3,9,7,};
_testGetOrder(r,4, items3506, itemsNum3506);
std::cout << "last command was number: 3506 " << std::endl;
// last command was command number 3506
_testGetCheck(r);
std::cout << "last command was number: 3507 " << std::endl;
// last command was command number 3507
const string items3508[] = {"bad product!","pro713",};
const int itemsNum3508[] = {8,5,};
_testGetOrder(r,2, items3508, itemsNum3508);
std::cerr << "last output should be ERROR from command3508" << std::endl;
 // last command was command number 3508
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3509" << std::endl;
 // last command was command number 3509
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3510" << std::endl;
 // last command was command number 3510
_testGetCheck(r);
std::cout << "last command was number: 3511 " << std::endl;
// last command was command number 3511
const string items3512[] = {"bad product!","pro491",};
const int itemsNum3512[] = {8,-42,};
_testGetOrder(r,2, items3512, itemsNum3512);
std::cerr << "last output should be ERROR from command3512" << std::endl;
 // last command was command number 3512
_testGetCheck(r);
std::cout << "last command was number: 3513 " << std::endl;
// last command was command number 3513
_testGetCheck(r);
std::cout << "last command was number: 3514 " << std::endl;
// last command was command number 3514
_testGetCheck(r);
std::cout << "last command was number: 3515 " << std::endl;
// last command was command number 3515
const string items3516[] = {"pro294","pro491",};
const int itemsNum3516[] = {3,4,};
_testGetOrder(r,2, items3516, itemsNum3516);
std::cerr << "last output should be ERROR from command3516" << std::endl;
 // last command was command number 3516
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3517" << std::endl;
 // last command was command number 3517
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3518" << std::endl;
 // last command was command number 3518
const string items3519[] = {"pro987","pro374","pro713","pro575","pro77",};
const int itemsNum3519[] = {8,5,8,4,8,};
_testGetOrder(r,-37, items3519, itemsNum3519);
std::cerr << "last output should be ERROR from command3519" << std::endl;
 // last command was command number 3519
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3520" << std::endl;
 // last command was command number 3520
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3521" << std::endl;
 // last command was command number 3521
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3522" << std::endl;
 // last command was command number 3522
_testPrintCheckList(r);
std::cout << "last command was number: 3523 " << std::endl;
// last command was command number 3523
_testAddToWaitList(r,68);
std::cout << "last command was number: 3524 " << std::endl;
// last command was command number 3524
const string items3525[] = {"pro736","pro605","pro895",};
const int itemsNum3525[] = {3,7,5,};
_testGetOrder(r,-93, items3525, itemsNum3525);
std::cerr << "last output should be ERROR from command3525" << std::endl;
 // last command was command number 3525
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3526" << std::endl;
 // last command was command number 3526
const string items3527[] = {"pro508","pro768","pro713","pro377","pro240",};
const int itemsNum3527[] = {6,9,5,5,4,};
_testGetOrder(r,-8, items3527, itemsNum3527);
std::cerr << "last output should be ERROR from command3527" << std::endl;
 // last command was command number 3527
_testAddToWaitList(r,72);
std::cout << "last command was number: 3528 " << std::endl;
// last command was command number 3528
_testPrintServedList(r);
std::cout << "last command was number: 3529 " << std::endl;
// last command was command number 3529
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3530" << std::endl;
 // last command was command number 3530
const string items3531[] = {"pro508","pro592",};
const int itemsNum3531[] = {4,4,};
_testGetOrder(r,2, items3531, itemsNum3531);
std::cerr << "last output should be ERROR from command3531" << std::endl;
 // last command was command number 3531
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3532" << std::endl;
 // last command was command number 3532
_testPrintOpenOrders(r);
std::cout << "last command was number: 3533 " << std::endl;
// last command was command number 3533
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3534" << std::endl;
 // last command was command number 3534
const string items3535[] = {"pro253","pro136","pro154","pro381","pro148",};
const int itemsNum3535[] = {1,8,2,4,5,};
_testGetOrder(r,-40, items3535, itemsNum3535);
std::cerr << "last output should be ERROR from command3535" << std::endl;
 // last command was command number 3535
const string items3536[] = {"bad product!",};
const int itemsNum3536[] = {3,};
_testGetOrder(r,-45, items3536, itemsNum3536);
std::cerr << "last output should be ERROR from command3536" << std::endl;
 // last command was command number 3536
const string items3537[] = {"pro262","pro987",};
const int itemsNum3537[] = {7,5,};
_testGetOrder(r,2, items3537, itemsNum3537);
std::cerr << "last output should be ERROR from command3537" << std::endl;
 // last command was command number 3537
_testPrintWaitList(r);
std::cout << "last command was number: 3538 " << std::endl;
// last command was command number 3538
const string items3539[] = {"pro303","pro6",};
const int itemsNum3539[] = {7,8,};
_testGetOrder(r,-13, items3539, itemsNum3539);
std::cerr << "last output should be ERROR from command3539" << std::endl;
 // last command was command number 3539
const string items3540[] = {"pro534","bad product!","pro137","pro6","pro713",};
const int itemsNum3540[] = {8,5,6,5,1,};
_testGetOrder(r,-63, items3540, itemsNum3540);
std::cerr << "last output should be ERROR from command3540" << std::endl;
 // last command was command number 3540
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3541" << std::endl;
 // last command was command number 3541
const string items3542[] = {"pro661",};
const int itemsNum3542[] = {-11,};
_testGetOrder(r,-20, items3542, itemsNum3542);
std::cerr << "last output should be ERROR from command3542" << std::endl;
 // last command was command number 3542
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3543" << std::endl;
 // last command was command number 3543
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3544" << std::endl;
 // last command was command number 3544
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3545" << std::endl;
 // last command was command number 3545
const string items3546[] = {"pro457","pro977","pro148","pro535",};
const int itemsNum3546[] = {2,4,7,7,};
_testGetOrder(r,4, items3546, itemsNum3546);
std::cerr << "last output should be ERROR from command3546" << std::endl;
 // last command was command number 3546
const string items3547[] = {"pro745","pro253","pro720",};
const int itemsNum3547[] = {8,2,6,};
_testGetOrder(r,3, items3547, itemsNum3547);
std::cerr << "last output should be ERROR from command3547" << std::endl;
 // last command was command number 3547
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3548" << std::endl;
 // last command was command number 3548
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3549" << std::endl;
 // last command was command number 3549
const string items3550[] = {"pro241",};
const int itemsNum3550[] = {8,};
_testGetOrder(r,-5, items3550, itemsNum3550);
std::cerr << "last output should be ERROR from command3550" << std::endl;
 // last command was command number 3550
_testPrintOpenOrders(r);
std::cout << "last command was number: 3551 " << std::endl;
// last command was command number 3551
const string items3552[] = {"pro895",};
const int itemsNum3552[] = {-30,};
_testGetOrder(r,1, items3552, itemsNum3552);
std::cerr << "last output should be ERROR from command3552" << std::endl;
 // last command was command number 3552
_testPrintOpenOrders(r);
std::cout << "last command was number: 3553 " << std::endl;
// last command was command number 3553
_testPrintWaitList(r);
std::cout << "last command was number: 3554 " << std::endl;
// last command was command number 3554
const string items3555[] = {"pro929","pro959","pro702","pro534","pro325",};
const int itemsNum3555[] = {4,9,7,1,7,};
_testGetOrder(r,5, items3555, itemsNum3555);
std::cerr << "last output should be ERROR from command3555" << std::endl;
 // last command was command number 3555
const string items3556[] = {"pro543",};
const int itemsNum3556[] = {-52,};
_testGetOrder(r,-83, items3556, itemsNum3556);
std::cerr << "last output should be ERROR from command3556" << std::endl;
 // last command was command number 3556
const string items3557[] = {"pro331","pro535","pro575",};
const int itemsNum3557[] = {-20,3,1,};
_testGetOrder(r,-30, items3557, itemsNum3557);
std::cerr << "last output should be ERROR from command3557" << std::endl;
 // last command was command number 3557
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3558" << std::endl;
 // last command was command number 3558
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3559" << std::endl;
 // last command was command number 3559
_testSitAtTable(r);
std::cout << "last command was number: 3560 " << std::endl;
// last command was command number 3560
const string items3561[] = {"pro137","pro863","bad product!","pro947","pro6",};
const int itemsNum3561[] = {7,4,5,3,10,};
_testGetOrder(r,5, items3561, itemsNum3561);
std::cerr << "last output should be ERROR from command3561" << std::endl;
 // last command was command number 3561
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3562" << std::endl;
 // last command was command number 3562
const string items3563[] = {"pro381","pro213","pro440","pro379","pro713",};
const int itemsNum3563[] = {7,1,10,5,10,};
_testGetOrder(r,5, items3563, itemsNum3563);
std::cout << "last command was number: 3563 " << std::endl;
// last command was command number 3563
const string items3564[] = {"pro757","pro129","pro742","pro379","pro719",};
const int itemsNum3564[] = {9,1,-73,10,6,};
_testGetOrder(r,5, items3564, itemsNum3564);
std::cerr << "last output should be ERROR from command3564" << std::endl;
 // last command was command number 3564
const string items3565[] = {"pro768","pro592","pro959","pro977","pro539",};
const int itemsNum3565[] = {7,3,7,1,4,};
_testGetOrder(r,-99, items3565, itemsNum3565);
std::cerr << "last output should be ERROR from command3565" << std::endl;
 // last command was command number 3565
const string items3566[] = {"pro158","pro154",};
const int itemsNum3566[] = {9,2,};
_testGetOrder(r,2, items3566, itemsNum3566);
std::cerr << "last output should be ERROR from command3566" << std::endl;
 // last command was command number 3566
_testAddToWaitList(r,68);
std::cout << "last command was number: 3567 " << std::endl;
// last command was command number 3567
_testAddToWaitList(r,92);
std::cout << "last command was number: 3568 " << std::endl;
// last command was command number 3568
const string items3569[] = {"pro966","pro595","pro328","pro248",};
const int itemsNum3569[] = {6,1,10,1,};
_testGetOrder(r,4, items3569, itemsNum3569);
std::cerr << "last output should be ERROR from command3569" << std::endl;
 // last command was command number 3569
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3570" << std::endl;
 // last command was command number 3570
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3571" << std::endl;
 // last command was command number 3571
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3572" << std::endl;
 // last command was command number 3572
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3573" << std::endl;
 // last command was command number 3573
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3574" << std::endl;
 // last command was command number 3574
const string items3575[] = {"pro810","bad product!","pro863",};
const int itemsNum3575[] = {5,5,2,};
_testGetOrder(r,-92, items3575, itemsNum3575);
std::cerr << "last output should be ERROR from command3575" << std::endl;
 // last command was command number 3575
_testAddToWaitList(r,72);
std::cout << "last command was number: 3576 " << std::endl;
// last command was command number 3576
_testGetCheck(r);
std::cout << "last command was number: 3577 " << std::endl;
// last command was command number 3577
_testPrintProfits(r);
std::cout << "last command was number: 3578 " << std::endl;
// last command was command number 3578
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3579" << std::endl;
 // last command was command number 3579
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3580" << std::endl;
 // last command was command number 3580
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3581" << std::endl;
 // last command was command number 3581
_testSitAtTable(r);
std::cout << "last command was number: 3582 " << std::endl;
// last command was command number 3582
const string items3583[] = {"pro417","pro402","pro733","pro374",};
const int itemsNum3583[] = {7,10,2,4,};
_testGetOrder(r,4, items3583, itemsNum3583);
std::cout << "last command was number: 3583 " << std::endl;
// last command was command number 3583
_testSitAtTable(r);
std::cout << "last command was number: 3584 " << std::endl;
// last command was command number 3584
const string items3585[] = {"pro720","pro377","pro148","pro255",};
const int itemsNum3585[] = {3,7,1,8,};
_testGetOrder(r,4, items3585, itemsNum3585);
std::cout << "last command was number: 3585 " << std::endl;
// last command was command number 3585
_testAddToWaitList(r,75);
std::cout << "last command was number: 3586 " << std::endl;
// last command was command number 3586
_testPrintCheckList(r);
std::cout << "last command was number: 3587 " << std::endl;
// last command was command number 3587
const string items3588[] = {"pro826","pro148","pro535","pro821","pro545",};
const int itemsNum3588[] = {9,4,6,9,7,};
_testGetOrder(r,5, items3588, itemsNum3588);
std::cerr << "last output should be ERROR from command3588" << std::endl;
 // last command was command number 3588
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3589" << std::endl;
 // last command was command number 3589
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3590" << std::endl;
 // last command was command number 3590
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3591" << std::endl;
 // last command was command number 3591
_testAddToWaitList(r,51);
std::cout << "last command was number: 3592 " << std::endl;
// last command was command number 3592
const string items3593[] = {"pro661","pro299",};
const int itemsNum3593[] = {10,9,};
_testGetOrder(r,2, items3593, itemsNum3593);
std::cerr << "last output should be ERROR from command3593" << std::endl;
 // last command was command number 3593
_testSitAtTable(r);
std::cout << "last command was number: 3594 " << std::endl;
// last command was command number 3594
_testPrintWaitList(r);
std::cout << "last command was number: 3595 " << std::endl;
// last command was command number 3595
_testPrintTables(r);
std::cout << "last command was number: 3596 " << std::endl;
// last command was command number 3596
_testPrintTables(r);
std::cout << "last command was number: 3597 " << std::endl;
// last command was command number 3597
_testPrintOpenOrders(r);
std::cout << "last command was number: 3598 " << std::endl;
// last command was command number 3598
_testSitAtTable(r);
std::cout << "last command was number: 3599 " << std::endl;
// last command was command number 3599
const string items3600[] = {"pro374","pro605",};
const int itemsNum3600[] = {-91,1,};
_testGetOrder(r,2, items3600, itemsNum3600);
std::cerr << "last output should be ERROR from command3600" << std::endl;
 // last command was command number 3600
_testPrintOpenOrders(r);
std::cout << "last command was number: 3601 " << std::endl;
// last command was command number 3601
_testGetCheck(r);
std::cout << "last command was number: 3602 " << std::endl;
// last command was command number 3602
_testSitAtTable(r);
std::cout << "last command was number: 3603 " << std::endl;
// last command was command number 3603
_testSitAtTable(r);
std::cout << "last command was number: 3604 " << std::endl;
// last command was command number 3604
const string items3605[] = {"pro956","pro129","pro742","pro120","pro855",};
const int itemsNum3605[] = {8,10,7,8,9,};
_testGetOrder(r,5, items3605, itemsNum3605);
std::cout << "last command was number: 3605 " << std::endl;
// last command was command number 3605
const string items3606[] = {"bad product!","pro810",};
const int itemsNum3606[] = {4,4,};
_testGetOrder(r,2, items3606, itemsNum3606);
std::cerr << "last output should be ERROR from command3606" << std::endl;
 // last command was command number 3606
_testPrintProfits(r);
std::cout << "last command was number: 3607 " << std::endl;
// last command was command number 3607
_testGetCheck(r);
std::cout << "last command was number: 3608 " << std::endl;
// last command was command number 3608
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3609" << std::endl;
 // last command was command number 3609
const string items3610[] = {"pro138","pro390","pro956","bad product!","pro397",};
const int itemsNum3610[] = {7,7,4,4,4,};
_testGetOrder(r,5, items3610, itemsNum3610);
std::cerr << "last output should be ERROR from command3610" << std::endl;
 // last command was command number 3610
_testSitAtTable(r);
std::cout << "last command was number: 3611 " << std::endl;
// last command was command number 3611
_testPrintCheckList(r);
std::cout << "last command was number: 3612 " << std::endl;
// last command was command number 3612
const string items3613[] = {"pro303","bad product!","pro248","pro956",};
const int itemsNum3613[] = {8,3,7,4,};
_testGetOrder(r,4, items3613, itemsNum3613);
std::cerr << "last output should be ERROR from command3613" << std::endl;
 // last command was command number 3613
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3614" << std::endl;
 // last command was command number 3614
_testAddToWaitList(r,71);
std::cout << "last command was number: 3615 " << std::endl;
// last command was command number 3615
_testGetCheck(r);
std::cout << "last command was number: 3616 " << std::endl;
// last command was command number 3616
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3617" << std::endl;
 // last command was command number 3617
_testPrintTables(r);
std::cout << "last command was number: 3618 " << std::endl;
// last command was command number 3618
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3619" << std::endl;
 // last command was command number 3619
_testPrintProfits(r);
std::cout << "last command was number: 3620 " << std::endl;
// last command was command number 3620
_testPrintCheckList(r);
std::cout << "last command was number: 3621 " << std::endl;
// last command was command number 3621
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3622" << std::endl;
 // last command was command number 3622
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3623" << std::endl;
 // last command was command number 3623
_testPrintWaitList(r);
std::cout << "last command was number: 3624 " << std::endl;
// last command was command number 3624
const string items3625[] = {"pro746","pro605",};
const int itemsNum3625[] = {-32,6,};
_testGetOrder(r,2, items3625, itemsNum3625);
std::cerr << "last output should be ERROR from command3625" << std::endl;
 // last command was command number 3625
_testGetCheck(r);
std::cerr << "last output should be ERROR from command3626" << std::endl;
 // last command was command number 3626
_testPrintWaitList(r);
std::cout << "last command was number: 3627 " << std::endl;
// last command was command number 3627
const string items3628[] = {"pro508","pro977",};
const int itemsNum3628[] = {2,4,};
_testGetOrder(r,2, items3628, itemsNum3628);
std::cout << "last command was number: 3628 " << std::endl;
// last command was command number 3628
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3629" << std::endl;
 // last command was command number 3629
const string items3630[] = {"pro720","pro768","pro760",};
const int itemsNum3630[] = {1,-20,10,};
_testGetOrder(r,3, items3630, itemsNum3630);
std::cerr << "last output should be ERROR from command3630" << std::endl;
 // last command was command number 3630
_testPrintProfits(r);
std::cout << "last command was number: 3631 " << std::endl;
// last command was command number 3631
const string items3632[] = {"bad product!",};
const int itemsNum3632[] = {8,};
_testGetOrder(r,1, items3632, itemsNum3632);
std::cerr << "last output should be ERROR from command3632" << std::endl;
 // last command was command number 3632
const string items3633[] = {"pro520","pro285",};
const int itemsNum3633[] = {3,7,};
_testGetOrder(r,-47, items3633, itemsNum3633);
std::cerr << "last output should be ERROR from command3633" << std::endl;
 // last command was command number 3633
_testSitAtTable(r);
std::cout << "last command was number: 3634 " << std::endl;
// last command was command number 3634
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3635" << std::endl;
 // last command was command number 3635
const string items3636[] = {"pro969","pro929","pro294","pro365","bad product!",};
const int itemsNum3636[] = {1,10,4,3,6,};
_testGetOrder(r,5, items3636, itemsNum3636);
std::cerr << "last output should be ERROR from command3636" << std::endl;
 // last command was command number 3636
_testPrintServedList(r);
std::cout << "last command was number: 3637 " << std::endl;
// last command was command number 3637
const string items3638[] = {"pro575","pro539","pro742",};
const int itemsNum3638[] = {8,10,1,};
_testGetOrder(r,3, items3638, itemsNum3638);
std::cout << "last command was number: 3638 " << std::endl;
// last command was command number 3638
const string items3639[] = {"pro742","pro969",};
const int itemsNum3639[] = {9,-100,};
_testGetOrder(r,-50, items3639, itemsNum3639);
std::cerr << "last output should be ERROR from command3639" << std::endl;
 // last command was command number 3639
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3640" << std::endl;
 // last command was command number 3640
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3641" << std::endl;
 // last command was command number 3641
_testPrintProfits(r);
std::cout << "last command was number: 3642 " << std::endl;
// last command was command number 3642
_testAddToWaitList(r,90);
std::cout << "last command was number: 3643 " << std::endl;
// last command was command number 3643
_testPrintTables(r);
std::cout << "last command was number: 3644 " << std::endl;
// last command was command number 3644
const string items3645[] = {"pro402",};
const int itemsNum3645[] = {1,};
_testGetOrder(r,1, items3645, itemsNum3645);
std::cout << "last command was number: 3645 " << std::endl;
// last command was command number 3645
const string items3646[] = {"pro299","pro241","pro417","pro303",};
const int itemsNum3646[] = {6,8,2,6,};
_testGetOrder(r,4, items3646, itemsNum3646);
std::cout << "last command was number: 3646 " << std::endl;
// last command was command number 3646
_testAddToWaitList(r,96);
std::cout << "last command was number: 3647 " << std::endl;
// last command was command number 3647
_testPrintOpenOrders(r);
std::cout << "last command was number: 3648 " << std::endl;
// last command was command number 3648
_testSitAtTable(r);
std::cout << "last command was number: 3649 " << std::endl;
// last command was command number 3649
const string items3650[] = {"pro325","pro981","pro457","pro648",};
const int itemsNum3650[] = {5,9,-78,10,};
_testGetOrder(r,4, items3650, itemsNum3650);
std::cerr << "last output should be ERROR from command3650" << std::endl;
 // last command was command number 3650
const string items3651[] = {"pro702","pro855","pro895","pro863","pro713",};
const int itemsNum3651[] = {3,-73,8,10,4,};
_testGetOrder(r,-3, items3651, itemsNum3651);
std::cerr << "last output should be ERROR from command3651" << std::endl;
 // last command was command number 3651
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3652" << std::endl;
 // last command was command number 3652
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3653" << std::endl;
 // last command was command number 3653
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3654" << std::endl;
 // last command was command number 3654
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3655" << std::endl;
 // last command was command number 3655
const string items3656[] = {"bad product!",};
const int itemsNum3656[] = {9,};
_testGetOrder(r,-22, items3656, itemsNum3656);
std::cerr << "last output should be ERROR from command3656" << std::endl;
 // last command was command number 3656
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3657" << std::endl;
 // last command was command number 3657
_testSitAtTable(r);
std::cout << "last command was number: 3658 " << std::endl;
// last command was command number 3658
_testGetCheck(r);
std::cout << "last command was number: 3659 " << std::endl;
// last command was command number 3659
_testPrintOpenOrders(r);
std::cout << "last command was number: 3660 " << std::endl;
// last command was command number 3660
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3661" << std::endl;
 // last command was command number 3661
_testPrintOpenOrders(r);
std::cout << "last command was number: 3662 " << std::endl;
// last command was command number 3662
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3663" << std::endl;
 // last command was command number 3663
_testGetCheck(r);
std::cout << "last command was number: 3664 " << std::endl;
// last command was command number 3664
_testAddToWaitList(r,64);
std::cout << "last command was number: 3665 " << std::endl;
// last command was command number 3665
const string items3666[] = {"bad product!","pro7","pro417",};
const int itemsNum3666[] = {1,10,10,};
_testGetOrder(r,3, items3666, itemsNum3666);
std::cerr << "last output should be ERROR from command3666" << std::endl;
 // last command was command number 3666
const string items3667[] = {"bad product!","pro148","pro433","pro6",};
const int itemsNum3667[] = {6,6,7,9,};
_testGetOrder(r,4, items3667, itemsNum3667);
std::cerr << "last output should be ERROR from command3667" << std::endl;
 // last command was command number 3667
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3668" << std::endl;
 // last command was command number 3668
const string items3669[] = {"pro156","pro285","pro703","bad product!",};
const int itemsNum3669[] = {7,7,3,6,};
_testGetOrder(r,4, items3669, itemsNum3669);
std::cerr << "last output should be ERROR from command3669" << std::endl;
 // last command was command number 3669
_testPrintTables(r);
std::cout << "last command was number: 3670 " << std::endl;
// last command was command number 3670
_testPrintProfits(r);
std::cout << "last command was number: 3671 " << std::endl;
// last command was command number 3671
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3672" << std::endl;
 // last command was command number 3672
const string items3673[] = {"pro158","pro742","pro929","pro279","pro285",};
const int itemsNum3673[] = {9,6,5,7,7,};
_testGetOrder(r,5, items3673, itemsNum3673);
std::cout << "last command was number: 3673 " << std::endl;
// last command was command number 3673
_testSitAtTable(r);
std::cout << "last command was number: 3674 " << std::endl;
// last command was command number 3674
_testPrintProfits(r);
std::cout << "last command was number: 3675 " << std::endl;
// last command was command number 3675
const string items3676[] = {"pro895","pro959","pro433","pro720","bad product!",};
const int itemsNum3676[] = {5,6,6,9,10,};
_testGetOrder(r,5, items3676, itemsNum3676);
std::cerr << "last output should be ERROR from command3676" << std::endl;
 // last command was command number 3676
_testSitAtTable(r);
std::cout << "last command was number: 3677 " << std::endl;
// last command was command number 3677
const string items3678[] = {"pro966",};
const int itemsNum3678[] = {2,};
_testGetOrder(r,1, items3678, itemsNum3678);
std::cout << "last command was number: 3678 " << std::endl;
// last command was command number 3678
_testPrintCheckList(r);
std::cout << "last command was number: 3679 " << std::endl;
// last command was command number 3679
const string items3680[] = {"pro575","pro595","bad product!",};
const int itemsNum3680[] = {4,6,8,};
_testGetOrder(r,-84, items3680, itemsNum3680);
std::cerr << "last output should be ERROR from command3680" << std::endl;
 // last command was command number 3680
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3681" << std::endl;
 // last command was command number 3681
const string items3682[] = {"pro702","pro872","pro253","pro969","pro7",};
const int itemsNum3682[] = {2,6,9,2,10,};
_testGetOrder(r,5, items3682, itemsNum3682);
std::cout << "last command was number: 3682 " << std::endl;
// last command was command number 3682
_testPrintServedList(r);
std::cout << "last command was number: 3683 " << std::endl;
// last command was command number 3683
_testPrintCheckList(r);
std::cout << "last command was number: 3684 " << std::endl;
// last command was command number 3684
_testPrintProfits(r);
std::cout << "last command was number: 3685 " << std::endl;
// last command was command number 3685
const string items3686[] = {"pro7","pro695","pro100",};
const int itemsNum3686[] = {4,3,4,};
_testGetOrder(r,3, items3686, itemsNum3686);
std::cout << "last command was number: 3686 " << std::endl;
// last command was command number 3686
_testPrintWaitList(r);
std::cout << "last command was number: 3687 " << std::endl;
// last command was command number 3687
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3688" << std::endl;
 // last command was command number 3688
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3689" << std::endl;
 // last command was command number 3689
const string items3690[] = {"pro374","pro433","bad product!",};
const int itemsNum3690[] = {10,4,2,};
_testGetOrder(r,3, items3690, itemsNum3690);
std::cerr << "last output should be ERROR from command3690" << std::endl;
 // last command was command number 3690
const string items3691[] = {"pro397","pro535","bad product!",};
const int itemsNum3691[] = {8,6,8,};
_testGetOrder(r,3, items3691, itemsNum3691);
std::cerr << "last output should be ERROR from command3691" << std::endl;
 // last command was command number 3691
_testSitAtTable(r);
std::cout << "last command was number: 3692 " << std::endl;
// last command was command number 3692
_testGetCheck(r);
std::cout << "last command was number: 3693 " << std::endl;
// last command was command number 3693
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3694" << std::endl;
 // last command was command number 3694
_testPrintTables(r);
std::cout << "last command was number: 3695 " << std::endl;
// last command was command number 3695
const string items3696[] = {"pro520","pro184","pro100","pro377","pro608",};
const int itemsNum3696[] = {3,10,6,6,3,};
_testGetOrder(r,-70, items3696, itemsNum3696);
std::cerr << "last output should be ERROR from command3696" << std::endl;
 // last command was command number 3696
_testAddToWaitList(r,50);
std::cout << "last command was number: 3697 " << std::endl;
// last command was command number 3697
const string items3698[] = {"bad product!","pro535","pro241","pro740",};
const int itemsNum3698[] = {8,8,6,3,};
_testGetOrder(r,4, items3698, itemsNum3698);
std::cerr << "last output should be ERROR from command3698" << std::endl;
 // last command was command number 3698
_testPrintWaitList(r);
std::cout << "last command was number: 3699 " << std::endl;
// last command was command number 3699
_testPrintWaitList(r);
std::cout << "last command was number: 3700 " << std::endl;
// last command was command number 3700
_testPrintCheckList(r);
std::cout << "last command was number: 3701 " << std::endl;
// last command was command number 3701
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3702" << std::endl;
 // last command was command number 3702
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3703" << std::endl;
 // last command was command number 3703
const string items3704[] = {"pro381","pro987","pro959","pro136","bad product!",};
const int itemsNum3704[] = {2,5,1,4,1,};
_testGetOrder(r,5, items3704, itemsNum3704);
std::cerr << "last output should be ERROR from command3704" << std::endl;
 // last command was command number 3704
_testPrintTables(r);
std::cout << "last command was number: 3705 " << std::endl;
// last command was command number 3705
_testPrintOpenOrders(r);
std::cout << "last command was number: 3706 " << std::endl;
// last command was command number 3706
const string items3707[] = {"pro136","pro167","bad product!","pro137",};
const int itemsNum3707[] = {5,5,1,4,};
_testGetOrder(r,4, items3707, itemsNum3707);
std::cerr << "last output should be ERROR from command3707" << std::endl;
 // last command was command number 3707
_testAddToWaitList(r,92);
std::cout << "last command was number: 3708 " << std::endl;
// last command was command number 3708
const string items3709[] = {"pro520",};
const int itemsNum3709[] = {5,};
_testGetOrder(r,1, items3709, itemsNum3709);
std::cout << "last command was number: 3709 " << std::endl;
// last command was command number 3709
_testAddToWaitList(r,100);
std::cout << "last command was number: 3710 " << std::endl;
// last command was command number 3710
_testPrintOpenOrders(r);
std::cout << "last command was number: 3711 " << std::endl;
// last command was command number 3711
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3712" << std::endl;
 // last command was command number 3712
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3713" << std::endl;
 // last command was command number 3713
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3714" << std::endl;
 // last command was command number 3714
_testPrintOpenOrders(r);
std::cout << "last command was number: 3715 " << std::endl;
// last command was command number 3715
_testAddToWaitList(r,53);
std::cout << "last command was number: 3716 " << std::endl;
// last command was command number 3716
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3717" << std::endl;
 // last command was command number 3717
const string items3718[] = {"pro156","bad product!","pro374","pro988","pro253",};
const int itemsNum3718[] = {1,10,10,8,2,};
_testGetOrder(r,5, items3718, itemsNum3718);
std::cerr << "last output should be ERROR from command3718" << std::endl;
 // last command was command number 3718
_testSitAtTable(r);
std::cout << "last command was number: 3719 " << std::endl;
// last command was command number 3719
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3720" << std::endl;
 // last command was command number 3720
_testPrintServedList(r);
std::cout << "last command was number: 3721 " << std::endl;
// last command was command number 3721
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3722" << std::endl;
 // last command was command number 3722
_testAddToWaitList(r,78);
std::cout << "last command was number: 3723 " << std::endl;
// last command was command number 3723
const string items3724[] = {"pro595",};
const int itemsNum3724[] = {9,};
_testGetOrder(r,1, items3724, itemsNum3724);
std::cout << "last command was number: 3724 " << std::endl;
// last command was command number 3724
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3725" << std::endl;
 // last command was command number 3725
const string items3726[] = {"bad product!",};
const int itemsNum3726[] = {7,};
_testGetOrder(r,1, items3726, itemsNum3726);
std::cerr << "last output should be ERROR from command3726" << std::endl;
 // last command was command number 3726
_testPrintWaitList(r);
std::cout << "last command was number: 3727 " << std::endl;
// last command was command number 3727
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3728" << std::endl;
 // last command was command number 3728
const string items3729[] = {"bad product!","pro648",};
const int itemsNum3729[] = {10,-75,};
_testGetOrder(r,2, items3729, itemsNum3729);
std::cerr << "last output should be ERROR from command3729" << std::endl;
 // last command was command number 3729
const string items3730[] = {"pro768","pro148","pro6","pro929",};
const int itemsNum3730[] = {9,4,7,3,};
_testGetOrder(r,-9, items3730, itemsNum3730);
std::cerr << "last output should be ERROR from command3730" << std::endl;
 // last command was command number 3730
_testPrintWaitList(r);
std::cout << "last command was number: 3731 " << std::endl;
// last command was command number 3731
_testSitAtTable(r);
std::cout << "last command was number: 3732 " << std::endl;
// last command was command number 3732
const string items3733[] = {"bad product!",};
const int itemsNum3733[] = {2,};
_testGetOrder(r,1, items3733, itemsNum3733);
std::cerr << "last output should be ERROR from command3733" << std::endl;
 // last command was command number 3733
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3734" << std::endl;
 // last command was command number 3734
const string items3735[] = {"pro508","pro733",};
const int itemsNum3735[] = {4,10,};
_testGetOrder(r,-1, items3735, itemsNum3735);
std::cerr << "last output should be ERROR from command3735" << std::endl;
 // last command was command number 3735
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3736" << std::endl;
 // last command was command number 3736
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3737" << std::endl;
 // last command was command number 3737
const string items3738[] = {"pro285","pro810","bad product!","pro595","pro661",};
const int itemsNum3738[] = {9,8,2,1,4,};
_testGetOrder(r,5, items3738, itemsNum3738);
std::cerr << "last output should be ERROR from command3738" << std::endl;
 // last command was command number 3738
const string items3739[] = {"pro402",};
const int itemsNum3739[] = {1,};
_testGetOrder(r,-17, items3739, itemsNum3739);
std::cerr << "last output should be ERROR from command3739" << std::endl;
 // last command was command number 3739
_testSitAtTable(r);
std::cout << "last command was number: 3740 " << std::endl;
// last command was command number 3740
const string items3741[] = {"pro208","pro608","pro746","pro987","pro397",};
const int itemsNum3741[] = {2,1,7,8,1,};
_testGetOrder(r,5, items3741, itemsNum3741);
std::cout << "last command was number: 3741 " << std::endl;
// last command was command number 3741
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3742" << std::endl;
 // last command was command number 3742
_testSitAtTable(r);
std::cout << "last command was number: 3743 " << std::endl;
// last command was command number 3743
_testPrintCheckList(r);
std::cout << "last command was number: 3744 " << std::endl;
// last command was command number 3744
_testGetCheck(r);
std::cout << "last command was number: 3745 " << std::endl;
// last command was command number 3745
_testAddToWaitList(r,81);
std::cout << "last command was number: 3746 " << std::endl;
// last command was command number 3746
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3747" << std::endl;
 // last command was command number 3747
_testSitAtTable(r);
std::cout << "last command was number: 3748 " << std::endl;
// last command was command number 3748
_testGetCheck(r);
std::cout << "last command was number: 3749 " << std::endl;
// last command was command number 3749
const string items3750[] = {"pro520","pro397","pro872","pro7","pro719",};
const int itemsNum3750[] = {7,5,1,6,5,};
_testGetOrder(r,-20, items3750, itemsNum3750);
std::cerr << "last output should be ERROR from command3750" << std::endl;
 // last command was command number 3750
_testAddToWaitList(r,91);
std::cout << "last command was number: 3751 " << std::endl;
// last command was command number 3751
_testGetCheck(r);
std::cout << "last command was number: 3752 " << std::endl;
// last command was command number 3752
const string items3753[] = {"pro397","pro262","pro592",};
const int itemsNum3753[] = {2,8,6,};
_testGetOrder(r,-54, items3753, itemsNum3753);
std::cerr << "last output should be ERROR from command3753" << std::endl;
 // last command was command number 3753
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3754" << std::endl;
 // last command was command number 3754
const string items3755[] = {"bad product!","pro969","pro77","pro608","pro742",};
const int itemsNum3755[] = {2,7,4,6,4,};
_testGetOrder(r,5, items3755, itemsNum3755);
std::cerr << "last output should be ERROR from command3755" << std::endl;
 // last command was command number 3755
_testGetCheck(r);
std::cout << "last command was number: 3756 " << std::endl;
// last command was command number 3756
const string items3757[] = {"pro167","pro595","pro740","pro720",};
const int itemsNum3757[] = {8,1,6,-66,};
_testGetOrder(r,4, items3757, itemsNum3757);
std::cerr << "last output should be ERROR from command3757" << std::endl;
 // last command was command number 3757
const string items3758[] = {"pro136",};
const int itemsNum3758[] = {6,};
_testGetOrder(r,1, items3758, itemsNum3758);
std::cout << "last command was number: 3758 " << std::endl;
// last command was command number 3758
const string items3759[] = {"pro136","pro248","pro768","pro966","pro253",};
const int itemsNum3759[] = {5,6,1,10,2,};
_testGetOrder(r,5, items3759, itemsNum3759);
std::cout << "last command was number: 3759 " << std::endl;
// last command was command number 3759
_testPrintOpenOrders(r);
std::cout << "last command was number: 3760 " << std::endl;
// last command was command number 3760
_testAddToWaitList(r,60);
std::cout << "last command was number: 3761 " << std::endl;
// last command was command number 3761
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3762" << std::endl;
 // last command was command number 3762
const string items3763[] = {"bad product!","pro592",};
const int itemsNum3763[] = {6,1,};
_testGetOrder(r,2, items3763, itemsNum3763);
std::cerr << "last output should be ERROR from command3763" << std::endl;
 // last command was command number 3763
_testSitAtTable(r);
std::cout << "last command was number: 3764 " << std::endl;
// last command was command number 3764
_testAddToWaitList(r,69);
std::cout << "last command was number: 3765 " << std::endl;
// last command was command number 3765
const string items3766[] = {"pro330","pro956","pro279","pro365","pro733",};
const int itemsNum3766[] = {5,10,4,10,10,};
_testGetOrder(r,5, items3766, itemsNum3766);
std::cout << "last command was number: 3766 " << std::endl;
// last command was command number 3766
_testAddToWaitList(r,88);
std::cout << "last command was number: 3767 " << std::endl;
// last command was command number 3767
_testAddToWaitList(r,96);
std::cout << "last command was number: 3768 " << std::endl;
// last command was command number 3768
_testAddToWaitList(r,76);
std::cout << "last command was number: 3769 " << std::endl;
// last command was command number 3769
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3770" << std::endl;
 // last command was command number 3770
const string items3771[] = {"pro7","pro240",};
const int itemsNum3771[] = {8,10,};
_testGetOrder(r,2, items3771, itemsNum3771);
std::cout << "last command was number: 3771 " << std::endl;
// last command was command number 3771
const string items3772[] = {"pro745","pro543","bad product!",};
const int itemsNum3772[] = {7,-17,5,};
_testGetOrder(r,3, items3772, itemsNum3772);
std::cerr << "last output should be ERROR from command3772" << std::endl;
 // last command was command number 3772
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3773" << std::endl;
 // last command was command number 3773
_testGetCheck(r);
std::cout << "last command was number: 3774 " << std::endl;
// last command was command number 3774
_testPrintOpenOrders(r);
std::cout << "last command was number: 3775 " << std::endl;
// last command was command number 3775
_testSitAtTable(r);
std::cout << "last command was number: 3776 " << std::endl;
// last command was command number 3776
_testSitAtTable(r);
std::cout << "last command was number: 3777 " << std::endl;
// last command was command number 3777
const string items3778[] = {"pro592","pro201","pro100","pro285",};
const int itemsNum3778[] = {5,3,6,1,};
_testGetOrder(r,4, items3778, itemsNum3778);
std::cout << "last command was number: 3778 " << std::endl;
// last command was command number 3778
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3779" << std::endl;
 // last command was command number 3779
const string items3780[] = {"pro138","pro129",};
const int itemsNum3780[] = {7,6,};
_testGetOrder(r,-66, items3780, itemsNum3780);
std::cerr << "last output should be ERROR from command3780" << std::endl;
 // last command was command number 3780
const string items3781[] = {"pro137",};
const int itemsNum3781[] = {-45,};
_testGetOrder(r,-65, items3781, itemsNum3781);
std::cerr << "last output should be ERROR from command3781" << std::endl;
 // last command was command number 3781
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3782" << std::endl;
 // last command was command number 3782
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3783" << std::endl;
 // last command was command number 3783
_testPrintServedList(r);
std::cout << "last command was number: 3784 " << std::endl;
// last command was command number 3784
const string items3785[] = {"pro539","pro381",};
const int itemsNum3785[] = {7,1,};
_testGetOrder(r,2, items3785, itemsNum3785);
std::cout << "last command was number: 3785 " << std::endl;
// last command was command number 3785
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3786" << std::endl;
 // last command was command number 3786
const string items3787[] = {"pro294","bad product!",};
const int itemsNum3787[] = {8,7,};
_testGetOrder(r,2, items3787, itemsNum3787);
std::cerr << "last output should be ERROR from command3787" << std::endl;
 // last command was command number 3787
const string items3788[] = {"pro719","pro303",};
const int itemsNum3788[] = {3,7,};
_testGetOrder(r,2, items3788, itemsNum3788);
std::cout << "last command was number: 3788 " << std::endl;
// last command was command number 3788
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3789" << std::endl;
 // last command was command number 3789
_testPrintCheckList(r);
std::cout << "last command was number: 3790 " << std::endl;
// last command was command number 3790
_testSitAtTable(r);
std::cout << "last command was number: 3791 " << std::endl;
// last command was command number 3791
_testSitAtTable(r);
std::cout << "last command was number: 3792 " << std::endl;
// last command was command number 3792
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3793" << std::endl;
 // last command was command number 3793
const string items3794[] = {"pro230","pro575","pro736","pro6",};
const int itemsNum3794[] = {8,3,10,8,};
_testGetOrder(r,-63, items3794, itemsNum3794);
std::cerr << "last output should be ERROR from command3794" << std::endl;
 // last command was command number 3794
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3795" << std::endl;
 // last command was command number 3795
_testGetCheck(r);
std::cout << "last command was number: 3796 " << std::endl;
// last command was command number 3796
const string items3797[] = {"pro294",};
const int itemsNum3797[] = {1,};
_testGetOrder(r,1, items3797, itemsNum3797);
std::cout << "last command was number: 3797 " << std::endl;
// last command was command number 3797
_testPrintServedList(r);
std::cout << "last command was number: 3798 " << std::endl;
// last command was command number 3798
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3799" << std::endl;
 // last command was command number 3799
_testPrintOpenOrders(r);
std::cout << "last command was number: 3800 " << std::endl;
// last command was command number 3800
_testGetCheck(r);
std::cout << "last command was number: 3801 " << std::endl;
// last command was command number 3801
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3802" << std::endl;
 // last command was command number 3802
const string items3803[] = {"pro351",};
const int itemsNum3803[] = {7,};
_testGetOrder(r,1, items3803, itemsNum3803);
std::cout << "last command was number: 3803 " << std::endl;
// last command was command number 3803
_testGetCheck(r);
std::cout << "last command was number: 3804 " << std::endl;
// last command was command number 3804
_testGetCheck(r);
std::cout << "last command was number: 3805 " << std::endl;
// last command was command number 3805
_testPrintServedList(r);
std::cout << "last command was number: 3806 " << std::endl;
// last command was command number 3806
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3807" << std::endl;
 // last command was command number 3807
_testAddToWaitList(r,57);
std::cout << "last command was number: 3808 " << std::endl;
// last command was command number 3808
const string items3809[] = {"pro760","pro184","pro912","pro969",};
const int itemsNum3809[] = {5,6,6,9,};
_testGetOrder(r,-61, items3809, itemsNum3809);
std::cerr << "last output should be ERROR from command3809" << std::endl;
 // last command was command number 3809
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3810" << std::endl;
 // last command was command number 3810
_testAddToWaitList(r,74);
std::cout << "last command was number: 3811 " << std::endl;
// last command was command number 3811
_testAddToWaitList(r,100);
std::cout << "last command was number: 3812 " << std::endl;
// last command was command number 3812
_testAddToWaitList(r,58);
std::cout << "last command was number: 3813 " << std::endl;
// last command was command number 3813
const string items3814[] = {"pro433","pro402","pro821",};
const int itemsNum3814[] = {4,4,8,};
_testGetOrder(r,-66, items3814, itemsNum3814);
std::cerr << "last output should be ERROR from command3814" << std::endl;
 // last command was command number 3814
_testPrintProfits(r);
std::cout << "last command was number: 3815 " << std::endl;
// last command was command number 3815
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3816" << std::endl;
 // last command was command number 3816
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3817" << std::endl;
 // last command was command number 3817
_testAddToWaitList(r,72);
std::cout << "last command was number: 3818 " << std::endl;
// last command was command number 3818
_testGetCheck(r);
std::cout << "last command was number: 3819 " << std::endl;
// last command was command number 3819
const string items3820[] = {"pro702","pro742","pro77","pro303","pro491",};
const int itemsNum3820[] = {8,2,6,7,4,};
_testGetOrder(r,-40, items3820, itemsNum3820);
std::cerr << "last output should be ERROR from command3820" << std::endl;
 // last command was command number 3820
_testPrintServedList(r);
std::cout << "last command was number: 3821 " << std::endl;
// last command was command number 3821
_testGetCheck(r);
std::cout << "last command was number: 3822 " << std::endl;
// last command was command number 3822
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3823" << std::endl;
 // last command was command number 3823
_testGetCheck(r);
std::cout << "last command was number: 3824 " << std::endl;
// last command was command number 3824
const string items3825[] = {"pro241","pro255","pro661","pro397","pro713",};
const int itemsNum3825[] = {1,1,4,7,3,};
_testGetOrder(r,5, items3825, itemsNum3825);
std::cerr << "last output should be ERROR from command3825" << std::endl;
 // last command was command number 3825
const string items3826[] = {"bad product!","pro100",};
const int itemsNum3826[] = {4,3,};
_testGetOrder(r,2, items3826, itemsNum3826);
std::cerr << "last output should be ERROR from command3826" << std::endl;
 // last command was command number 3826
_testAddToWaitList(r,66);
std::cout << "last command was number: 3827 " << std::endl;
// last command was command number 3827
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3828" << std::endl;
 // last command was command number 3828
_testPrintWaitList(r);
std::cout << "last command was number: 3829 " << std::endl;
// last command was command number 3829
const string items3830[] = {"pro402","pro719",};
const int itemsNum3830[] = {9,3,};
_testGetOrder(r,2, items3830, itemsNum3830);
std::cerr << "last output should be ERROR from command3830" << std::endl;
 // last command was command number 3830
_testAddToWaitList(r,93);
std::cout << "last command was number: 3831 " << std::endl;
// last command was command number 3831
const string items3832[] = {"bad product!","pro374",};
const int itemsNum3832[] = {6,4,};
_testGetOrder(r,2, items3832, itemsNum3832);
std::cerr << "last output should be ERROR from command3832" << std::endl;
 // last command was command number 3832
_testAddToWaitList(r,59);
std::cout << "last command was number: 3833 " << std::endl;
// last command was command number 3833
_testPrintTables(r);
std::cout << "last command was number: 3834 " << std::endl;
// last command was command number 3834
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3835" << std::endl;
 // last command was command number 3835
_testGetCheck(r);
std::cout << "last command was number: 3836 " << std::endl;
// last command was command number 3836
_testSitAtTable(r);
std::cout << "last command was number: 3837 " << std::endl;
// last command was command number 3837
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3838" << std::endl;
 // last command was command number 3838
_testAddToWaitList(r,68);
std::cout << "last command was number: 3839 " << std::endl;
// last command was command number 3839
const string items3840[] = {"pro966","pro595","pro863",};
const int itemsNum3840[] = {4,6,3,};
_testGetOrder(r,3, items3840, itemsNum3840);
std::cout << "last command was number: 3840 " << std::endl;
// last command was command number 3840
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3841" << std::endl;
 // last command was command number 3841
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3842" << std::endl;
 // last command was command number 3842
_testPrintProfits(r);
std::cout << "last command was number: 3843 " << std::endl;
// last command was command number 3843
const string items3844[] = {"pro966","pro929","pro379","pro895",};
const int itemsNum3844[] = {4,2,-46,8,};
_testGetOrder(r,-56, items3844, itemsNum3844);
std::cerr << "last output should be ERROR from command3844" << std::endl;
 // last command was command number 3844
_testGetCheck(r);
std::cout << "last command was number: 3845 " << std::endl;
// last command was command number 3845
_testPrintTables(r);
std::cout << "last command was number: 3846 " << std::endl;
// last command was command number 3846
_testPrintProfits(r);
std::cout << "last command was number: 3847 " << std::endl;
// last command was command number 3847
const string items3848[] = {"pro981","pro988",};
const int itemsNum3848[] = {1,8,};
_testGetOrder(r,2, items3848, itemsNum3848);
std::cerr << "last output should be ERROR from command3848" << std::endl;
 // last command was command number 3848
const string items3849[] = {"bad product!",};
const int itemsNum3849[] = {1,};
_testGetOrder(r,1, items3849, itemsNum3849);
std::cerr << "last output should be ERROR from command3849" << std::endl;
 // last command was command number 3849
const string items3850[] = {"pro713",};
const int itemsNum3850[] = {6,};
_testGetOrder(r,1, items3850, itemsNum3850);
std::cerr << "last output should be ERROR from command3850" << std::endl;
 // last command was command number 3850
const string items3851[] = {"pro733","pro713",};
const int itemsNum3851[] = {1,-98,};
_testGetOrder(r,2, items3851, itemsNum3851);
std::cerr << "last output should be ERROR from command3851" << std::endl;
 // last command was command number 3851
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3852" << std::endl;
 // last command was command number 3852
_testGetCheck(r);
std::cout << "last command was number: 3853 " << std::endl;
// last command was command number 3853
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3854" << std::endl;
 // last command was command number 3854
_testGetCheck(r);
std::cout << "last command was number: 3855 " << std::endl;
// last command was command number 3855
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3856" << std::endl;
 // last command was command number 3856
_testAddToWaitList(r,84);
std::cout << "last command was number: 3857 " << std::endl;
// last command was command number 3857
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3858" << std::endl;
 // last command was command number 3858
const string items3859[] = {"pro279","pro299","pro520",};
const int itemsNum3859[] = {7,3,7,};
_testGetOrder(r,3, items3859, itemsNum3859);
std::cerr << "last output should be ERROR from command3859" << std::endl;
 // last command was command number 3859
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3860" << std::endl;
 // last command was command number 3860
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3861" << std::endl;
 // last command was command number 3861
_testSitAtTable(r);
std::cout << "last command was number: 3862 " << std::endl;
// last command was command number 3862
_testPrintTables(r);
std::cout << "last command was number: 3863 " << std::endl;
// last command was command number 3863
const string items3864[] = {"pro592","pro248","pro534","pro520",};
const int itemsNum3864[] = {-80,3,9,10,};
_testGetOrder(r,4, items3864, itemsNum3864);
std::cerr << "last output should be ERROR from command3864" << std::endl;
 // last command was command number 3864
const string items3865[] = {"pro719","pro457","bad product!",};
const int itemsNum3865[] = {4,5,10,};
_testGetOrder(r,3, items3865, itemsNum3865);
std::cerr << "last output should be ERROR from command3865" << std::endl;
 // last command was command number 3865
const string items3866[] = {"pro947","pro303","pro746","pro713",};
const int itemsNum3866[] = {6,5,7,10,};
_testGetOrder(r,4, items3866, itemsNum3866);
std::cout << "last command was number: 3866 " << std::endl;
// last command was command number 3866
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3867" << std::endl;
 // last command was command number 3867
_testSitAtTable(r);
std::cout << "last command was number: 3868 " << std::endl;
// last command was command number 3868
const string items3869[] = {"pro956","pro325","pro156","pro855",};
const int itemsNum3869[] = {5,6,9,2,};
_testGetOrder(r,4, items3869, itemsNum3869);
std::cout << "last command was number: 3869 " << std::endl;
// last command was command number 3869
const string items3870[] = {"pro661","pro757","pro240","pro158","pro167",};
const int itemsNum3870[] = {2,10,8,3,1,};
_testGetOrder(r,5, items3870, itemsNum3870);
std::cerr << "last output should be ERROR from command3870" << std::endl;
 // last command was command number 3870
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3871" << std::endl;
 // last command was command number 3871
_testPrintCheckList(r);
std::cout << "last command was number: 3872 " << std::endl;
// last command was command number 3872
_testSitAtTable(r);
std::cout << "last command was number: 3873 " << std::endl;
// last command was command number 3873
_testPrintProfits(r);
std::cout << "last command was number: 3874 " << std::endl;
// last command was command number 3874
_testAddToWaitList(r,80);
std::cout << "last command was number: 3875 " << std::endl;
// last command was command number 3875
const string items3876[] = {"pro279","pro433",};
const int itemsNum3876[] = {7,5,};
_testGetOrder(r,-43, items3876, itemsNum3876);
std::cerr << "last output should be ERROR from command3876" << std::endl;
 // last command was command number 3876
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3877" << std::endl;
 // last command was command number 3877
_testSitAtTable(r);
std::cout << "last command was number: 3878 " << std::endl;
// last command was command number 3878
const string items3879[] = {"pro966","bad product!","pro299","pro375",};
const int itemsNum3879[] = {9,5,4,2,};
_testGetOrder(r,4, items3879, itemsNum3879);
std::cerr << "last output should be ERROR from command3879" << std::endl;
 // last command was command number 3879
_testSitAtTable(r);
std::cout << "last command was number: 3880 " << std::endl;
// last command was command number 3880
_testPrintTables(r);
std::cout << "last command was number: 3881 " << std::endl;
// last command was command number 3881
_testSitAtTable(r);
std::cout << "last command was number: 3882 " << std::endl;
// last command was command number 3882
_testPrintOpenOrders(r);
std::cout << "last command was number: 3883 " << std::endl;
// last command was command number 3883
const string items3884[] = {"pro375","pro138","bad product!","pro895",};
const int itemsNum3884[] = {10,2,7,4,};
_testGetOrder(r,4, items3884, itemsNum3884);
std::cerr << "last output should be ERROR from command3884" << std::endl;
 // last command was command number 3884
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3885" << std::endl;
 // last command was command number 3885
const string items3886[] = {"pro895","pro240","pro255",};
const int itemsNum3886[] = {1,5,-12,};
_testGetOrder(r,3, items3886, itemsNum3886);
std::cerr << "last output should be ERROR from command3886" << std::endl;
 // last command was command number 3886
_testPrintTables(r);
std::cout << "last command was number: 3887 " << std::endl;
// last command was command number 3887
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3888" << std::endl;
 // last command was command number 3888
_testAddToWaitList(r,56);
std::cout << "last command was number: 3889 " << std::endl;
// last command was command number 3889
_testPrintProfits(r);
std::cout << "last command was number: 3890 " << std::endl;
// last command was command number 3890
const string items3891[] = {"pro543","pro253",};
const int itemsNum3891[] = {1,1,};
_testGetOrder(r,2, items3891, itemsNum3891);
std::cout << "last command was number: 3891 " << std::endl;
// last command was command number 3891
_testAddToWaitList(r,106);
std::cerr << "last output should be ERROR from command3892" << std::endl;
 // last command was command number 3892
const string items3893[] = {"pro545","pro695",};
const int itemsNum3893[] = {6,6,};
_testGetOrder(r,2, items3893, itemsNum3893);
std::cout << "last command was number: 3893 " << std::endl;
// last command was command number 3893
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3894" << std::endl;
 // last command was command number 3894
_testSitAtTable(r);
std::cout << "last command was number: 3895 " << std::endl;
// last command was command number 3895
const string items3896[] = {"pro977","pro417","pro253","pro709",};
const int itemsNum3896[] = {5,10,9,-33,};
_testGetOrder(r,4, items3896, itemsNum3896);
std::cerr << "last output should be ERROR from command3896" << std::endl;
 // last command was command number 3896
_testPrintServedList(r);
std::cout << "last command was number: 3897 " << std::endl;
// last command was command number 3897
_testAddToWaitList(r,107);
std::cerr << "last output should be ERROR from command3898" << std::endl;
 // last command was command number 3898
_testSitAtTable(r);
std::cout << "last command was number: 3899 " << std::endl;
// last command was command number 3899
const string items3900[] = {"pro709","pro895","pro947","pro981",};
const int itemsNum3900[] = {3,10,5,1,};
_testGetOrder(r,4, items3900, itemsNum3900);
std::cout << "last command was number: 3900 " << std::endl;
// last command was command number 3900
_testPrintOpenOrders(r);
std::cout << "last command was number: 3901 " << std::endl;
// last command was command number 3901
const string items3902[] = {"pro826","pro243","pro294",};
const int itemsNum3902[] = {8,4,-48,};
_testGetOrder(r,3, items3902, itemsNum3902);
std::cerr << "last output should be ERROR from command3902" << std::endl;
 // last command was command number 3902
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3903" << std::endl;
 // last command was command number 3903
_testGetCheck(r);
std::cout << "last command was number: 3904 " << std::endl;
// last command was command number 3904
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3905" << std::endl;
 // last command was command number 3905
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3906" << std::endl;
 // last command was command number 3906
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3907" << std::endl;
 // last command was command number 3907
_testAddToWaitList(r,77);
std::cout << "last command was number: 3908 " << std::endl;
// last command was command number 3908
_testSitAtTable(r);
std::cout << "last command was number: 3909 " << std::endl;
// last command was command number 3909
const string items3910[] = {"pro491","pro543","pro138","pro608","bad product!",};
const int itemsNum3910[] = {10,6,9,7,8,};
_testGetOrder(r,5, items3910, itemsNum3910);
std::cerr << "last output should be ERROR from command3910" << std::endl;
 // last command was command number 3910
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3911" << std::endl;
 // last command was command number 3911
_testSitAtTable(r);
std::cout << "last command was number: 3912 " << std::endl;
// last command was command number 3912
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3913" << std::endl;
 // last command was command number 3913
_testAddToWaitList(r,54);
std::cout << "last command was number: 3914 " << std::endl;
// last command was command number 3914
const string items3915[] = {"pro158","pro77","pro184",};
const int itemsNum3915[] = {8,3,9,};
_testGetOrder(r,3, items3915, itemsNum3915);
std::cout << "last command was number: 3915 " << std::endl;
// last command was command number 3915
_testGetCheck(r);
std::cout << "last command was number: 3916 " << std::endl;
// last command was command number 3916
_testPrintServedList(r);
std::cout << "last command was number: 3917 " << std::endl;
// last command was command number 3917
_testAddToWaitList(r,62);
std::cout << "last command was number: 3918 " << std::endl;
// last command was command number 3918
const string items3919[] = {"pro433","pro863",};
const int itemsNum3919[] = {4,7,};
_testGetOrder(r,2, items3919, itemsNum3919);
std::cout << "last command was number: 3919 " << std::endl;
// last command was command number 3919
const string items3920[] = {"pro148","pro136","pro947","pro810","pro402",};
const int itemsNum3920[] = {3,9,4,-99,2,};
_testGetOrder(r,-92, items3920, itemsNum3920);
std::cerr << "last output should be ERROR from command3920" << std::endl;
 // last command was command number 3920
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3921" << std::endl;
 // last command was command number 3921
_testGetCheck(r);
std::cout << "last command was number: 3922 " << std::endl;
// last command was command number 3922
_testGetCheck(r);
std::cout << "last command was number: 3923 " << std::endl;
// last command was command number 3923
_testPrintTables(r);
std::cout << "last command was number: 3924 " << std::endl;
// last command was command number 3924
const string items3925[] = {"pro709","pro148","pro595","pro757","pro608",};
const int itemsNum3925[] = {3,8,4,2,1,};
_testGetOrder(r,-2, items3925, itemsNum3925);
std::cerr << "last output should be ERROR from command3925" << std::endl;
 // last command was command number 3925
const string items3926[] = {"pro539","pro855","pro381",};
const int itemsNum3926[] = {3,10,2,};
_testGetOrder(r,3, items3926, itemsNum3926);
std::cout << "last command was number: 3926 " << std::endl;
// last command was command number 3926
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3927" << std::endl;
 // last command was command number 3927
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3928" << std::endl;
 // last command was command number 3928
_testPrintServedList(r);
std::cout << "last command was number: 3929 " << std::endl;
// last command was command number 3929
const string items3930[] = {"pro520","pro77","pro208","pro351",};
const int itemsNum3930[] = {9,6,8,-82,};
_testGetOrder(r,-40, items3930, itemsNum3930);
std::cerr << "last output should be ERROR from command3930" << std::endl;
 // last command was command number 3930
const string items3931[] = {"bad product!","pro535",};
const int itemsNum3931[] = {7,10,};
_testGetOrder(r,2, items3931, itemsNum3931);
std::cerr << "last output should be ERROR from command3931" << std::endl;
 // last command was command number 3931
const string items3932[] = {"pro977","pro987","pro457","pro768","pro855",};
const int itemsNum3932[] = {7,5,3,8,-33,};
_testGetOrder(r,5, items3932, itemsNum3932);
std::cerr << "last output should be ERROR from command3932" << std::endl;
 // last command was command number 3932
_testSitAtTable(r);
std::cout << "last command was number: 3933 " << std::endl;
// last command was command number 3933
const string items3934[] = {"bad product!","pro719",};
const int itemsNum3934[] = {6,5,};
_testGetOrder(r,2, items3934, itemsNum3934);
std::cerr << "last output should be ERROR from command3934" << std::endl;
 // last command was command number 3934
const string items3935[] = {"pro213",};
const int itemsNum3935[] = {10,};
_testGetOrder(r,-10, items3935, itemsNum3935);
std::cerr << "last output should be ERROR from command3935" << std::endl;
 // last command was command number 3935
const string items3936[] = {"pro303","pro375","pro457",};
const int itemsNum3936[] = {8,7,-24,};
_testGetOrder(r,3, items3936, itemsNum3936);
std::cerr << "last output should be ERROR from command3936" << std::endl;
 // last command was command number 3936
_testAddToWaitList(r,104);
std::cerr << "last output should be ERROR from command3937" << std::endl;
 // last command was command number 3937
_testAddToWaitList(r,98);
std::cout << "last command was number: 3938 " << std::endl;
// last command was command number 3938
const string items3939[] = {"pro969","pro713","pro543","pro377","pro740",};
const int itemsNum3939[] = {6,10,5,8,7,};
_testGetOrder(r,5, items3939, itemsNum3939);
std::cout << "last command was number: 3939 " << std::endl;
// last command was command number 3939
const string items3940[] = {"pro375","pro240","bad product!",};
const int itemsNum3940[] = {2,4,5,};
_testGetOrder(r,3, items3940, itemsNum3940);
std::cerr << "last output should be ERROR from command3940" << std::endl;
 // last command was command number 3940
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3941" << std::endl;
 // last command was command number 3941
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3942" << std::endl;
 // last command was command number 3942
_testAddToWaitList(r,83);
std::cout << "last command was number: 3943 " << std::endl;
// last command was command number 3943
_testPrintOpenOrders(r);
std::cout << "last command was number: 3944 " << std::endl;
// last command was command number 3944
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3945" << std::endl;
 // last command was command number 3945
_testAddToWaitList(r,103);
std::cerr << "last output should be ERROR from command3946" << std::endl;
 // last command was command number 3946
_testAddToWaitList(r,64);
std::cout << "last command was number: 3947 " << std::endl;
// last command was command number 3947
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3948" << std::endl;
 // last command was command number 3948
const string items3949[] = {"pro77","pro303","pro543","pro895","pro379",};
const int itemsNum3949[] = {3,9,8,-31,6,};
_testGetOrder(r,5, items3949, itemsNum3949);
std::cerr << "last output should be ERROR from command3949" << std::endl;
 // last command was command number 3949
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3950" << std::endl;
 // last command was command number 3950
_testAddToWaitList(r,101);
std::cerr << "last output should be ERROR from command3951" << std::endl;
 // last command was command number 3951
const string items3952[] = {"pro328","pro977","bad product!","pro605","pro757",};
const int itemsNum3952[] = {8,3,10,4,1,};
_testGetOrder(r,5, items3952, itemsNum3952);
std::cerr << "last output should be ERROR from command3952" << std::endl;
 // last command was command number 3952
_testAddToWaitList(r,59);
std::cout << "last command was number: 3953 " << std::endl;
// last command was command number 3953
_testSitAtTable(r);
std::cout << "last command was number: 3954 " << std::endl;
// last command was command number 3954
_testPrintServedList(r);
std::cout << "last command was number: 3955 " << std::endl;
// last command was command number 3955
const string items3956[] = {"pro77",};
const int itemsNum3956[] = {5,};
_testGetOrder(r,1, items3956, itemsNum3956);
std::cout << "last command was number: 3956 " << std::endl;
// last command was command number 3956
_testPrintProfits(r);
std::cout << "last command was number: 3957 " << std::endl;
// last command was command number 3957
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3958" << std::endl;
 // last command was command number 3958
_testAddToWaitList(r,81);
std::cout << "last command was number: 3959 " << std::endl;
// last command was command number 3959
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3960" << std::endl;
 // last command was command number 3960
_testPrintProfits(r);
std::cout << "last command was number: 3961 " << std::endl;
// last command was command number 3961
_testPrintProfits(r);
std::cout << "last command was number: 3962 " << std::endl;
// last command was command number 3962
_testAddToWaitList(r,108);
std::cerr << "last output should be ERROR from command3963" << std::endl;
 // last command was command number 3963
const string items3964[] = {"pro709","pro375","pro381","pro201","pro535",};
const int itemsNum3964[] = {10,6,5,8,9,};
_testGetOrder(r,-68, items3964, itemsNum3964);
std::cerr << "last output should be ERROR from command3964" << std::endl;
 // last command was command number 3964
_testPrintOpenOrders(r);
std::cout << "last command was number: 3965 " << std::endl;
// last command was command number 3965
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3966" << std::endl;
 // last command was command number 3966
_testPrintTables(r);
std::cout << "last command was number: 3967 " << std::endl;
// last command was command number 3967
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3968" << std::endl;
 // last command was command number 3968
const string items3969[] = {"pro947","pro279","pro138","bad product!","pro417",};
const int itemsNum3969[] = {1,10,9,9,4,};
_testGetOrder(r,5, items3969, itemsNum3969);
std::cerr << "last output should be ERROR from command3969" << std::endl;
 // last command was command number 3969
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3970" << std::endl;
 // last command was command number 3970
const string items3971[] = {"pro987","pro608","pro279","bad product!",};
const int itemsNum3971[] = {6,1,9,6,};
_testGetOrder(r,4, items3971, itemsNum3971);
std::cerr << "last output should be ERROR from command3971" << std::endl;
 // last command was command number 3971
const string items3972[] = {"pro335","pro100","bad product!","pro713",};
const int itemsNum3972[] = {8,2,6,-33,};
_testGetOrder(r,4, items3972, itemsNum3972);
std::cerr << "last output should be ERROR from command3972" << std::endl;
 // last command was command number 3972
_testGetCheck(r);
std::cout << "last command was number: 3973 " << std::endl;
// last command was command number 3973
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3974" << std::endl;
 // last command was command number 3974
_testPrintCheckList(r);
std::cout << "last command was number: 3975 " << std::endl;
// last command was command number 3975
const string items3976[] = {"pro661",};
const int itemsNum3976[] = {-47,};
_testGetOrder(r,1, items3976, itemsNum3976);
std::cerr << "last output should be ERROR from command3976" << std::endl;
 // last command was command number 3976
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3977" << std::endl;
 // last command was command number 3977
_testAddToWaitList(r,81);
std::cout << "last command was number: 3978 " << std::endl;
// last command was command number 3978
const string items3979[] = {"pro746","pro713","pro956","pro929","pro201",};
const int itemsNum3979[] = {1,4,-51,9,3,};
_testGetOrder(r,5, items3979, itemsNum3979);
std::cerr << "last output should be ERROR from command3979" << std::endl;
 // last command was command number 3979
const string items3980[] = {"pro605","pro241","pro325","pro872","pro138",};
const int itemsNum3980[] = {1,7,9,-85,10,};
_testGetOrder(r,5, items3980, itemsNum3980);
std::cerr << "last output should be ERROR from command3980" << std::endl;
 // last command was command number 3980
_testPrintOpenOrders(r);
std::cout << "last command was number: 3981 " << std::endl;
// last command was command number 3981
const string items3982[] = {"pro863","pro760","pro253","pro433","pro381",};
const int itemsNum3982[] = {5,3,7,1,2,};
_testGetOrder(r,5, items3982, itemsNum3982);
std::cout << "last command was number: 3982 " << std::endl;
// last command was command number 3982
_testAddToWaitList(r,109);
std::cerr << "last output should be ERROR from command3983" << std::endl;
 // last command was command number 3983
_testAddToWaitList(r,102);
std::cerr << "last output should be ERROR from command3984" << std::endl;
 // last command was command number 3984
const string items3985[] = {"pro390","pro241","pro863","bad product!","pro184",};
const int itemsNum3985[] = {7,8,8,5,4,};
_testGetOrder(r,5, items3985, itemsNum3985);
std::cerr << "last output should be ERROR from command3985" << std::endl;
 // last command was command number 3985
const string items3986[] = {"pro956","pro351","pro230",};
const int itemsNum3986[] = {10,7,-46,};
_testGetOrder(r,3, items3986, itemsNum3986);
std::cerr << "last output should be ERROR from command3986" << std::endl;
 // last command was command number 3986
_testGetCheck(r);
std::cout << "last command was number: 3987 " << std::endl;
// last command was command number 3987
const string items3988[] = {"bad product!","pro826",};
const int itemsNum3988[] = {5,8,};
_testGetOrder(r,2, items3988, itemsNum3988);
std::cerr << "last output should be ERROR from command3988" << std::endl;
 // last command was command number 3988
const string items3989[] = {"bad product!",};
const int itemsNum3989[] = {8,};
_testGetOrder(r,1, items3989, itemsNum3989);
std::cerr << "last output should be ERROR from command3989" << std::endl;
 // last command was command number 3989
_testPrintCheckList(r);
std::cout << "last command was number: 3990 " << std::endl;
// last command was command number 3990
_testAddToWaitList(r,110);
std::cerr << "last output should be ERROR from command3991" << std::endl;
 // last command was command number 3991
_testAddToWaitList(r,71);
std::cout << "last command was number: 3992 " << std::endl;
// last command was command number 3992
_testPrintTables(r);
std::cout << "last command was number: 3993 " << std::endl;
// last command was command number 3993
const string items3994[] = {"pro330","pro702",};
const int itemsNum3994[] = {2,6,};
_testGetOrder(r,2, items3994, itemsNum3994);
std::cout << "last command was number: 3994 " << std::endl;
// last command was command number 3994
const string items3995[] = {"pro100","pro719","pro720",};
const int itemsNum3995[] = {4,9,7,};
_testGetOrder(r,3, items3995, itemsNum3995);
std::cerr << "last output should be ERROR from command3995" << std::endl;
 // last command was command number 3995
_testPrintServedList(r);
std::cout << "last command was number: 3996 " << std::endl;
// last command was command number 3996
_testPrintWaitList(r);
std::cout << "last command was number: 3997 " << std::endl;
// last command was command number 3997
_testAddToWaitList(r,105);
std::cerr << "last output should be ERROR from command3998" << std::endl;
 // last command was command number 3998
_testGetCheck(r);
std::cout << "last command was number: 3999 " << std::endl;
// last command was command number 3999

	
	return 0;
}
