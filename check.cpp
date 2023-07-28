#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>prime,int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout<<prime[i]<<" ";
    }
    

}
int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    vector<int>prime(n+1,1);
    print(prime,n);
    return 0;
    
}
