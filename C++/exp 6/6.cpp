#include <iostream>
using namespace std;

int main()
{
    int i,j,n,m;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int b=m*n;
    int sum=0;
    int a[m][n]={};
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter element: ";
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
    }
    cout<<"The sum of the array is: "<<sum;
}