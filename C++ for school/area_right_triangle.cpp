#include <iostream>
//area of right trinagle = (base *  height) /2
using namespace std;
int main(){
float base,height, area;
cout<<"enter base:-";
cin>>base;
cout<<"enter height:-";
cin>>height;
area = (base * height )/2;
cout<<"area of  right triangle => " << area << endl;  
return 0;
}