#include<iostream>
using namespace std;

void printmenu();
void calculate_aggregate(string, int,int,int);
void marks_comparison(string,int,string,int);

main(){
	printmenu();
	
	string name;
	int matricmarks,intermarks,ecatmarks;
	cout<<"Enter your name: ";
	cin>>name;

	cout<<"Enter your matric marks: ";
	cin>>matricmarks;

	cout<<"Enter your inter marks: ";
	cin>>intermarks;

	cout<<"Enter your ECAT marks: ";
	cin>>ecatmarks;
	calculate_aggregate(name,matricmarks,intermarks,ecatmarks);

	string nameStd1,nameStd2;
	int ecatmarksStd1,ecatmarksStd2;
	cout<<"Enter 1st student name: ";
	cin>> nameStd1;
	cout<<"Enter ECAT Marks: ";
	cin>> ecatmarksStd1;

	cout<<"Enter 2nd student name: ";
	cin>> nameStd2;
	cout<<"Enter ECAT Marks: ";
	cin>> ecatmarksStd2;
	marks_comparison(nameStd1,ecatmarksStd1,nameStd2,ecatmarksStd2);
	
}

void printmenu(){
	cout<<"UNIVERSITY ADMISSION MANAGEMENT SYSTEM"<<endl;
}

void calculate_aggregate(string name, int matricmarks, int intermarks, int ecatmarks)
{	
	float aggregate;
	aggregate = (matricmarks*0.3)/1100 + (intermarks*0.3)/550 + (ecatmarks*0.4)/1100;
	cout<<name<<" Your aggregate is: "<<100*aggregate<<endl;
}

void marks_comparison(string nameStd1, int ecatmarksStd1, string nameStd2, int ecatmarksStd2)
{
	if (ecatmarksStd1 > ecatmarksStd2)
	{
		cout<<nameStd1<<" will be given 1st roll no.";
	}
	if (ecatmarksStd1 < ecatmarksStd2)
	{
		cout<<nameStd2<<" will be given 1st roll no.";
	}
}
