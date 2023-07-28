#include<iostream>
using namespace std;
void bubblesort(int* arr,int n){
//base
if(n==0 || n==1){
    return;
}
for (int i = 0; i < n-1; i++)
{
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}
bubblesort(arr,n-1);
}
int main(){
    int arr[6]={2,17,1,0,19,56};
    int s = 6;
    bubblesort(arr,s);
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}