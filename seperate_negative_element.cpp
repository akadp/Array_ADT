// seprate negative element in in lift side or +ve in right side 

#include<bits/stdc++.h>
using namespace std;


void Display(int A[],int n){
    cout<<"element of -ve and +ve seperated element of Array are:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<A[i]<<endl;
    }
}

void swap(int *i,int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int Exchange(int A[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        while(A[i]<0){
            i++;
        }
        while(A[j]>=0){
            j--;
        }
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }
}

int main(){
    int A[] = {-6,3,-8,10,5,-7,-9,12,-4,2};
    int n = sizeof(A)/sizeof(A[0]);
    Exchange(A,n);
    Display(A,n);
}