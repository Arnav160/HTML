#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>=b && b>=c || c>=b && b>=a)
    {
        cout<<"The second largest number is: "<<b;
    }
    else if(b>=c && c>=a || a>=c && c>=b)
    {
        cout<<"The second largest number is: "<<c;
    }
    else if(c>=a && a>=b || b>=a && a>=c)
    {
        cout<<"The second largest number is: "<<a;
    }
}