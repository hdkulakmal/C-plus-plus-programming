#include<iostream>
using namespace std;
int main(){

string x;
cout << "Enter any string:";
getline(cin,x);

x[0] = 'Q';
cout << "X is: " <<x;

return 0;
}

