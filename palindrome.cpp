#include <iostream>
#include <string.h>
using namespace std;
char tolowercase(char ch){
    if(ch>='a'&& ch <='z'){
        return ch;
    }
    if(ch>='A'&& ch<='Z'){
        int n = ch-'A';
        return 'a'+n;
    }
}
bool checkpalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }
    if (tolowercase(str[i]) != tolowercase(str[j]))
    {
        return false;
    }
    else
    {
        return checkpalindrome(str, i+1, j-1);
    }
}

int main()
{
    string s;
    cout << "enter the string that is to be checked" << endl;
    cin >> s;
    bool ispalindrom = checkpalindrome(s, 0, s.length() - 1);
    if (ispalindrom)
    {
        cout << "its a palindrome :";
    }
    else
    {
        cout << "not a palindrome";
    }
    return 0;
}