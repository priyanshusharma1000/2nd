#include<iostream>
using namespace std;
class A{
public:
int b;
static int a;
static int getstatic(){
    A::a=19;
    cout<<a;
    return a;
}

};
int A::a=100;
int main(){
cout<<A::a;
A::getstatic();
    return 0;
}