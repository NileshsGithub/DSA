#include<iostream>
using namespace std;

class twoStack{
    public:

    // Data members
    int *arr;
    int top1;
    int top2;
    int size;

    // Intialize twoStack
    twoStack(int size){
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    // Push in satck 1
     void push1(int element){
            // Atleast 1 space is empty
            if(top2 - top1 > 1){
                top1++;
                arr[top1] = element;
            }
        }

    // Push in satck 2
     void push2(int element){
            // Atleast 1 space is empty
            if(top2 - top1 > 1){
                top2--;
                arr[top2] = element;
            }
        }

    // Pop from stack 1
    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

};

int main(){

}