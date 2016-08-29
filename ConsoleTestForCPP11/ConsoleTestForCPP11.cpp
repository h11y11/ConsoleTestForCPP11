// ConsoleTestForCPP11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "PrjPoint.h"
#include <algorithm>
#include "MyAlgorithm\AboutSort.h"
//#include <xfunctional>
// #include <iostream>
// #include "VectorExample.h"
// #include "MapExample.h"
// #include <memory>
// #include <algorithm>
// #include <wtypes.h>
// #include <time.h>
// #include <xutility>
// #include "Parent.h"
// #include "ThreadTester.h"
// #include "RegexTester.h"
// #include <set>
// #include <stack>
// #include <unordered_set>
// #include <xfunctional>
// 
// using namespace std;
// 
// 
// void print_time()
// {
//     time_t rawtime;
//     struct tm timeinfo;
//     time(&rawtime);
//     localtime_s(&timeinfo, &rawtime);
//     cout << endl << 1900 + timeinfo.tm_year << " " << timeinfo.tm_yday << " " << timeinfo.tm_mon << " " << timeinfo.tm_mday << " " << timeinfo.tm_sec << endl;
// 
// }
// 
// void testFP()
// {
//     cout << R"(fp)" << endl;
// }
// 
// 
// 
// //https://leetcode.com/problems/word-break/
// namespace solotion
// {
//     bool wordBreak(string s, unordered_set<string>& wordDict)
//     {
//         return false;
//     }
// }
// 
// bool testNoReturn()
// {
//     if (0)
//         return true;
// }


#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<set>
#include<functional>
#include<map>
using namespace std;


int main()
{

    int a[] = { 4, 6, 5, 7, 1, 3, 9 };
    int n = 7;
    k_thElement(a, a + 3, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}