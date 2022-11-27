#include<iostream>
using namespace std;
void selectionsort(int*arr,int n){
    //base case
    if(n==0||n==1){
        return;
    }
    
    for (int i = 1; i <=n-1; i++)
    {
        if(arr[0]>arr[i]){
            swap(arr[0],arr[i]);
        }
    }
    selectionsort(arr+1,n-1);
    
}
int main(){

int arr[5]={10,5,11,4,56};
int n =5 ;
selectionsort(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;


}