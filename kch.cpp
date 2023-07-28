#include<iostream>
using namespace std;
bool binearysearch(int arr[],int s,int e,int k){
    if(s<e){
        return false;
    }
    int mid = s+(e-s)/2;
    
   if(arr[mid]>k){
     return binearysearch(arr,s,mid-1,k);
   }
   else{
      return binearysearch(arr,mid+1,e,k);
   }

}
int main(){
   int arr[6]={2,4,6,10,14,18};
   int key = 17;
   bool ans = binearysearch(arr,0,6,key);
   if(ans){
    cout<<"present"<<endl<<endl;
   }
   else{
    cout<<"absent";
   }
   return 0;
}