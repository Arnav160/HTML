#include <iostream>
using namespace std;

int main()
{
    int i,n,j;
    char ch='A',ch2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
        if(i%2==0)
        {
            ch2=tolower(ch);
            cout<<ch2;
            ch++;
            
        
        }
        else
        {
            cout<<ch;
            ch++;
        }
        }
        cout<<endl;
    }
}