#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i,int j){

    //Base case
    if(i>j){
        return 1;
    }

    //Processing
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return checkPalindrome(s,i+1,j-1);
    }
}

int main(){
    string s= "123321";

    bool isPalindrome=checkPalindrome(s,0,s.length()-1);

    if(isPalindrome){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }
}