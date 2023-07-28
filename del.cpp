#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
          if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
        }
        
    }
    cout<<"your sorted array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int arr[5] ={2,1,0,6,7};
    cout<<"before sorting array is :"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    bubblesort(arr,5);
    return 0;
    
}