#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;

    s.insert(4);
    s.insert(6);
    s.insert(9);
    s.insert(7);
    s.insert(4);

    for(int i:s){
        cout<<i<<", ";
    }
    cout<<endl;

    cout<<"7 si present or not"<<s.count(7);

}