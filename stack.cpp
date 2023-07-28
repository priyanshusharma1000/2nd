#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int size;
int top;

stack(int size){
    this->size=size;
    arr = new int[size];
    top = -1;
}
void push(int d){
if(top==size-1){
    cout<<"overflow";
}
else{
    top= top+1;
    arr[top]=d;
}
}
void pop(){
if(top<0){
    cout<<"underflow"<<endl;
}
else{
    top = top-1;
}
}
int  peek(){
if(top<0){
    
    return -1;

}
else{
return arr[top];
}

}
bool empty(){
    if(top<0){
        return true;
    }
    else{
        return false;
    }
}
};
int main(){
stack s(5);
s.push(2);
s.push(3);
cout<<s.peek();
s.pop();
cout<<s.peek();
s.pop();
s.pop();
if(s.empty()){
    cout<<"emprty";
}
else{
    cout<<"not empty";
}






}