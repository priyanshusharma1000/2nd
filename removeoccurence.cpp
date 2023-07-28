#include <iostream>
using namespace std;
void removeoccurences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout << "after erase your string is : " << s << endl;
}
int main()
{
    string s("daabcbaabcbc");
    cout << "before erase :" << s << endl;
    removeoccurences(s, "abc");

    return 0;
}