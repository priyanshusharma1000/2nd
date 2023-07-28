#include <iostream>
using namespace std;
int addDigits(int num) {
        if(num%10 == 0)
        return num;
        int sum = 0;
        while(num!=0){
            sum = sum + num%10;
            num = num/10;
        }
        num  = sum;
        return addDigits(num);
    }
    int main(){
        int n;
        cin>>n;
        cout<<addDigits(n);
        return 0;
    }