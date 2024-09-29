#include<iostream>
using namespace std;
void ticket_price(string country,  float price);
main()
{
while(true)
{
 cout << "Enter the country's name: ";
 string country;
 cin >> country;
 cout << "Enter the ticket price in dollars: $";
 float price;
 cin >> price;
 ticket_price(country, price);
}
}
 void ticket_price (string country, float price)
{
 float ind;
 ind=price- (price*0.2);
 float pak;
 pak=price-(price*0.05);
 float eng;
 eng=price- (price*0.3);
 float ire;
 ire=price-(price*0.1);
 float cana;
 cana=price-(price*0.45);
  if (country=="Pakistan")
{
 cout << "Final ticket price after discount: $" << pak << endl;
}
 if (country=="India")
{
 cout << "Final ticket price after discount: $" << ind << endl;
}
 if (country=="England")
{
 cout << "Final ticket price after discount: $" << eng << endl;
}
 if (country=="Ireland")
{
 cout << "Final ticket price after discount: $" << ire << endl;

}
 if ( country=="Canada")
{
 cout << "Final ticket price after discount: $" << cana << endl;
}
}