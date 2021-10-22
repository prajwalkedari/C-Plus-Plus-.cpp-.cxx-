#include <iostream>
#include <cmath>
using namespace std;
int main(){
float x1,x2,y1,y2, distance;
cout<<"Enter frist X and Y co-ordinate:-";
cin>>x1>>y1 ;
cout<<"Enter second X and Y co-ordinate:-";
cin>>x2>>y2;
int disX=(x2-x1) * (x2-x1);
int disY=(y2-y1) * (y2-y1);
distance =sqrt(disX- disY);
cout<<"distance between two point is "<<distance<<endl;
return 0;
} 