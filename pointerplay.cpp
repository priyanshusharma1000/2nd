#include<iostream>
using namespace std;
void update(int *ptr){
       
    ptr = ptr +1;
}
int sumof(int arr[],int n){
    int sum =0;
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int main(){
    /*int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr = arr;
    cout<<*ptr<<endl;;
    cout<<"after change value of *ptr is :"<<endl;
    (*ptr)++;
    cout<<*ptr<<endl;
    ptr = ptr +3;
    cout<<"after adding 3 to ptr :"<<endl;
    cout<<*ptr<<endl;
    ptr+=12;
    cout<<*ptr;
    cout<<ptr;
    cout<<arr<<endl;
    int *ptr =arr;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<endl<<sizeof(arr)<<"and size of pointer is"<<endl<<sizeof(ptr);*/
    //int arr[5]={1,2,3,4,5};
    ///int *ptr = arr;
    //cout<<"integer array ke case me :"<<ptr<<endl;
    //char ch[6]="abcde";
    //char *p = &ch[0];
    //cout<<"character array ke case me :"<<p<<endl;
    //char cha ='Z';
    //char *ps = &cha;
   // cout<<"when no null character is found :"<<ps<<endl;*/
   
   
   /* int val = 10;
    int *ptr = &val;
    cout<<"BEFORE  :"<<ptr<<endl;
    cout<<"BEFORE VALUE IS  :"<<*ptr<<endl;

    update(ptr);
    cout<<"AFTER   :"<<ptr<<endl;
    cout<<"AFTER VALUE IS  :"<<*ptr<<endl;*/
    int arr[5]={1,2,3,4,5};
   // cout<<"sum of part of array is :"<<sumof(arr+2,3)<<endl;
    //when we want to send a part of array to a function we can do it bcoz we know that in case when we pass array as a argument of function ...in function compiler make a pointer of array having the address of main function array ..we can also modify the address of array we want to send in function see the code is done before this line we have only send last two elements rather the passing full arraay!!
  for(char i:arr){
    cout<<i<<" ";
  }



   



    return 0;
}
