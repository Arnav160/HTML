#include <iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    if(a>='A'&& a<='z')
    {
        switch(a)
        {
        case 'a':
        cout<<"Vowel";
        break;
        case 'e':
        cout<<"Vowel";
        break;
        case 'i':
        cout<<"Vowel";
        break;
        case 'o':
        cout<<"Vowel";
        break;
        case 'u':
        cout<<"Vowel";
        break;
        case 'A':
        cout<<"Vowel";
        break;
        case 'E':
        cout<<"Vowel";
        break;
        case 'I':
        cout<<"Vowel";
        break;
        case 'O':
        cout<<"Vowel";
        break;
        case 'U':
        cout<<"Vowel";
        break;
        default:
        cout<<"Consonant";
        break;
    }
    }
    else
    {
    cout<<"Not an alphabet";
    }
}