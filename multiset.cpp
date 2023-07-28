#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    map<int,multiset<int> >mp;
    mp[0].insert(3);
    mp[0].insert(2);
    mp[0].insert(2);
    mp[1].insert(3);
    mp[1].insert(4);
    for(auto i:mp){
        int hd = i.first;
        for(auto j:i.second){
            cout<<hd<<"-->>"<<j<<" ";
        }
        cout<<endl;
    }



}
