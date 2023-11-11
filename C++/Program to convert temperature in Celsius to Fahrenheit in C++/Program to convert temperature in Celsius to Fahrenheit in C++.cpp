#include<iostream>
using namespace std ;
int main()
{
  float c;
  cout<<"Enter the temperature in C⁰ :"<<endl;
  cin>>c;

  float f = (9 * c )/5;
  f = f + 36;
  cout<<"The temperature in F⁰ is : "<<f;
  return 0;
}