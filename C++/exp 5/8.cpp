#include <iostream>
using namespace std;

int main()
{
    int i,r,n,sum=0,fact=1,ct=0,j=1,k;
    cout<<"Enter number: ";
    cin>>n;
    int og=n;
    while(n!=0)
    {
        n=n/10;
        ct++;
    }
    n=og;
    for(i=1;i<=ct;i++)
    {
        r=n%10;
        for(k=r;k>0;k--)
        {
            fact=fact*k;

        }
        sum+=fact;
        n=n/10;
        fact=1;
    }
    if(sum==og)
    {
        cout<<"Number is Strong.";

    }
    else
    {
        cout<<"Number is not Strong.";
        
    }
}