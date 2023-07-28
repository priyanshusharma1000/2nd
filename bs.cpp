#include<iostream>
using namespace std;
/*int binarysearch(int* arr, int n,int k){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if (arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;

    }
    return -1;
}
int main(){
    int arr[5]={2,4,6,8,9};
    int c = binarysearch(arr,5,12);
    if(c==-1){
        cout<<"element is not present"<<endl;
    }
    else{
        cout<<"element is present at index no "<<c<<endl;
    }
    return 0;
}
*/
/*void selectionsort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for (int j =i+1; j <n; j++)
        {
            if(arr[minindex]>arr[j]){
               minindex = j;;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main(){
int arr[6]={2,1,19,17,21,15};
selectionsort(arr,6);
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}

return 0;

}
*/
/*void bubblesort(int* arr,int n){
for (int i = 0; i < n-1; i++)
{
    for (int j = 0;j<n-i-1; j++)
    {
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    
}
}*/
/*void insertionsort(int* arr,int n){
for(int i =1;i<n;i++){
    int j = i-1;
    int temp = arr[i];
    for(;j>=0;j--){
        //yadi pehle wala bada h to
        if(arr[j]>temp){
            //shifting
            arr[j+1]=arr[j];
            
        }
        else{
            //ruk jaoo
            break;
        }

    }
    arr[j+1]=temp;;

}


}
int partition(int*arr,int s ,int e){
int pivot = arr[s];
int cnt = 0;
for (int i = s+1; i <=e; i++)
{
      if(pivot>=arr[i]){
        cnt++;
      }
}
int pivotindex = s+cnt;
swap(arr[s],arr[pivotindex]);
int i = s;
int j =e;
while(i<pivotindex && j>pivotindex){
while(arr[i]<=pivot){
i++;
}
while(arr[j]>pivot){
    j--;
    
}
if(i<pivotindex && j>pivotindex){
    swap(arr[i++],arr[j--]);
}



}

return pivotindex;
}
void quicksort(int* arr,int s,int e){
    //base case
    if(s>=e)
    return;
    
    int p = partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}*/
void merge(int* arr,int s,int e){
int mid = s+(e-s)/2;
int len1 = mid-s+1;
int len2 = e-mid;
int* first =new int[len1];
int* second =new int[len2];
int mainarrayindex = s;
 for (int i = 0; i < len1; i++)
 {
    first[i]=arr[mainarrayindex++];
 }
mainarrayindex= mid+1;
for (int i = 0; i < len2; i++)
{
    second[i]=arr[mainarrayindex++];
}
//merge two sorted array
mainarrayindex = s;
int index1 =0,index2 = 0;
while(index1<len1 && index2<len2){
 if(first[index1]<second[index2]){
    arr[mainarrayindex++]=first[index1++];
 }
 else{
    arr[mainarrayindex++]= second[index2++];

 }
}
while(index1<len1){
    arr[mainarrayindex++]=first[index1++];
}
while(index2<len2){
    arr[mainarrayindex++]=second[index2++];
}


}
void mergesort(int* arr,int s,int e){
    if(s>=e){
        return  ;
    }
    int mid = s+(e-s)/2;
    //left wala
    mergesort(arr,s,mid);
    //right wala
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
int arr[6]={2,1,19,17,21,15};
mergesort(arr,0,5);
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}

return 0;

}