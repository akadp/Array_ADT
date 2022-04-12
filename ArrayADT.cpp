#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
    int* A;
    int size;
    int length;

    public:
    Array(int size){
    this -> size = size;
    A = new int[size];
    }

    void create(){
        cout<<"Enter the total no of elements in An Array"<<endl;
        cin>>length;
        cout<<"Enter elements of Array"<<endl;
        for(int i = 0;i<length;i++){
            cin>>A[i];
        }

    }

    void Display(){
        cout<<"Elements of Arrays Are:"<<endl;
        for(int i = 0 ; i<length;i++){
            cout<<A[i]<<" "<<endl;
        }
    }

    ~Array(){
        delete[] A;
        cout<<"Array is Destroyed"<<endl;
    }

};

int main(){
    Array Arr(10);
    Arr.create();
    Arr.Display();

    return 0;
}