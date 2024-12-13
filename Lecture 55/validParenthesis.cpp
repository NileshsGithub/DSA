#include<iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string expression){
    stack<char>s;
    for(int i =0 ;i<expression.size(); i++ ){
        char ch = expression[i];

        // If opening bracket, stack push
        // If closing barcket, check with top and pop

        if( ch =='[' || ch == '(' || ch == '{' ){
            s.push(ch);
        }
        else{
             if(s.empty()) {
                return false;  // Closing bracket without corresponding opening bracket
            }
            // Closing barcket
            char top = s.top();
            if(!s.empty()){
                if( (ch == '}' && top == '{') ||
                     (ch == ']' && top == '[') ||
                     (ch == ')' && top == '(')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true; 
    }
    else{
        return false;
    }
}

int main(){

}