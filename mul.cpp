#include<set>
#include<map>
#include<iostream>
using namespace std;
int main(){
map<int,map<int,multiset<int> >>mp;
mp[0][0].insert(0);
mp[-1][1].insert(1);
mp[1][1].insert(4);
mp[-2][2].insert(0);
mp[0][2].insert(2);
mp[0][2].insert(1);

for(auto&i:mp){
    int hd = i.first;
    for(auto j:i.second){
        int lvl = j.first;
       for(auto k:j.second){
         cout<<hd<<"-->>"<<lvl<<"-->>"<<k<<" ";
       }
    }
    cout<<endl;

}


}
//learning agar two nodes same horixontal distance and same level pe hogi to multiset unhe ascending order me arrange kar dega
//agar same hd then arrange according to ascending order of level
