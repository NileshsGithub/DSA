#include<iostream>
using namespace std;

void reverse(string& s, int i,int j){

    //Base case
    if(i>j){
        return ;
    }

    //Prpcessing
    swap(s[i],s[j]);
    i++;
    j--;

    //Recursive relation 
    reverse(s,i,j);
}

int main(){
    string s = "abcde";

    reverse(s,0,4);

    cout<<s;
}