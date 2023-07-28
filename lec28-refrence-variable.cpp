// refrence variable ---->same memory block but different name
// create a refrence variable--->int &j = i;
//  int i --->box of memory<----int& j
// i and j is pointing to same memory block
#include <iostream>
using namespace std;
void update(int *p){
    cout<<"address of p is :"<<p<<endl;
    *p = 123;
    p = p+1;
    cout<<"after incremented 1 to pointer the value that pointer p contained is(in update ) :"<<p<<endl;
    cout<<*p;
}


int main()
{
    /* int i =5;
     int& j = i;
     cout<<i<<endl;
     cout<<j<<endl;
     i++;
     cout<<j<<endl;
     j++;
     cout<<i<<endl;*/
     int i =0;
     int *ptr = &i;
     cout<<"address of i is :"<<&i<<endl;
     update(&i);
     cout<<i;
     cout<<"after incremented 1 to pointer the value that pointer p contained is(in main ) :"<<ptr<<endl;

 
return 0;



}
 