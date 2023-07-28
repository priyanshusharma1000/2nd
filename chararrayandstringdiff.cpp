#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10];
    string str;
    cout<<"enter a character array"<<endl;
    cin >> a;
    cout << "now enter string  :" << endl;
    getline(cin,str);
    cout << "your char array   :" << a << endl;
    cout << "your string is  :" << str << endl;
    a[2] = '\0';
    
    cout<<"your char array after modification  :"<<a<<endl;
    cout<<"your string is after modification  :"<<str<<endl;
    return 0;
}