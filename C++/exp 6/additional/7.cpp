#include <iostream>
using namespace std;

int main()
{
    int i,j,n,m,sum=0;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter elements: ";
            cin>>a[i][j];
        }
    }
    i=0;j=0;
    while(i<m && j<n)
    {
    sum+=a[i][j];
    i++;j++;
    }
    cout<<"The sum of the diagonal elements is: "<<sum<<endl;
}