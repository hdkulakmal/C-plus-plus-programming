#include<iostream>
using namespace std;
int main(){

string firstname,lastname;

cout << "Enter the first name:";
getline(cin,firstname);
cout << "Enter the last name:";
getline(cin,lastname);

string fullname=firstname+" "+lastname;
cout << "Full name is "<<fullname;

return 0;
}
