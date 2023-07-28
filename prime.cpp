#include<iostream>
using namespace std;
bool check(int &n,int i = 2){
    if(n<2)
    return false;
    if(n==2)
    return true;
    if(n%i==0)
    return false;
    if(i==n)
    return false;

    return check(n,i+1);





}
int main(){
  
    int n;
    cin>>n;
    if(check(n))
    cout<<"prime";
    else{
        cout<<"not prime";
    }
}