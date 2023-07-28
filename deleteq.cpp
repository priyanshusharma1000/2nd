#include <iostream>
using namespace std;
class employee
{
    int **a;
    int n1;
    int m1;
public:
    void getdata(int n,int m)
    {  n1 = n;
       m1 = m;
        a = new int*[n1];
        cout<<"enter elements in array "<<endl;

        for (int i = 0; i < n1; i++)
        { for (int j = 0; j<m1 ; j++)
        {
            cin >> a[i][j];

        }
        
        }
    }
    void printdata()
    {
        for (int i = 0; i < n1; i++)
        { 
            for(int j =0;j<m1;j++){
                cout<<a[i][j]<<" ";
            }
        }
    }
};
int main()
{
    employee E;
    
    E.getdata(3,3);
    E.printdata();
    return 0;
}