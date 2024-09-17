#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,x,y,sum=0,rem1,rem2,ct=0;
    cout<<"Enter a number: ";
    cin>>num;
    x=num;
    y=num;
    while(x!=0)
    {
        x=x/10;
        ct++;
    }
    while(y!=0)
    {
        rem2=y%10;
        sum=sum+pow(rem2,ct);
        y=y/10;
    }
    if(num==sum)
    {
        cout<<"Armstrong number.";
    }
    else
    {
        cout<<"Not an armstrong number.";
    }
}
