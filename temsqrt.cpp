#include <iostream>
using namespace std;
int root(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecision(int tempsol, int precision, int n)
{
    double ans = tempsol;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int tempsol = root(n);
    cout<<"your perfect sqrt of no"<<n<<"is :"<<moreprecision(tempsol,5,n)<<endl;
    return 0;
}