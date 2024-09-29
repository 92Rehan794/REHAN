#include<iostream>
using namespace std;
void hours_minutes(int hours, int minutes);
main()
{
 cout << "Enter the number of hours: ";
 int hours;
 cin >> hours;
 cout << "Enter the number of minutes: ";
 int minutes;
 cin >> minutes;
 hours_minutes(hours, minutes);
}
 void hours_minutes(int hours, int minutes)
{
 int result1;
 result1=hours*60;
if (result1>minutes)
{
 cout << hours;
}
if (result1<minutes)
{
 cout << minutes;
}
}