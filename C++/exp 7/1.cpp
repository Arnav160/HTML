#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int ct=0;
    char s1[10]="Arnav";
    char ch='a';
    char s2[10]="Agrawal";
   int l=strlen(s1);
    int c= strcmp(s1,s2);
    cout<<strcpy(s1,s2)<<endl;
    cout<<strcat(s1,s2)<<endl;
    cout<<strrchr(s1,ch)<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    char a[15]="Vedant";
    for(int i=0;a[i]!='\0';i++)
    {
        ct++;
    }
    string b="Vedant";
    int x=b.length();
}