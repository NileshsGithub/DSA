#include<iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> modify(queue<int>q, int k){
    stack<int>s;

    // Pop first k elements from queue and insert it into stack
    for(int i=0;i<k;i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // Fetch elements from stack and insert into queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    // Fetch first n-k elements from queue and push back

    int t = q.size() - k;
    
    while(t--){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}

int main(){
 queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    // Modify the queue by reversing the first k elements
    q = modify(q, k);

    // Print the modified queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}