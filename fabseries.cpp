#include<iostream>
using namespace std;
class fabonacii{
    int a ;
    int b ;
    public:
    fabonacii(){
        a =0;
        b =1;
    }
    void print(int n){
      while(n!=0){
       int c = a+b;
       cout<<c<<" ";
       a = b;
       b =c;
       n--;

    }
}
};
int main(){
    fabonacii fab;
    fab.print(5);
    return 0;
}