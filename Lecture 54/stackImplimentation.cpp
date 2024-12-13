#include<iostream>
using namespace std;

class stack{
    // Data members ]
    public :
    int * arr;
    int top;
    int size;

    // Behaviour
    stack( int size){
        this -> size = size;
        arr = new int[size];
        top = -1 ;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow " << endl;
        }
    }   

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int  peek(){
        if(top >= 0 ){
            return arr[top];
        }
        else{
            cout <<  "Stack is empty" <<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(2);
    st.push(3);
    
    cout << st.peek() <<endl;

    st.pop();

    cout << st.peek() <<endl;

    st.pop();

    cout << st.peek() <<endl;

    st.pop();

    cout << st.peek() <<endl;

    cout<< st.isEmpty() <<endl;
    

}