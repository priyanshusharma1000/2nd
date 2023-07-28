#include<iostream>
#include<queue>
using namespace std;
queue<int> rev(queue<int> q)
{
 if(q.empty()){
     return q;
 }
 else{
 int num = q.front();
 q.pop();
 q = rev(q);
 q.push(num);}
 return q;
       
}
void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }
}
int main(){
    queue<int>q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);
    cout<<"before function call"<<endl;
    print(q);
    cout<<"after function call"<<endl;
    q = rev(q);
    print(q);


    
}
