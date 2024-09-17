#include <iostream>
using namespace std;

int main()
{
    int i,n,odd=0,even=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"The number of even elements are: "<<even<<endl;
    cout<<"The number of odd elements are: "<<odd<<endl;
}