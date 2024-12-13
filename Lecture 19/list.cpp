#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l(5,3);
 
    l.push_back(34);
    l.push_front(2);

    for(int i:l){
        cout<<i<<", ";
    }

    cout<<"size : "<<l.size();
}