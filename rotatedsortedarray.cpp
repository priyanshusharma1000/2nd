#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
      int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key)
        {return mid;}
        else if(arr[mid]>key){
            e = mid -1;
        }
        else if(arr[mid]<key){
            s = mid +1;
        }
      mid = s +(e -s)/2;
    }
    return -1;
}
int getpivot(int arr[],int n){
    int s = 0;
    int e = n -1;
    int mid = s+(e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{e = mid;}
        mid = s+(e -s)/2;
    }
    return e;
}
int findposition(int arr[],int size,int key){
int pivot = getpivot(arr,11);
if(key>=arr[pivot] && key<= arr[size -1]){
   return binarysearch(arr,pivot,size-1,key);
}
else{
    return binarysearch(arr,0,pivot-1,key);
}
}


    
int main(){
    int arr[11]= {3,8,10,17,18,0,4,5,5,6,7};
    cout<<"pivot is :"<<getpivot(arr,11)<<endl;
    cout<<"presence of 4 in rotated sorted array is :"<<findposition(arr,10,4)<<endl;

    return 0;
}