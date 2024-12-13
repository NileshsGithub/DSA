#include<iostream>
using namespace std;

class A{
    public:
    void Shout(){
        cout <<" He is shouting";
    }
};

class B : public A{
 public:
    void Shout(){
        cout << "Mom is shouting on him"<< endl;
    }
};

class C : public A{
public:
    void Shout(){
        cout << "Dad is shouting on him"<< endl;
    }
};

int main(){
    B obj1;
    C obj2;

    obj1.Shout();
    obj2.Shout();

    

}