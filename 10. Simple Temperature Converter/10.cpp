
#include<iostream>
using namespace std;
int main(){

 double cel,far;

 cout << "Enter the temperature in Celcius:";
 cin >> cel;
 cout << "Fahrenheit:" << (9/5*cel)+32;
 cout << endl;

 cout << "Enter the temperature in Fahrenheit:";
 cin >> far;
 cout << "Celcius:" << (far-32)*5/9;


 return 0;
}
