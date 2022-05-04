#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
    int length;
    int size;
    int *A;

    public:
    Array(int sz);
    void create();
    void display();
    void append(int x);
    void insert(int index,int x);
    void deleting( int index,int x);
    ~Array();

};

Array::Array(int sz){
     sz = size;
    A = new int[size];
}

void Array::create(){
    cout<<"Enter size of Array"<<endl;
    cin>>length;
    for(int i = 0;i<length;i++){
        cin>>A[i];
    }
}

void Array::display(){
    cout<<"Elements of Array";
    for(int i = 0; i<length;i++){
        cout<<A[i]<<endl;
    }
}

void Array::append(int x){
    if(length<size){
        A[length] = x;
        length++;
    }
}

void Array::insert(int index,int x){
    if(length<size){
        for(int i = length;i<length-1;i++){
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}

void Array::deleting(int index,int x){
    x = A[index];
    if(length<size){
        for(int i = 0 ;i<length-1;i++){
            A[i] = A[i+1];
        }
        length--;
    }
}

 Array::~Array(){
     delete[] A;
}

int main(){
    Array A(10);
    A.create();
    A.append(12);
    A.insert(4,22);
    A.deleting(2,12);
    A.display();

}

