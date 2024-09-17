#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter number of elements :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }
   swap(a[0],a[n-1]);
   for(i=0;i<n;i++)
   {
    cout<<"The array after swapping is: "<<a[i]<<endl;

   }
}