#include<iostream>
using namespace std;
void romergesort(int num1[],int n,int num2[],int m){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0;j<m; j++)
       {
         if(num1[i]<num2[j]){

           i++;
         }
         else if (num1[i]>num2[j]){
            num1[i+1]=num1[i];
            num1[i]=num2[j];
            j++;
         }
       }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<num1[i]<<" ";
    }
    
    
}
/*void print(int ans[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}*/
int main(){
    int num1[6]={1,2,3,0,0,0};
    int num2[3]={2,5,6};
    romergesort(num1,6,num2,3);
    
    return 0;
}