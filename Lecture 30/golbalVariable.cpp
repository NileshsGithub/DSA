#include<iostream>
using namespace std;

int num = 99;

void a(int &i){
    cout<<num<<" Num in a"<<endl;
    cout<<i<<" in a" <<endl;
}

void b(int &i){
    cout<<num<<" Num in b"<<endl;
    cout<<i<<" in b"<<endl;
}

int main(){
    int i= 10;
    cout<<num<<" Num in main"<<endl;

    a(i);
    b(i);
    



}