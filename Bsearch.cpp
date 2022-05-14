
// binary search 

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int low , int high , int key){
    while(low<=high){
        int mid;
        mid = low+high/2;
        
        if(key == arr[mid])
        return mid;
        else if(key >= arr[mid]){
            high = mid-1;
        }
        else if(key <= arr[mid]){
            low = mid+1;
        }
        else{
            return -1;
        }
    }
}

int main(){
    int arr[] = {12,11,44,5,8,9,13};
    int key = 9;
    int result = BinarySearch(arr,0,10,key);
    (result == -1)
    ?cout<<"Element is not present in an Array"
    :cout<<"result is present at index "<<result<<endl;
    return 0;
}