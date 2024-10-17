/*
Title: Chapter 4 Exercise 10 - Interest Earned
File Name : Ch4Ex10_CSC221_Assignment
Programmer : Brion Blais
Date : 10 / 2024
Requirements :
    Write a program that asks for the user to enter the month and the year.  The program should
    display the number of days in that month.  This includes a leap year calculation.
 */

#include <iostream>
using namespace std;

int monthEntered;
int yearEntered;
bool leapYear();

 int main()
{
           
    cout << "Enter a month (1 - 12):\n";
    cin >> monthEntered;
    cout << "Enter a year:\n";
    cin >> yearEntered;

    switch (monthEntered) {
        case 1: 
            cout << "There are 31 days in January.";
            break;
        case 2:
            leapYear();
            if (leapYear) {
                cout << "There 29 days in this February, because it is a leap year.";
            } else cout << "There are 28 days in February.";
            break;
        case 3:
            cout << "There are 31 days in March.";
            break;
        case 4:
            cout << "There are 30 days in April.";
            break;
        case 5:
            cout << "There are 31 days in May.";
            break;
        case 6:
            cout << "There are 30 days in June.";
            break;
        case 7:
            cout << "There are 31 days in July.";
            break;
        case 8:
            cout << "There are 31 days in August.";
            break;
        case 9:
            cout << "There are 30 days in September.";
            break;
        case 10:
            cout << "There are 31 days in October.";
            break;
        case 11:
            cout << "There are 30 days in November.";
            break;
        case 12:
            cout << "There are 31 days in December.";
            break;    
    }
    return 0;
}

 bool leapYear() {
     bool isLeapYear = 0;
     if ((yearEntered % 100 == 0) && (yearEntered % 400 == 0)) {
         isLeapYear = 1;
     }
     // It is a leap year
     else if ((yearEntered % 100 != 0) && (yearEntered % 4 == 0)) {
         isLeapYear = 1;
     }
     // It is a leap year
     else
         isLeapYear = 0;
         // It is not a leap year
     return isLeapYear;

 }
