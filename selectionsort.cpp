#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n -1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j <n; j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
    swap(arr[minIndex],arr[i]);
    }
    cout<<"your sorted array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}




int main(){

    int arr[5]={9,2,5,10,34};
    cout<<"before sorting array is :"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    selectionsort(arr,5);
    return 0;

}