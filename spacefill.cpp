#include <iostream>
#include<string.h>
using namespace std;
void fillgap(string s)
{
    string temp = " ";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] ==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {

            temp.push_back(s[i]);
        }
    }
    cout << "your final string is   :" << temp;
}
int main()
{
    string p;
    cout<<"enter your string :"<<endl;
    getline(cin,p);
    cout << "your previous string is  :" << p << endl;
    fillgap(p);
    return 0;
}