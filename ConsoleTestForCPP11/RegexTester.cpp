#include "stdafx.h"
#include "RegexTester.h"
#include <string>
#include <regex>
#include <iostream>

using namespace std;

RegexTester::RegexTester()
{
}


RegexTester::~RegexTester()
{
}

void RegexTester::test()
{
    string s1 = "";
    regex rint(R"([0-9]+)");
    regex rchar(R"([abcd]+)");
    cout << regex_match("12312131", rint) << endl;
    cout << regex_match("1231a2131", rchar) << endl;
    cout << regex_match("aaa", rchar) << endl;
    cout << regex_match("abcd", rchar) << endl;
    cout << regex_match("eeee", rchar) << endl;


}
