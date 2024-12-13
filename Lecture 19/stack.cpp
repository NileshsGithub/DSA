#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>st;

    st.push("one");
    st.push("two");
    st.push("three");

    cout<<"Fisrt element : "<<st.top()<<endl;
    st.pop();
    cout<<"Fisrt element : "<<st.top()<<endl;

    cout<<"size : "<<st.size()<<endl;
    
    cout<<"Empty or Not : "<<st.empty();


}