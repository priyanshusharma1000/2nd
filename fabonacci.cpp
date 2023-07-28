#include<iostream>
using namespace std;
int fab(int n){
    //base condition
    if(n ==0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    //rc
    int ans = fab(n-1)+fab(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"the element at"<<n<<"index in fabonaci series is"<<fab(n)<<endl;
    return 0;
}