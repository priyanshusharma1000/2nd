#include <iostream>
using namespace std;
int main()
{
    string s = "that is insane.this is really insane !!";
    s.erase(14);
    cout << s << endl;
    cout << "the length of string is :" << s.length() << endl;
    cout << s.find("is");

    return 0;
}