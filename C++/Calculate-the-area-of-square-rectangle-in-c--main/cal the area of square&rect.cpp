#include<iostream>
using namespace std;

 void area1(int squ)
 {
   int a ;
   a=squ*squ;
   cout<<a<<endl;
   
 }

void area2 (int leng ,int brea )
 {
  int a;
  a=leng*brea;
  cout<<a<<endl;
  
 }
 
int main ()
{
 int squ , leng , brea;
 cout<<"Enter the area of square : ";
 cin>>squ;
 cout<<"Enter the Lenght of rectangle : ";
 cin>>leng;
 cout<<"Enter the Breadth  of rectangle : ";
 cin>>brea;
 area1(squ);
 area2(leng, brea);
 return 0;
 
}
