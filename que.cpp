#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int>q;
q.push(10);
cout<<q.front()<<endl;
if(q.empty()){
    cout<<"queue is empty"<<endl;
}
else{
    cout<<"queue is not empty"<<endl;
}
cout<<q.size();
return 0;
}