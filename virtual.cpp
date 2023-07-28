#include<iostream>
using namespace std;
class abcd{
    int a ;
    public:
 virtual void setdata1(int c) { a =c;}
 virtual void display1(){ cout<<a;}
};
class bad : public abcd{
    int b;
    public:
    void setdata1(int c) { b =c;}
     void display1(){ cout<<b<<"  bad";}

};
int main(){
   abcd obj;
   abcd *ptr;
   bad boy;
   ptr =&boy;
   ptr->setdata1(10);
   ptr->display1();
   return 0;

}