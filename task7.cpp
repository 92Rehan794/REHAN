#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printmaze();
void moveplayer(int, int);


main()
{
    int x = 4, y = 4;
    system("cls");
    printmaze();
    while(true)
    {
    moveplayer(x, y);
	y = y+1;
	if(y == 10){
		y=4;
	}
	
   }
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze(){
  cout << "####################################" << endl;
  cout << "#                                  #" << endl;  
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;     
  cout << "#                                  #" << endl;    
  cout << "####################################" << endl;
}

void moveplayer(int x ,int y){
gotoxy(x,y);
cout << "P";
Sleep(400);
gotoxy(x,y);
cout << " ";
}
