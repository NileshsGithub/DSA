#include<iostream>
using namespace std;

class human{
    public:
    string name;
    int weight;
    int height;
    int age;

    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age =a; 
    }
};

class male : public human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }

};

int main(){
    male m1;
    m1.age;
    m1.sleep();
    m1.setAge(34);
    cout<<m1.age <<endl;

}