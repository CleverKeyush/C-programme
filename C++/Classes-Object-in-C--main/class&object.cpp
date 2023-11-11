#include<iostream>
using namespace std;
class Student
 {
  public:
  int RollNo;
  string Name;
  int Result;
 };

int main()
{ 
  Student S1;
  S1.RollNo =48 ;
  S1.Name = "Raj" ;
  S1.Result= 80 ;

  cout<<"Student Name "<<S1.Name<<endl<<"Student Rollno :"<<S1.RollNo<<endl<<"Student Result"<<S1.Result<<endl;
  
  return 0;
}