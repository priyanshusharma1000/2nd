#include<iostream>
#include<string.h>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(char a[]){
int s =0;
int count = 0;
for (int i = 0; a[i]!='\0'; i++)
{
    count++;
}
int e = count -1;
while(s<e){
    if(tolowercase(a[s])!=tolowercase(a[e])){
        return 0;
    }
    else{
        s++;
        e--;
    }
}
return 1;

}
int main(){
    char c[10];
    do{

    cout<<"enter a string"<<endl;
    
    cin>>c;}while(checkpalindrome(c)!=0);

    
   cout<<"your string is palindrome or not : "<<checkpalindrome(c)<<endl;
    return 0;
}