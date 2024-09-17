#include <iostream>
using namespace std;

int main()
{
    int i,m,n,sum=0;
    cout<<"Enter two numbers in ascending order: ";
    cin>>m>>n;
    if(n>m)
    {
        for(i=m;i<=n;i++)
        {
            sum=sum+i;
        }
        cout<<sum;
    }
    else cout<<"Invalid";
}