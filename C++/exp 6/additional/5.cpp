#include <iostream>
using namespace std;

int main()
{
    int i,j,n,del;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }
    cout<<"Enter which element to be deleted: ";
    cin>>del;
    for(i=0;i<n;i++)
    {
        if(del==a[i])
        {
            int j=i;
            while(j<n-1)
            {
                a[j]=a[j+1];
                j++;
            }
            n--;
        }
        
    }
   
    cout<<"The new array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}