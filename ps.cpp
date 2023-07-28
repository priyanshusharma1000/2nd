//q1 print name N times
#include<iostream>
using namespace std;
/*void func(int cnt,int n){
if(cnt>n){
return;}
cout<<"priyanshu"<<endl;
cnt++;
func(cnt,n);
}
int main(){
int n;
cin>>n;
int cnt = 1;
func(cnt,n);
}
*/
//q2: print the no from 1 to n
/*void func(int n){
    if(n<=0){
        return;
    }
    int num = n;
    n--;
    func(n);
    cout<<num<<" ";

}
int main(){
    int n;
    cin>>n;
    func(n);
}*/
//q3: sum of first n numbers
//basically recursion are of two types 
//(1) parametrized recurssion where we pass arguments and we want to print the ans in function only
//  here we pass sum as argument but what if we want that our function will return answer to main function where we can print it and we only pass n as argument then we use 
// concept of functional recursion 
/*void func(int n,int& sum){
 if(n<=0){
  cout<< sum;
  return;
 } 
 sum+=n;
 func(n-1,sum);  

}*/
//example of functional recurssion
//functional recursson me recurrence relation lgta h

/*int func(int n){
    if(n==0)
    return 0;
    return n + func(n-1);
}
int main(){
int n;
cin>>n;
int sum = 0;
cout<<func(n);
}*/
//problems on recurssion
//reverse an array using recurssion
/*int* func(int* arr,int s,int e){
if(s>=e){
    return arr;
}
swap(arr[s++],arr[e--]);
func(arr,s,e);
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int s = 0;
    int e = 4;
    int *ans = func(arr,s,e);
    for(int i =0;i<5;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/
//q2: check whether a string is palindrome or not using recurssion
/*bool check(string& str,int s,int e){
    if(s>=e){
        return true;
    }
    if(str[s++]!=str[e--])
    return false;
    return check(str,s,e);
}
int main(){
    string str = "nayanm";
    int s = 0;
    int e = str.length()-1;
    if(check(str,s,e)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
*/
//multiple recurssion calls
//best example fibonacci series
// tc -->o(2^n);
//in multiple recurssion first function is implemented first once its o/p is returned then the next one is executed and hence in multiple recurssive calls function is executed onr by one not sequentially first fib(n-1) is executed then fib(n-1) then fib(n-2)
/*int fib(int n){
    if(n<=1)
    return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
int n;
cin>>n;
cout<<fib(n);
return 0;
}*/
//fibonacci series using recurssion
/*int fib(int n){
    if(n<=1)
    return n;
    return fib(n-1) +fib(n-2);
}
int main(){
    int n;
    cout<<"enter the limit of your fibonacci series";
    cin>>n;
    int i = 0;
    while(i<n){
        cout<<fib(i)<<" ";
        i++;
    }
    return 0;
}*/
/*int fib(int n){
    if(n<=1)
    return n;
   int first = fib(n-1);
   int second = fib(n-2);
    return first+second;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}*/

