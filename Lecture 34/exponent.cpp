#include<iostream>
using namespace std;

int power(int a, int b){

    //Base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a; 
    }

    //Recursve relation
    int ans = power(a,b/2);

    //Processing 
    if(b%2==0){
        //b is even 
        return ans*ans;
    }
    else{
        //b is odd
        return a*ans*ans;
    }
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;

    cout<<power(a,b);




}