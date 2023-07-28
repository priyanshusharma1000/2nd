#include<iostream>
using namespace std;
int sum(int n){
    //base case
    
   if(n==0){
    return 0;
   }
     static int jod;
   jod+= n%10;
    n=n/10;
    sum(n);
    return jod;
}

int main(){
    int n;
    cin>>n;
    
    cout<<"sum of digits of number is :" <<sum(n) <<endl;
    return 0;
}