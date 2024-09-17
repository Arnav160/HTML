#include <iostream>
using namespace std;

int main()
{
    int i,n,og,sum=0,ct=0;
    cout<<"Enter a number: ";
    cin>>n;
    do
    {
        og=n%10; 
        sum=sum+og;
        n=n/10; 
    }
    while(n!=0);
    cout<<sum;
    
}