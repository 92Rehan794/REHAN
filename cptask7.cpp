#include<iostream>
using namespace std;
void flowerShop(int red, int white, int tulips);
main()
{
 cout << "Red Rose: ";
 int red;
 cin >> red;
 cout << "White Rose: ";
 int white;
 cin >> white;
 cout << "Tulips: ";
 int tulips;
 cin >> tulips;
 flowerShop(red, white, tulips);
}
 void flowerShop(int red, int white, int tulips)
{
 float Rprice;
 Rprice=red*2.00;
 float Wprice;
 Wprice=white*4.10;
 float Tprice;
 Tprice=tulips*2.50;
 float price;
 price=Rprice+Wprice+Tprice;
 float discount;
 discount=price-(price*0.2);
 if (price>200)
{
 cout << "Original Price: $" << price << endl;
 cout << "Price after discount: $" << discount;
 }
if (price<=200)
{
 cout << "Original Price: $" << price << endl;
 cout << "No discount applied.";
}
}

 