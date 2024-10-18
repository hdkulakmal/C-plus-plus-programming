#include<iostream>
#include<cmath>
using namespace std;
int main(){

int x,y;

cout << "Enter the number 1:";
cin >>x;
cout << "Enter the number 2:";
cin >> y;

int power = pow(x,y);
cout << "Raised to the  power of " <<y <<" is:"<<power<<endl;

cout<< "Square root of "<<x<<" is:"<<sqrt(x)<<endl;
cout<< "Square root of "<<y<<" is:"<<sqrt(y)<<endl;
cout<< "Minimum of two number is:"<<min(x,y)<<endl;
cout<< "Maximum of two number is:"<<max(x,y)<<endl;
return 0;
}
