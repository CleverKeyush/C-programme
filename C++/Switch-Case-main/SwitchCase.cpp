#include<iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter Any Number 1 To 5 ";
  cin>>x;
   switch (x)
   {
    case 1:
      cout<<"Its Monday";
      break;
    case 2:
       cout<<"Its Tuesday";
       break;
    case 3:
       cout<<"Its Wednesday";
       break;
    case 4:
       cout<<"Its Thursday";
       break;
    case 5:
       cout<<"Its Friday";
       break;
    case 6:
       cout<<"Its Saturday";
       break;
    case 7:
       cout<<"Its Sunday";
       break;
     default :
       cout<<"Error";
       break ;      
   }
  return 0 ; 
}