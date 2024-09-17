#include <iostream>
using namespace std;

int main()
{
    int i=0,n,j;
    cout<<"Enter number of elements of array: ";
    cin>>n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
        
    }
    i=0;
    for(j=n-1;j>=0;j--)
        {
           b[j]=a[i];
            i++;
        }
    
    cout<<"Reversed array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
   return 0;
}