#include<iostream>
using namespace std;

int reachHome(int dest, int start){

    cout<<"Start : "<<start <<" Destination : "<< dest <<endl;
    //Base case
    if(start == dest){
        cout<<"Reached at home"<<endl;
        return 1;
    }

    //Processing
    start++;

    //Recursive relation
    reachHome(dest,start);


}

int main(){

    int dest= 10;
    int start = 1;

    reachHome(dest,start);

}