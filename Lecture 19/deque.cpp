#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d= {56,78,90};

    d.push_back(2);
    d.push_front(7);

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<", ";
    }

     cout<<"Element at index 3 is :"<<d.at(3)<<endl;

    cout<<"First Element : "<<d.front()<<endl;

    cout<<"Last Element : "<<d.back()<<endl;

    d.erase(d.begin(),d.begin()+2);

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<", ";
    }

}