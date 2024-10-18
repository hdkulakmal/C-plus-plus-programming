
#include<iostream>
using namespace std;
int main(){

string city,country;

cout << "Enter Your City: ";
cin >> city;


cout << "Enter Your Country: ";
cin.ignore();
getline(cin,country);

cout << "You live in " << city<<","<<country;

return 0;
}
