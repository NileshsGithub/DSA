#include<iostream>
#include <stack>
using namespace std ;

bool findRedundantBrackets(string &str){
    stack<char>stack;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' ){
            stack.push(ch); 
        }
        else{
            if(ch == ')'){
                bool isRedundant = true;

                while(stack.top() != '('){
                    char top = stack.top();

                    if( top == '+' || top == '-' || top == '*' || top == '/' ){
                        isRedundant = false;
                    }
                    
                    stack.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                stack.pop();
            }
        } 
    }
    return false;
}

int main(){

}