#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
    int length;
    int size;
    int* A;
    
    public:
    Array(int sz);
    void create();
    void Display();
    void Append(int x);
    void Insert(int index,int x);
    ~Array();
};

Array::Array(int sz){
     sz = size;
    A = new int[size];
}

void Array::create(){
    cout<<"Enter the length of Array"<<endl;
    cin>>length;
    for(int i = 0;i<length;i++){
        cout<<"Enter element At index"<<i<<""<<endl;
        cin>>A[i];
    }
}

void Array::Display(){
    for(int i = 0;i<length;i++){
        cout<<A[i]<<" ";
    }
}

void Array::Append(int x){
    if(length<size){
        A[length] = x;
        length++;
    }
}

void Array::Insert(int index,int x){
        if(length < size){
        for(int i = length; i>index; i--){
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}
 
Array::~Array(){
    delete [] A;
}
 
 
int main(){
    Array arr(10);
    arr.create();
    // arr.Display();
    arr.Append(69);
    // arr.Display();
    arr.Insert(2, 66);
    arr.Display();
    return 0;
}


