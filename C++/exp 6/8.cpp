#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    int a[3][3]={};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element: ";
            cin>>a[i][j];
            
        }
    }
    int big=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if (a[i][j]>big)
        {
            big=a[i][j];
        }
        }
    }
    cout<<"The largest number is: "<<big;
}