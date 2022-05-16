// check is array is sorted or not 
#include<bits/stdc++.h>
using namespace std;

void Display(int arr[],int n){
    cout<<"Element of Array are:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int isSorted(int arr[],int n){
    for(int i = 0 ; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;  
        }
         }
         return 1;
    }


int main(){
    int arr[] = {1,2,5,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,n))
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    // Display(arr,n);
}