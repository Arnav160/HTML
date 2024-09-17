#include <iostream>
using namespace std;

int main()
{
    int i,j,m,n,sum=0;
    cout<<"Enter number of rows: ";
    cin>>m;
    int a[m][m]={};
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"Enter element: ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<i+1;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<"Sum = "<<sum;

}