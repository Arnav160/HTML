#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter number of elements of the array: ";
    cin>>n;
    int a[n]={};
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements: ";
        cin>>a[i];
        a[i]=a[i]*5;
    }
    cout<<"The new array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}