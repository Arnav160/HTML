#include <iostream>
using namespace std;

int main()
{
    int a,b;
    bool l;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The largest of the two numbers is: ";
    l=a<b?cout<<b : cout<<a;
}