#include <iostream>
using namespace std;
char GetMaxocc(string s)
{
    int arr[26] = {0};
    int number;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {

            number = s[i] - 'a';
            arr[number]++;
        }
        else
        {
            number = s[i] - 'A';
            arr[number]++;
        }
    }
    int ans = 0;
    int max = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max)
        {
            ans = i;
            max = arr[i];
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    return 'a' + ans;
}
int main()
{
    string s;
    cout << "enter the string " << endl;
    getline(cin, s);
    cout << "the max occuring character is :" << GetMaxocc(s);
    return 0;
}
