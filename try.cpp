#include <iostream>
#include <string.h>
using namespace std;
void fillgap(string s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            s[i + 3] = s[i + 1];
            s[i + 4] = s[i + 2];
            s[i] = '@';
            s[i + 1] = '4';
            s[i + 2] = '0';
        }
        i++;
    }
    cout << "your final string is   :" << s;
}
int main()
{
    string p;
    cout << "enter your string :" << endl;
    getline(cin, p);
    cout << "your previous string is  :" << p << endl;
    fillgap(p);
    return 0;
}