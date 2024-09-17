#include <iostream>
using namespace std;

int main()
{int x;
x=65;
for(x=65;x<=122;x++)
{if(x>=91 && x<97)
{
continue;
}
cout<<(char)x;

}
return 0;
}