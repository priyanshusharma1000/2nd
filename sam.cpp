#include<vector>
#include<iostream>
using namespace std;
int main(){
vector<int>ans;
ans.push_back(10);
ans.push_back(20);
ans.push_back(30);
ans.push_back(40);
ans.push_back(50);
for(int i:ans){
    cout<<i<<" ";
}
ans.erase(ans.begin()+2);
ans.erase(ans.begin()+2);
cout<<endl<<endl;
cout<<ans[2];
return 0;

}