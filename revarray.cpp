#include <iostream>
#include<vector>
using namespace std;
/*void revarray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    cout << "your reverse array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    cout << "before -->" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    revarray(arr, 5);
    return 0;
}  THROUGH STATIC ARRAY APPROACH AND THROUGH VECTOR IT CAN BE IMPLEMENTED AS------->*/
vector<int> reverse(vector<int>v){
    int s =0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<i<<" ";
    }
    
}
int main(){
    vector<int>v;
     v.push_back(11);
     v.push_back(7);
     v.push_back(3);
     v.push_back(12);
     v.push_back(4);
     vector<int>ans = reverse(v);
     print(v);
     return 0;
}