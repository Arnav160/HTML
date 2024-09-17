#include <iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    float p,a;
    a=3.14*r*r;
    p=2*3.14*r;
    cout<<"The area is: "<<a <<endl;
    cout<<"The perimeter: "<<p <<endl;
    return 0;
}