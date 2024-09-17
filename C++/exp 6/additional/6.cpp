#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
        b[i]=a[i]; 
    }
    cout<<"The copied array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
}