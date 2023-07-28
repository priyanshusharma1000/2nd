#include<stack>
#include<iostream>
using namespace std;
void print(stack<int>s){
   if(s.empty())
   return;
   int num = s.top();
   s.pop();
   print(s);
   cout<<num<<" ";

}
void insertatbottom(stack<int>&st,int num){
  if(st.empty())
  {
    st.push(num);
    return;
  }
  int e = st.top();
  st.pop();
  insertatbottom(st,num);
  st.push(e);
}
void revstack(stack<int>&st){
    if(st.empty())
    return;
    int num = st.top();
    st.pop();
    revstack(st);
    insertatbottom(st,num);

}
int main(){
    stack<int>s;
    for(int i=0;i<5;i++){
       int t;
       cin>>t;
       s.push(t);                     
    }
    print(s);
    revstack(s);
    print(s);


}