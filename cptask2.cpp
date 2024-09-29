#include<iostream>
using namespace std;
void result (string num);
main()
{
 cout << "Enter 'true' or 'false': ";
 string num;
 cin >> num;
 result(num);
}
 void result(string num)
{
if (num=="true")
{
 cout << "false";
}
 if (num=="false")
{
 cout << "true";
}
}