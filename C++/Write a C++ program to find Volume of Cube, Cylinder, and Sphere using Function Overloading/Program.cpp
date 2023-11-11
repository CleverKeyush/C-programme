#include <iostream>

using namespace std;

void cude (float r )
 {
     cout<<"The Volume of a cude is  : "<<r*r*r<<endl;
 }
void cylinder (float h , float r )
{
    cout<<"The Volume of a cylinder is : "<<3.14*h*r*r<<endl;
}
void sphere(int r)
{
    cout<<"The Volume of Sphere is : "<<(4*3.14*r*r*r)/3<<endl;
}
int main()
{
    cude(10);
    cylinder(10,15);
    sphere(20);
    return 0;
}