#include<iostream>
using namespace std;
void saydigit(int n,string arr[]){
//base case
if(n == 0){
    return;
}
//processing
int digit = n%10;
n = n/10;
saydigit(n,arr);
cout<<arr[digit]<<" ";

}
int main(){
    cout<<"enter number";
    int n;
    cin>>n;
    string arr[]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    saydigit(n,arr);
    return 0;

}