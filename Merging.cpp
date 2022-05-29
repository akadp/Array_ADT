#include<bits/stdc++.h>
using namespace std;

int Merge(int A[],int B[],int n1 , int n2 , int C[]){
    int i = 0,j = 0,k = 0;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            C[k++] = B[j++];
        }
        else 
            C[k++] = A[i++];
    }
    while(i < n1){
    C[k++] = A[i++];
}

while(j<n1){
    C[k++] = B[j++];
}
    
}



int main(){
    int A[] = {2,4,6,8,10};
    int n1 = sizeof(A)/sizeof(A[0]);
    int B[] = {1,3,5,7,9};
    int n2 = sizeof(B)/sizeof(B[0]);
    
    int C[] = {n1+n2};
    
    // int n3 = n1+n2;
    
    
    Merge(A,B,n1,n2,C);
    
    // sort(C,n3);
    
    cout<<"Element of merged array is"<<endl;
    for(int i = 0 ; i<n1+n2;i++){
        cout<<C[i]<<",";
        
        
    }
}