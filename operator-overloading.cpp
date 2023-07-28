#include<iostream>
using namespace std;
class A{
int a ;
int b;
public:
void setdata(int a ,int b){
    this->a=a;
    this->b = b;
}
void operator +(A& obj2){
    int val1 = this->a;
    int val2 = obj2.a;
    cout<<"subtarction using plus operator is :"<<(val1-val2);
}
};
int main(){

A a;
a.setdata(9,0);
A b;
b.setdata(8,1);
a+b;
return 0;


}