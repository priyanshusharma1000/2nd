#include<iostream>
using namespace std;
int partion(int *arr,int s,int e){
    int pivot = arr[s];
    int cnt =0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotindex = s+cnt;
    int t = arr[s];
    arr[s] = arr[pivotindex];
    arr[pivotindex] = t;
    int i =s;
    int j =e;
    while(i<pivotindex && j>pivotindex){

      while(arr[i]<=pivot){
        i++;
      }
      while(arr[j]>pivot){
        j--;
      }
      if(i<pivotindex && j>pivotindex){
         int t = arr[i];
         arr[i]=arr[j];
         arr[j] = t;
         i++;
         j--;
      }
}
return pivotindex;
    
}



void quicksort(int *arr,int s,int e){
//base case
if(s>=e){
    return;
}
int p = partion(arr,s,e);
quicksort(arr,s,p-1);
quicksort(arr,p+1,e);
}



int main(){
    int arr[5]={64,25,12,22,11};
    
    cout<<"AFTER :";
    quicksort(arr,0,4);
    for (int i = 0; i <= 4; i++)
    {
        cout<<  arr[i]<<" ";
    }
    return 0;
    
}