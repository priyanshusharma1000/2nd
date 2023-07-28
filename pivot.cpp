#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s = 0;
    int e = n -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if (arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{e = mid;}
        mid = s+(e -s)/2;
    }
    return e;
}
int main(){
    int arr[5]={3,4,5,0,1};
    cout<<"pivot of array is :"<<getpivot(arr,5)<<endl;
}