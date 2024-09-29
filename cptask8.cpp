#include<iostream>
using namespace std;
void tom_sleeping(int holidays);
main()
{
 cout << "Holidays: ";
 int holidays;
 cin >> holidays;
 tom_sleeping(holidays);
}
 void tom_sleeping(int holidays)
{
 int working;
 working=365-holidays;
 int Hminutes;
 Hminutes=holidays*127;
 int Wminutes;
 Wminutes=working*63;
 int total;
 total=Hminutes+Wminutes;
 int norms;
 norms=30000-total;
 int norms2;
 norms2=total-30000;
 int Hnorms;
 Hnorms=norms/60;
 int Mnorms;
 Mnorms=norms%60;
 if (total<30000)
{
 cout << "Tom sleeps well" << endl;
 cout << Hnorms << " hours and " << Mnorms <<" minutes less for play";
}
 if (total>30000)
{
 cout << "Tom will run away" << endl;
 cout << norms2/60 << " hours and " << norms2%60 << " minutes for play";
}
}