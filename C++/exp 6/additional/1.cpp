#include <iostream>
using namespace std;

int main()
{
    int i,j,n,odd=0,even=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
        if(a[i]%2==0)
        {
            even+=a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
    cout<<"The sum of the even elements is: "<<even<<endl;
    cout<<"The sum of the odd elements is: "<<odd<<endl;
}