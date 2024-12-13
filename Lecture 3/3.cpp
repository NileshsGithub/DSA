#include <iostream>
using namespace std;

int main()
{
    // int a;
    // cin>> a;

    // if(a>0){
    //     cout<< "The value of a is positive" <<endl;
    // }
    // else if(a<0){
    //     cout<< "The value of a is negative" <<endl;
    // }
    // else
    // {
    //     cout<< "the value of a is zero";
    // }

    // int a,b;
    // cin>> a;
    // cin>>b;

    // if(a>b){
    //     cout<< a;
    // }
    // else{
    //     cout<<b;
    // }

    //  char a;
    // cin >> a;

    // if(a>='a' && a <='z'){
    //     cout<<" Lower Case";
    // }
    // else if(a>='A' && a<='Z'){
    //     cout<<" Upper Case";
    // }
    // else{
    //     cout<<" Number";
    // }

    // int n ;
    // cin>> n;

    // int i =1;

    // while (i<=n)
    // {
    //     cout<< i <<", ";
    //     i++;
    // }

    // int n;
    // cin>> n;

    // int i=0, sum=0 ;

    // while (i<=n)
    // {

    //     sum +=i;
    //     i++;
    // }
    // cout<< sum;

    // int n ;
    // cin>> n;

    // int i = 2 ;

    // while(i<n){
    //     if(n % i == 0){
    //         cout<< "It is not a prime number ";
    //         break;
    //     }
    //     else {
    //         cout<< "It is a prime number";
    //         break;
    //     }
    //     i++;

    // PATTERNS
    //example -1

    // int n;
    // cin >> n;

    // int i = 1;
 

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "* "; 
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    //example -2

    int n;
    cin >> n;

    int i = 1;
 

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i; 
            j++;
        }
        cout<<endl;
        i++;
    }
}
