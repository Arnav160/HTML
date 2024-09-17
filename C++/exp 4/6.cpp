#include <iostream>
using namespace std;

int main()
{
    int i,n,og,n2,j;
    cout<<"Enter a number: ";
    cin>>n;
    og=n;
    while(n!=0)
    {
        n2=n%10;
        j=j*10 +n2;
        n=n/10;
    }
    if(j==og)
    {
        cout<<"Number is a palindrome.";
    }
    else
        cout<<"Number is not a palindrome.";
}