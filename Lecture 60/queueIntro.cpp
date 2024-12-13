#include<iostream>
#include <queue>
using namespace std;

int main(){

    // Create a queue
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<< "front : " <<q.front() <<endl;

    

    cout<< q.size() << endl;

    q.pop();

    cout<< q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty" <<endl;
    }
    else{
        cout << "Queue is not empty" <<endl;
    }
    
}