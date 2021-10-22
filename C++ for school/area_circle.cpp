#include <iostream>
using namespace std;
//area of Cricle = Pi *(r^2)
int main(){
float r =1 ;
float const pi = 3.14;
float area_circle ;
cout<<"Enter the radius of circle:-";
cin>>r;
area_circle = pi * (r*r);
cout<< "area of circle is " <<area_circle<<endl;
return 0;
}