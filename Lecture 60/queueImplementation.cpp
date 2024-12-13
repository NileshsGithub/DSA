#include<iostream>
using namespace std;

class queue{
    int* arr;
    int qfront;
    int rear;
    int size;

    queue(){
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty(){
        if(qfront  == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enquque(int data){
        if(rear == size){
            cout<< "Queue is full " << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int depueue(){
        if(qfront  == rear){
            return -1;
        }
        else{

            int ans = arr[qfront ];
            arr[qfront ] = -1;
            qfront ++;
            if(qfront  == rear){
                qfront  = 0;
                rear = 0;
            }
            return ans;
        }
    }
    
    int qfront (){
        if(qfront  == rear){
            return -1;
        }
        else{
            return arr[qfront ];  
        }
    }


};

int main(){
    

}