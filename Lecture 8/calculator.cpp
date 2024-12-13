#include<iostream>
using namespace std;

int main(){
    int a,b;
    char operation ;

    cout<<"Enter the value of a"<<endl;
    cin >>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    cout<< "Enter the operation you want to perfom on a anb b"<<endl;
    cin>> operation;

    switch(operation){
        case '+': cout<<"a + b = "<< a+b;
        break;

        case '-': cout<<"a - b = "<< a-b;
        break;

        case '*': cout<<"a * b = "<< a*b;
        break; 
         
        case '/': cout<<"a / b = "<< a/b;
        break; 
        
        case '%': cout<<"a % b = "<< a%b;
        break;

        default:
        cout<< "Enter Valid input Please!";
    }

}