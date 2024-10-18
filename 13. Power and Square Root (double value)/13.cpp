#include<iostream>
#include<cmath>
using namespace std;
int main(){

double a,b;

cout << "Enter the double number 1:";
cin >>a;
cout << "Enter the doouble number 2:";
cin >> b;

int power = pow(a,b);
cout << "Raised to the  power of " <<b <<" is:"<<power<<endl;

cout<< "Square root of "<<a<<" is:"<<sqrt(a)<<endl;
cout<< "Square root of "<<b<<" is:"<<sqrt(b)<<endl;
cout<< "Minimum of two number is:"<<min(a,b)<<endl;
cout<< "Maximum of two number is:"<<max(a,b)<<endl;

return 0;
}

