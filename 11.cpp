#include <iostream>
using namespace std;

int main()
{
    int s1,s2,s3;
    cout<<"Enter first side: "; cin>>s1;
    cout<<"Enter second side: "; cin>>s2;
    cout<<"Enter third side: "; cin>>s3;
    if(s1+s2>s3 || s2+s3>s3 || s3+s1>s2 )
    {
        cout<<"The triangle is valid." <<endl;
    }
    else
    {
        cout<<"The triangle is not valid" <<endl;
    }
    float a;
    a=(s2*s3)/3;
    cout<<"Area of the triangle is: "<<a <<endl;
    
}