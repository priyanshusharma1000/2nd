#include<iostream>
using namespace std;
class A{
int a;
public:
A(int a){
  this->a =a ;
}
int getdata(){
    return a;
}
void operator -(){
    this->a-=1;
}
};
int main(){
    A a(18);
    cout<<"BEFORE   :"<<a.getdata()<<endl;
    -a;
    cout<<"AFTER   :"<<a.getdata()<<endl;
    return 0;
    

}