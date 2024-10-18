#include<iostream>
using namespace std;
int main(){

string city,country;

cout << "Enter Your City: \n";
cin >> city;
cout << "Enter Your Country: \n";
//cin >> country;
getline(cin,country);

cout << "You live in" << city<<","<<country;

return 0;
}
