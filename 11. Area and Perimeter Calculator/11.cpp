#include<iostream>
using namespace std;
int main(){

double width,length;

cout << "Enter the length:";
cin >> length;
cout << endl;

cout << "Enter the width:";
cin >> width;
cout << endl;

cout << "Area:" <<(width*length) <<endl;
cout << "Perimeter:" <<((width*2)+(length*2)) <<endl;

return 0;
}
