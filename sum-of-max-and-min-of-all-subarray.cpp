#include<iostream>
using namespace std;
int solve(int* arr, int k,int n){
int balance = 0;
for(int i = 0;i-k<0;i++){
         int maxi = arr[i];
         int mini = arr[i];
         int p =  0;
    for(int j = i;p<k;j++){
        if(arr[j]>maxi){
            maxi = arr[j];
        }
        if(arr[j]<mini){
            mini = arr[j];
        }
        p++;
    }
    balance+=maxi+mini;
}


return balance;

}
int main(){
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout<<solve(arr,k,7);
}
//time complexcity ->o(n*k);
//kya optimized kiya jaa sakta h ha yes using queue
