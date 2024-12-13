#include<iostream>
using namespace std;

class circularQueue{

    int* arr;
    int front;
    int rear;
    int size;

    circularQueue(int n){
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    bool enqueue(int value){

        // To check weather queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1))){
        return false;
        }

        else if(front == -1){ // First element to push  
            front = rear = 0;   
        }

        else if(rear == size-1 && front != 0 ){
            rear = 0; // To maintain cyclic nature 
        }

        else{ // Normal flow
            rear++;
        }

        // Push inside the queue
        arr[rear] = value;
        return true;
    }

    int dequeue(){
        if(front == -1){ // To check queue si empty
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){ // Single element is present
            front = rear = -1;
        }

        else if(front == size-1 ){
            front = 0; // To maintain cyclic nature 
        }

        else{ // Normal flow
            front++; 
        }
        return ans;
    }
};

int main(){

}