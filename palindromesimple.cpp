#include <iostream>
#include <string.h>
using namespace std;
char Tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}
bool CheckPalindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s < e)
    {
        if (Tolowercase(a[s]) != Tolowercase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        
    }
    return 1;
}
int main(){
    string s;
    cout<<"enter the name "<<endl;
    getline(cin,s);
    cout<<"palindrome or not :"<<CheckPalindrome(s);
    return 0;

}