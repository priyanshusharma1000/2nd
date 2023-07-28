#include<iostream>
using namespace std;
int sum(int arr[],int size){
    //base case
    
    if(size == 1){
        return arr[0];
    }
        int final = sum(arr+1,size-1);
        return arr[0] +final;

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int s = sizeof(arr)/sizeof(arr[0]);
    int paisa = sum(arr,s);
    cout<<paisa;
    return 0;


}