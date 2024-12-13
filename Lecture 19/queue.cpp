#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;

    q.push("one");
    q.push("two");
    q.push("three");

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}