#include<iostream>
using namespace std;
void tissue_rolls(int people, int rolls);
main()
{
 cout << "Number of people in the household: ";
 int people;
 cin >> people;
 cout << "Number of rolls of TP: ";
 int rolls;
 cin >> rolls;
 tissue_rolls(people, rolls);
}
 void tissue_rolls(int people, int rolls)
{
 int sheetsperday;
 sheetsperday=people*57;
 int totalsheets;
 totalsheets=rolls*500;
 int sheetsuse;
 sheetsuse=totalsheets/sheetsperday;
 if ( sheetsuse<14)
{
 cout << "Your TP will only last " << sheetsuse << " days, buy more!";
} 
 if (sheetsuse>=14)
{ 
 cout << "Your TP will last " << sheetsuse << " days, no need to panic!";
}
}