#include<bits/stdc++.h>
using namespace std;

void Display(int arr[],int n ){
    cout<<"Element of Array are:"<<endl;
    for(int i = 0 ; i<n+1;i++){
        cout<<arr[i]<<endl;
    }
}

void Sorted_Insert(int arr[],int key,int n){
    //  int n = sizeof(arr)/sizeof(arr[0]);

    int i = n-1;
    while(arr[i]>key){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = key;
}

int main(){
    int arr[] = {6,7,18,19,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sorted_Insert(arr,8,n);
    Display(arr,n);
}