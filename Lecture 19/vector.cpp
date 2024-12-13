#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>vec = {1,23,4,68,9,0};

    cout<<"Capacity : "<<vec.capacity()<<endl;

    vec.push_back(10);

    cout<<"Capacity : "<<vec.capacity()<<endl; 

    cout<<"Size : "<<vec.size()<<endl;

    cout<<"Element at index 3 is :"<<vec.at(3)<<endl;

    cout<<"First Element : "<<vec.front()<<endl;

    cout<<"Last Element : "<<vec.back()<<endl;

    cout<<"Before Pop : "<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.pop_back();

    cout<<"After Pop : "<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }



}