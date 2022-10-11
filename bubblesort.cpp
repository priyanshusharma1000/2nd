#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{  bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
             swapped = true;

            }
        }
        if (swapped == false){
            break;
        }
        
    }
    cout<<"your sorted array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}
int main(){
    int arr[5] = {0,1,2,3,4};
    cout<<"before swap your array is :"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    bubblesort(arr,5);
    return 0;
    

}