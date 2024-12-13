#include <iostream>
using namespace std;

int main()
{
    // int a = 4;
    // int b = 6;

    // int c = a & b;
    // int d = a | b;
    // int e = ~a;
    // int f = a ^ b;

    // cout << "a & b = " << c << endl;
    // cout << "a | b = " << d << endl;
    // cout << "~a = " << e << endl;
    // cout << "a ^ b = " << f << endl;

    // cout << (17 >> 2) << endl;
    // cout << (17 >> 1) << endl;
    // cout << (21 << 2) << endl;
    // cout << (19 << 1) << endl;

    // int i = 6;

    // cout<< (++i)<< endl;
    // // 7 
    // cout<< (i++)<< endl;
    // // 7 , i = 8
    // cout<< (--i)<< endl;
    // // 7 
    // cout<< (i--)<< endl;
    // // 7 , i = 6

    // for loop

    // int n;
    // cin>>n;
    // int i=1;
    // for(; ;){
    //     if (i<=n){
    //         cout<<i <<endl;
    //     }
    //     else {
    //         break;
    //     }
    //     i++;
    // } 


    // Fibonacci serie 

    // int n ;
    // cin >>n;

    // int a =0;
    // int b =1;

    // cout<< a << " " <<b << " ";

    // for(int i = 1; i<=n;i++){
    //     int nextNum = a+b;
    //     cout<< nextNum << " ";
    //     a = b;
    //     b = nextNum;

    // }


    // Prime Number

    int n ;
    cin >>n;
    bool isPrime = 1 ;

    for(int i=2;i<n;i++){
        if(n%i== 0){ 
        isPrime = 0;
        break;
        }
    }
    if(isPrime == 0){
        cout<<  "It is not a prime number";
    }
    else{
        cout<< "It is a prime";
    }

}