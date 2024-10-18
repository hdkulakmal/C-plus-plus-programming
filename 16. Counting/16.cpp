#include<iostream>
using namespace std;
int main(){

string x;
cout << "Enter any string:";
getline(cin,x);

int n = x.length();

cout << "Number of character in string is:"<<n;

return 0;
}
