#include <iostream>
using namespace std;

int main()
{
    int n,i; 
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1)
    {
        cout<<"The number is neither prime nor composite.";
    }
    else if(n<1)
    {
        cout<<"Invalid.";
    }
    else
    {
    for(i=2;i<(n-1);i++)
    {
        if(n%i==0)
        {
            cout<<"The number is not prime.";
            break;

        }
        else
        {
            cout<<"The number is prime.";
            break;
        }
    }
    }
}
