#include <iostream>
using namespace std;

int main()
{
    int i,n,j,k;
    for(n=10;n>2;n++)
    {
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    }
}