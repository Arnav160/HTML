#include <iostream>
using namespace std;

int main()
{
    float tc,tf;
    cout<<"Enter the temperature in celsius: ";
    cin>> tc;
    tf=(tc*9/5) + 32;
    cout<<"The temperature in farenheit is: "<<tf;
}