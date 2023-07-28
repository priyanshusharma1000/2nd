//q1 print name N times
#include<iostream>
using namespace std;
void func(int cnt,int n){
if(cnt<=n)
return;
cout<<"priyanshu"<<endl;
cnt++;
func(cnt,n);
}
int main(){
int n;
cin>>n;
int cnt = 1;
func(cnt,n);
}