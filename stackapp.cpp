#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<char>s;
string str = "nayan1               ";
for(int i =0;i<str.length();i++){
s.push(str[i]);
}
string ans ="";


  while(!s.empty()){
    char ch = s.top();
    ans.push_back(ch);
    s.pop();
}
cout<<ans;
}