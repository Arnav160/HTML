#include <iostream>
using namespace std;

int main()
{
    char a;
    float area,r,l,b,h;
    cout<<"Enter The initial of the shape out of Cirle, Sphere, Triangle or Retangle:";
    cin>>a;
    a=tolower(a);
    switch(a)
    {
        case 'c':
        cout<<"Enter radius: ";
        cin>>r;
        area=3.14*r*r;
        cout<<"Area: "<<area;
        break;
        case 'r':
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter width: ";
        cin>>b;
        area=l*b;
        cout<<"Area: "<<area;
        break;
        case 't':
        cout<<"Enter height: ";
        cin>>h;
        cout<<"Enter base: ";
        cin>>b;
        area=(1/2)*b*h;
        cout<<"Area: "<<area;
        break;
        case 's':
        cout<<"Enter radius: ";
        cin>>r;
        area=4*3.14*r*r;
        cout<<"Area: "<<area;
        break;
        default:
        cout<<"Invalid.";
    }
}