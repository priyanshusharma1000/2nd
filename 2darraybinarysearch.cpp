#include<iostream>
#include<vector>
using namespace std;
 bool searchmatrix( vector<vector<int>>matrix,int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int s =0;   
    int e = row*col-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        int element = matrix[mid/col][mid%col];
        if(element == target){
            return true;
        }
        if(element<target){
            s = mid +1;

        }
        else{
            e = mid -1;
        }
        mid = s +(e-s)/2;
    }
    return false;
}
int main(){
    int r1,c1;
    cout<<"enter row and coloumn of matrix :"<<endl;
    cin>>r1>>c1;
    vector<vector<int>>arr(r1*c1);
    arr.pop_back(10);

     
    int target;
    cout<<"enter the element this is to be search :"<<endl;
    cin>>target;
    searchmatrix(,target);

    
}
