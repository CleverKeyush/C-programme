#include<iostream>
using namespace std;
int main()
{
  char x ;
  bool lowercase, Uppercase ;

  cout<<"Enter one alphabet : ";
  cin>>x;
  lowercase=(x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
  Uppercase=(x=='A'||x=='E'||x=='I'||x=='O'||x=='U');
   if(lowercase||Uppercase)
    {
      cout<<x<<"Its a vowel"
    };
   else
    {
      cout<<x<<"Its not a vowel"
    }; 
  return 0;  
}
