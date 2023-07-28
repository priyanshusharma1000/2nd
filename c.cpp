#include<iostream>
using namespace std;
class dynamic{
int* arr;
public:
void setdata(int n){
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
void getdata(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
     }
    
}
};
int main(){
dynamic* d = new dynamic;
d->setdata(5);
d->getdata(7);
return 0;






}