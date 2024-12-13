#include<iostream>
using namespace std;

int power(int n){
    // Base case
    if(n==0){
        return 1;
    }

    //Recursive relation

    // int sp= power(n-1); 
    // int bp= 2*sp;
    // return bp;

    return 2 * power(n-1);

}

int main(){
    int n;
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;
}