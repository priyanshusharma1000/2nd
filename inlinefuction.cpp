#include<iostream>
using namespace std;
inline void dugna(int& a){
    a = a*2;
}
int main(){
 int a = 50;
 dugna(a);
 cout<<a;
 return 0;

}