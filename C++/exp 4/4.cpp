#include <iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,n3,n,i;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1)
    {
        cout<<n1;
    }
    else if(n<1)
    {
        cout<<"Invalid.";
    }
    else
    {
    cout<<n1<<" "<<n2<<" ";
    for(i=3;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
    }
    }
}