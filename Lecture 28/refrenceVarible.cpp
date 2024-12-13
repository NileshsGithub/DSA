#include<iostream>
using namespace std;

void update2(int &n){
    n++;
}
void update(int n){
    n++;
}

int main(){
    // int i =5;
    // int &j=i;

    // cout<<i<<" "<<j<<endl;
    int a=10;

    cout<<"Before "<<a<<endl;
    update2(a);
    cout<<"After "<<a<<endl;


}