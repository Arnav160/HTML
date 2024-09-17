#include <iostream>
using namespace std;

int main()
{
    int i,n,n1=0,n2=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    int e[n];
    int o[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
        if(a[i]%2==0)
        {
            e[n1]=a[i];
            n1+=1;
        } 
        else
        {
            o[n2]=a[i];
            n2+=1;
        }
    }
    cout<<"The even numbers are: "<<endl;
    for(i=0;i<n1;i++)
    {
        cout<<e[i]<<endl;

    }
    cout<<"The odd numbers are: "<<endl;
    for(i=0;i<n2;i++)
    {
        cout<<o[i]<<endl;
    }
}