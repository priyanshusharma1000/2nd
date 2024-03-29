#include <iostream>
using namespace std;
#include<queue>
int solve(int* arr,int k,int n){
    deque<int>maxi(k);
    deque<int>mini(k);
    int bal = 0;
    //process first k size window
    for(int i = 0;i<k;i++){
        while(!maxi.empty() && arr[maxi.back()]  <= arr[i])
        {
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]  >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
            
    }
    bal = arr[maxi.front()]  + arr[mini.front()];
    for(int i=k;i<n;i++){
        //removal
        while(!maxi.empty() && (i-maxi.front() >= k)){
            maxi.pop_front();
        }
          while(!mini.empty() && (i -mini.front() >= k)){
            mini.pop_front();
        }
        //additiion
        while(!maxi.empty() && arr[maxi.back()]  <= arr[i])
        {
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]  >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
        bal+=arr[maxi.front()] + arr[mini.front()];
        
    }
    return bal;
    
}
int main() {
    // Write C++ code here
   int arr[] = {2, 5, -1, 7, -3, -1, -2} ;
   int k = 4;
   cout<<solve(arr,k,7);

    return 0;
}