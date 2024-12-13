#include<iostream>
using namespace std;

int fibonacci(int n){
    //Base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return  1;
    }
    int sum=0;
    //Recursive relation
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}