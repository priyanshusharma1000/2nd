#include<stack>
#include<iostream>
using namespace std;
int main(){
string str = "pulkit";
stack<char>s;
for(int i=0;i<=str.length()-1;i++){
    s.push(str[i]);
}
string ans = "";
while(!s.empty()){
int ch = s.top();
ans.push_back(ch);
s.pop();
}
    
cout<<ans;
    
    
    
    
    
}