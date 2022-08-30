#include <iostream> 
#include <string>
using namespace std;
   static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,4, 6, 2, 4 };
   static string week[7] ={"Sunday","Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"};
   int y,d,m;


int dayNumber(int day, int month, int year)
   {    
      year -= month < 3;
      return ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
   }

int main()
    {
 	cout<<"Hey this program can Tell Your born Day \n\t Enter Your Birth Year : " ;
 	cin>>y;
 	cout <<"\n\t Enter Your Birth Month : ";
 	cin>>m;
 	cout <<"\n\t Enter Your Birth Day : ";
 	cin>>d;
 	cout<<"Hey You born On "<<week[dayNumber(d,m,y)];
 	return 0;
      }
