#include <iostream>
using namespace std;

int main()
{
    int i,n,j;
    for(i=0;i<5;i++)
    {
        for(j=5-i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}