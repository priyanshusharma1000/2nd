#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int s = 0;
    int e = size -1;
    int ans = -1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
       else if ( arr[mid]<key){
            s = mid +1;
        }
        else{ e = mid -1;}
         mid = s +(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int s = 0;
    int e = size -1;
    int ans = -1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
       else if ( arr[mid]<key){
            s = mid +1;
        }
        else { e = mid -1;}
         mid = s +(e-s)/2;
    }
    return ans;
}

int main(){
  int arr[11] = { 0,2,2,2,2,2,3,3,4,4,6};
    cout<<"the first occurence of 2 is :"<<firstocc(arr,9,2)<<endl;
    cout<<lastocc(arr,11,2);
     return 0;
}
