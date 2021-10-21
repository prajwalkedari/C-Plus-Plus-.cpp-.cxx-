#include<iostream>
#include<string>
using namespace std;
void organic(int c,int h){
    string carbon[10]={"meth","eth","prop","but","pent","Hex","hept","oct","non","dec"};
    cout<<"<===========================>\n";
    int n=c*2;
    if (h==n){
        cout<<"Compound:- "<<carbon[c-1]<<"ene"<<endl;
        cout<<"its alkene";
        cout<<"carbon carbon double bond(c=c)";
    }
    else if(h==n+2){
        cout<<"Compound:- "<<carbon[c-1]<<"ane"<<endl;
        cout<<"its alkane \n";
        cout<<"carbon carbon single bond(c-c)";
    }
    else if (h==n-2){
        cout<<"Compound:- "<<carbon[c-1]<<"yne"<<endl;
        cout<<"its alkyne \n";
        cout<<"carbon carbon triple bond(c=-c)";
    }
   else if (h==n+1){ 
        cout<<"Compound:- "<<carbon[c-1]<<"yle"<<endl;
        cout<<"its alkyle \n";
        cout<<"carbon carbon single bond(c-c)";
   } 
   else{
        cout<<"Dear user \n u are enter wrong config " ;
   }
}




int main(){
    int c,h;
    cout<<"Enter no. of carbon(c):";
    cin>>c;
    cout<<"Enter no. of hydrogen(h)";
    cin>>h;
organic(c,h);
return 0;
}
