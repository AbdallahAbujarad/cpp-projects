// برنامج ايجاد الرقم الاكبر.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int numofnums, biggestnum, loop = 1, x ;
    cout << "enter number of numbers : ";
    cin >> numofnums;

    while (loop <= numofnums) {
        cout << "enter number " << loop << " : ";
        cin >> x;
        if (loop == 1) {
            biggestnum = x;
        }
        else if (biggestnum < x) {
            biggestnum = x;
        }
        loop++;
    }
    cout << "the biggest num = " << biggestnum;
}
