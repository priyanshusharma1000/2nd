#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{   
   
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    cout << "your sorted array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {9, 8, 5, 0, 3, 6, 7, 1, 4, 2};
    
    cout << "before sorting your array is :" <<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionsort(arr, 10);
    return 0;
}
