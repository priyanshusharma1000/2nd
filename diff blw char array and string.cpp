#include <iostream>
using namespace std;
int main()
{
    char a[10];
    string b;
    cin >> a;
    cout << "now enter string" << endl;
    cin >> b;
    cout << "your char array" << a << endl;
    cout << "your string is" << b << endl;
    a[2] = '\0';
    b[2] = '\0';
    cout<<"your char array after modification"<<a<<endl;
    cout<<"your string is after modification"<<b<<endl;
    return 0;
}