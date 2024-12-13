#include<iostream>
using namespace std;

int printCounting(int n){
    // Base case
    if(n==0){
        return 1;
    }

    //Processing
    cout<<n<<" ";

    //Recursive relation
    return printCounting(n-1);



}

int main(){
    int n;
    cin>>n;

    printCounting(n);


}