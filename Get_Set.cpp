#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display( struct Array arr){
    cout<<"Elements of array are"<<endl;
    for(int i = 0 ; i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Get( struct Array arr , int index){
    if(index >= 0 && index <= arr.length){
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr,int index, int x){
    if(index >= 0 && index <= arr->length){
        arr -> A[index] = x;
    }
}

int max(struct Array arr){
    int max = arr.A[0];
    for(int i = 0 ; i<arr.length;i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
}

int min(struct Array arr){
    int min = arr.A[0];
    for(int i = 0;i<arr.length;i++){
        if(arr.A[0]< min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int sum;
    for(int i = 0 ; i<arr.length;i++){
        sum += arr.A[i];
    }
    return sum;
}

// float Avg(struct Array arr){
//     return (float)sum(arr)/arr.length;
// }

int main(){
    struct Array arr = {{2,4,5,12,7,9,15,22,1},10,9};
    cout<<Get(arr,5)<<endl;
    cout<<Set(&arr,5,15);
    Display(arr);

}