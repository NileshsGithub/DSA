#include<iostream>
#include<stack>
using namespace std;

int main(){

    // Creation of stack
    stack<int>s;

    // Insertion of elements
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<< s.top() << endl;

    // Deletion of elements
    s.pop();

    cout<< s.top() << endl;

    cout<< s.empty();

    

}