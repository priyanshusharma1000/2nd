#include<iostream>
using namespace std;
void TOH(int n,char src,char aux,char dest){
    if(n==1){
        cout<<"move disk -"<<n<<"from disk :"<<src<<"to"<<dest<<endl;
        return;    
    }
    TOH(n-1,src,dest,aux);
    cout<<"move disk -"<<n<<"from disk :"<<src<<"to"<<dest<<endl;
    TOH(n-1,aux,src,dest);
}
int main(){
int n;
cin>>n;
TOH(n,'A','B','C');
return 0;
}