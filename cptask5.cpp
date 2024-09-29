#include<iostream>
using namespace std;
void true_false(int your, int other);
main()
{
 cout << "Enter your position: ";
 int your;
 cin >> your;
 cout << "Enter your friend's position: ";
 int other;
 cin >> other;
 true_false(your, other);
}
void true_false(int your, int other)
{
 int difference;
 difference=other-your;
if (difference<=6)
{
 cout << "true";
}
if (difference>6)
{
 cout << "false";
}
}