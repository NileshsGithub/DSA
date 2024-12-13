#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
string stringSum(string &num1, string &num2) {
    int int1 = stoi(num1);
    int int2 = stoi(num2);

    int sum = int1 + int2 ;

    string strSum = to_string(sum);

     return strSum;
}

int main(){

    string num1= "33";
    string num2 = "77";

    string ans = stringSum(num1,num2);
    cout<<ans;
}