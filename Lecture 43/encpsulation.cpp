#include<iostream>
using namespace std ;

class employee{
    private: 

    string name;
    int id;
    

    public : 
    int getAge(){
        return this->id;
    }
};

int main(){
    employee e1;
    
}