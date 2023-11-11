#include <iostream>
using namespace std;
int main()
{
  int x;
  fact = 1 ;
  i = 1;

  cout<<"Enter Factorial number : ";
  cin>>x;
  
  while(i <= x)
   {
    fact = fact * i;
    i++;
   }
  cout<<"The Factorail is : "<<fact;
  return 0;
  }