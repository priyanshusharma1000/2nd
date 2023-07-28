#include<iostream>
using namespace std;
void findarrayrowsum(int arr[][3]){
 int final[3];
 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 3; j++)
    {
       final[i]=arr[i][j];
    }
    
 }
 cout<<"sum of rows of array is   :"<<endl;
 for (int i = 0; i < 3; i++)
 {
    cout<<final[i]<<endl;
 }
 
 
}
int main(){
    int a[3][3];
    cout<<"enter elements in array   :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {  cout<<i+1<<"row start";
            cin>>a[i][j];
        }
        
    }
    cout<<"your 2D array is look like this :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    findarrayrowsum(a);
    return 0;
    

}