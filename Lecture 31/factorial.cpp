#include<iostream>
using namespace std;

// Recursive function
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

// Normal function
// int factorial(int n){
//     int ans =1;
//     for(int i=n;i>=1;i--){
//         ans *=i;
//     }
//     return ans;
// }

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
}