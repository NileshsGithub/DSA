#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int, 4>arr={1,2,3,4};

    int size = arr.size();

    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    cout<<"Empty or Not : "<<arr.empty()<<endl;

    cout<<"Element at 3 index : "<<arr.at(3)<<endl;

    cout<<"First Element : "<<arr.front()<<endl;

    cout<<"Last Element : "<<arr.back()<<endl;


}