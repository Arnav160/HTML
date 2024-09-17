#include <iostream>
using namespace std;

int main()
{
    int i,m,j,n,p,q,prod=0,k;
    cout<<"Enter the number of rows of first array: ";
    cin>>m;
    cout<<"Enter the number of column of first column: ";
    cin>>n;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter element: ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter the number of rows of second array: ";
    cin>>p;
    cout<<"Enter the number of column of second array: ";
    cin>>q;
    int d=p*q;
    int b[p][q];
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<"Enter element: ";
            cin>>b[i][j];
        }
    }
    int c[m][q];
    if(n!=p)
    {
        cout<<"Not possible: ";
    }
    else
    {
        
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<n;k++)
            {
                prod+= a[i][k]*b[k][j];
            }
            c[i][j]=prod;
            prod=0;
        }
    }
    }
    cout<<"The matrix after muliplying is: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}