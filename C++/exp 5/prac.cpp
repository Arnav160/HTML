#include <iostream>
using namespace std;

int main()
{
    int i,n,j;
    for(n=30;n>2;n++)
    {
    for(i=1;i<=30;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=29;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    }
}