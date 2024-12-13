#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int>maxi;

    //Min Heap
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(8);
    maxi.push(56);
    maxi.push(23);
    maxi.push(45);

    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop(); 
    }
    cout<<endl;

    mini.push(30);  
    mini.push(56);
    mini.push(39);
    mini.push(95);

    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop(); 
    }

}