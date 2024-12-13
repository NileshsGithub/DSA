#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>mp;

    mp[1]="one";
    mp[2]="two";
    mp[4]="four";
    mp[3]="three";

    mp.insert({5,"five"});

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    
    auto it = mp.find(5);

    for(auto i=it; i!=mp.end();i++){
        cout<<(*i).first<<endl; 
    }
}