//printing all the subsequences of array*#include<vector>
#include<vector>
#include<iostream>
using namespace std;
void subseq(int index,vector<int>&ds,int* arr,int n){
    if(index==n){
        for(int it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }
    
    //linearly element daaloo datastructure ds me
    ds.push_back(arr[index]);
    //include
    subseq(index+1,ds,arr,n);
    ds.pop_back();
    //exclude
    subseq(index+1,ds,arr,n);
}
int main(){
    int arr[3]={1,2,3};
    int n = 3;
    int index = 0;
    vector<int>ds;
    subseq(index,ds,arr,n);
    return 0;
}
//print all subsequence whose sum is equals to k
//same pehle jaisa he h bus yha sum ke saath comapre ho rha h
/**/
/*
#include<vector>
#include<iostream>
using namespace std;
void subseq(int index,int n,int sum,vector<int>&ds,int s,int* arr){
    if(index==n){
        if(s==sum){
            for(int it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    subseq(index+1,n,sum,ds,s,arr);
     s-=arr[index];
    ds.pop_back();
    
    subseq(index+1,n,sum,ds,s,arr);
}

int main(){
    int arr[3]={1,2,1};
    int n = 3;
    int sum = 2;
    int s = 0;
    vector<int>ds;
    int index = 0 ;
    subseq(index,n,sum,ds,s,arr);
}*/