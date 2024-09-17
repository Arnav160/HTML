#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,d,x1,x2;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"This is your quadratic equation:"<<endl;
    cout<<a; cout<<"x^2 + ";cout<<b;cout<<"x + "; cout<<c<<endl;
    d=sqrt((b*b)-(4*a*c));
    if(d>0)
    {
    x1=((-b)+d)/(2*a);
    x2=((-b)-d)/(2*a);
    cout<<"The roots are: ";
    cout<<x1<<endl;
    cout<<x2<<endl;
    }
    else 
    {
        cout<<"Imaginary roots.";
    }
    return 0;
}