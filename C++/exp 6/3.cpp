#include <iostream>
using namespace std;

int main()
{
    int i,j,n1,n2;
    cout<<"Enter number of elements of first array: ";
    cin>>n1;
    int a[n1];
    for(i=0;i<n1;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }
    cout<<"Enter number of elements of second array: ";
    cin>>n2;
    int b[n2];
    for(i=0;i<n2;i++)
    {
        cout<<"Enter element: ";
        cin>>b[i];
    }
    int c[n2];
    cout<<"The intersection points are: "<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                cout<<b[j]<<endl;
            }
        }
        
    }
}