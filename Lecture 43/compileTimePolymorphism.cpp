#include<iostream>
using namespace std;
//Function overloafing
class A{
    public:
    void hello(){
        cout<<"Hello Nilesh"<<endl;
    }

    void hello(string name){
        cout<<"Hello " << name <<endl;
    }
};

//Operator overloading

class B{
    public:
    int a;
    int b;

    public :
    int add(){
        return a+b;
    }
    void operator +(B &obj){
        int val1 = this -> a;
        int val2 = obj.a;

        cout<< "output : " << val2 - val1<<endl;
    }

    void operator () (){
        cout<<"I am a bracket " << this -> a <<endl;
    }
};


int main(){
    A obj;
    obj.hello("Nil");

    B b1, b2;
    b1.a = 50;
    b2.a = 7;

    b1 + b2;
    b1();

}