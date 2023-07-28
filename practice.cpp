#include<iostream>
using namespace std;
void selectionsort(int *arr,int n){
  for (int i = 0; i <n-1 ; i++)
  {
      int minindex =i;
      for (int j =i+1 ; j <n ; j++)
      {
         if(arr[minindex]>arr[j]){
            int t = arr[minindex];
            arr[minindex]=arr[j];
            arr[j]=t;
         }
      }
      
  }
  
}
void bubblesort(int* arr,int n){
    for (int i = 1; i <n ; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int t =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        
    }
    
}


void insertionsort(int* arr,int n){
    for (int i = 1; i <n; i++)
    {   int temp = arr[i]; 
        int j = i-1;
        for (; j>=0; i++)
        {
            if(arr[j]>arr[i]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
       arr[j+1] = temp;
    }
    
}
int main(){

int arr[5]={64,25,12,22,11};
//selectionsort(arr,5);
//bubblesort(arr,5);
insertionsort(arr,5);
cout<<"AFTER  :"<<endl;
for (int  i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
return 0;



}