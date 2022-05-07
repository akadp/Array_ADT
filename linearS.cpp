#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
    int size;
    int length;
    int key;
    int *A;

    public:
    Array(int size);
    void create();
    void display();
    void Key();
    void linear_Search();
    ~Array();
};

Array::Array(int size){
    this -> size = size;
    A = new int[size];
}

 void Array::create(){
    cout<<"Enter size of Array"<<endl;
    cin>>length;
    cout<<"Enter elements of Array"<<endl;
    for(int i = 0 ; i<length ; i++){
        cin>>A[i];
    }
}

void Array::display(){
    cout<<"the elements of Array Are  : "<<endl;
    for(int i = 0 ; i<length ; i++){
    cout<<A[i]<<endl;
    }
}

void Array::Key(){
    cout<<"Enter key element"<<endl;
    cin>>key;
}

void Array::linear_Search(){
    for(int i = 0 ; i<length;i++){
        if(A[i] == key){
            cout<<"key is found At index"<<" "<<i<<endl;
       
    }
    else{
             cout<<"key is not found"<<endl;
         }
}
}

 Array::~Array(){
     delete[] A;
 }

int main(){
    Array A(10);
    A.create();
    A.display();
    A.Key();
    A.linear_Search();
   
}




