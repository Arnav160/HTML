#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    char x;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"Enter the operation: ";
    cin>>x;
    switch(x)
    {
        case '+':
        c=a+b;
        cout<<"The sum is: "<<c;
        break;
        case '*':
        c=a*b;
        cout<<"The product is: "<<c;
        break;
         case '/':
        c=a/b;
        cout<<"The quotient is: "<<c;
        break;
         case '-':
        c=a-b;
        cout<<"The difference is: "<<c;
        break;
        default: 
        cout<<"Invalid operator.";
    }

}