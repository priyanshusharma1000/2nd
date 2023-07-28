#include<iostream>
#include<array>
#include<vector>
#include<deque>
using namespace std;
int main(){
    array<int,4>a={0,1,2,3};
    cout<<a.size()<<endl;
    //cout<<a.at(0)<<endl;
    //cout<<a.front()<<endl;
    //cout<<a.back()<<endl;
    //cout<<a.front()+a.back()+a.at(1); 
    //cout<<a.empty();
    //int a[4] = {1,2,3};
    //cout<<a.size();  ERROR these all are not use in static array

   /* vector<int>a;
    cout<<a.capacity()<<endl;//memory kitne allocate hue h capacity ye darshati h
    cout<<a.size()<<endl;//kitne element hai array me size ye darshati h
    a.push_back(1);
    cout<<a.capacity()<<endl;
    a.push_back(2);
    cout<<a.capacity()<<endl;
    a.push_back(3);
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;
   cout<<a.at(0);
   a.pop_back();
  // cout<<a.at(2);//last in first out
   cout<<"before clear"<<a.size()<<endl;
   a.clear();
   cout<<"after clear"<<a.size();*/
   


   //------------>yadi mujhe pehle se he vector ka size pta ho to vector ko kese intialize karenge aaye dekhte h
/*vector<int>a(5,2);//5 no of elements and each elements is get intialize with 2 if we only write a(5)-->each 5 elements intialize with 0;
cout<<"print a "<<endl;
for(int i:a){
    cout<<i<<" ";
}
//if we want to copy a vector in another vector then
vector<int>last(a);
cout<<"print last "<<endl;
for(int i:last){
    cout<<i<<" ";
}
cout<<last.capacity();*/
//deque<int>d;
//cout<<d.empty();
//d.push_back(1);
//d.push_front(2);
/*for(int i:d){
    cout<<i<<" ";
}
cout<<"after pop back"<<endl;
d.pop_back();
for(int i:d){
    cout<<i<<" ";
}*/
/*cout<<d.at(0);//d.front,d.back is used to see front and back element and in dequeue insertion and deletion is take place from front end and back end;
cout<<d.empty();
cout<<"before erase "<<d.size()<<endl;

d.erase(d.begin(),d.begin()+1);
cout<<"after erase "<<d.size()<<endl;*/

}