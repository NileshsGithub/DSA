#include<iostream>
using namespace std;

void update(int **p2){
    // p2=p2+1;

    //  *p2=*p2+1;

    **p2=**p2  +1;
}

int main(){
    int a=55;
    int *ptr=&a;
    int **ptr2=&ptr;

    // cout<< ptr<<" "<<&ptr<< endl;
    // cout<< ptr2<<" "<<&ptr2<< endl;

    // cout<<a<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;

    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr2<<endl;

    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;

    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    update(ptr2);
    cout<<"after"<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;



}