#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<iostream>
using namespace std;
int main(){
 map<int,string>mp;
 mp[0] = "p";  //o(log(n))
 mp[1] = "r";
 mp[3] = "y";
 mp[2] = "i";

 cout<<mp.size()<< " ye size h map ke "<<endl;
 auto it = mp.find(6);
 --it;
 mp.erase(it);

 for(auto i : mp){
   cout<<i.first<< " ------>"<<i.second<<endl;
 }

}

// map me key value ke form me data store haota h or key hameesa ascending order me arrange hoti h or insertion ke tc o(log n) hoti agar pure map ke t.c ke baat ke jaae to ye O(nlogn) hogi or yahi compledxity print ke bhi hogi


//unordered map
/*int main(){
  unordered_map<int,char>mp;
  mp[0] = 'p';//O(1)
  mp[0] = 'r';
  mp[3] = 'i';
  mp[2] = 'u';
  mp[5] = 's';

   auto it = mp.find('s');//O(1)
   if(it!=mp.end()){
    mp.erase(it);
   }
  for(auto &i :mp){
     cout<<i.first<<"-------->>>>>>"<<i.second<<endl;
  }


}
*/
/*int main(){
 unordered_set<int>s;
  s.insert(1);
  s.insert(2);
  s.insert(5);
  s.insert(6);
  auto it = s.find(2);
  if(it!=s.end()){
    s.erase(it);
  }
  for(auto it = s.begin();it!=s.end();it++){
    cout<<(*it);
  }
}
*/
/*int main(){
multiset<int>s;
s.insert(4);
s.insert(6);
s.insert(2);
s.insert(0);
s.insert(6);
s.insert(4);

for(auto i:s){
  cout<<i<<" ";
}
*/
/*int main(){
  map<int,map<int,vector<int>>>nodes;
  nodes[0][0].push_back(1);
  nodes[-1][1].push_back(2);
  nodes[1][1].push_back(3);
  nodes[-2][2].push_back(4);
  nodes[0][2].push_back(5);
  nodes[0][2].push_back(6);
  nodes[2][2].push_back(7);
  nodes[1][3].push_back(8);
  nodes[3][3].push_back(9);

  for(auto i:nodes){
    
    
    for(auto j: i.second){
      int p = j.first;
      
    vector<int>ans(j.second.begin(),j.second.end());
   

    cout<<" level "<<p<<endl;
    for(auto p : ans){
      cout<<p<<" ";
    }

    }
    cout<<endl;

  }

}
*/
