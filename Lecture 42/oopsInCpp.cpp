#include<iostream>
using namespace std;

class Hero{

   
    
    //Properties
    private:
    int health;

    public: 
    //Default constructor
     Hero(){
        cout<< "Constructor called"<<endl;
    }
    //Parametersied constructor
    Hero(int health){
        this->health = health;
    }
    //Copy constructor
    Hero(Hero& temp){
        this->health = temp.health;
        this->level - temp.level;
    }

    Hero(int health, char level){
        this->health = health;
        this->level = level;

    }
    char level;
 
    void print(){
        cout<<"health : "<<this->health<<endl;
        cout<<"level : "<<this->level<<endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        if(h>=0 && h<=100){
        health =h;
        }
    }

    ~Hero(){
        cout<<"Destructor called";
    }
};

 int main(){

    Hero nil(70,'s');
    nil.print();

    Hero nilesh(nil);
    nilesh.print();

//     //Static allocation
//     Hero h1;
//     h1.print();

//     //Dynamic allocation
//     Hero *h = new Hero;

//     Hero(88);
//     Hero(67,'e');
//     h1.setHealth(100);
//     h1.level='n';

//     cout<<"health : "<< h1.getHealth() <<endl;
//     cout<<"level : "<< h1.level << endl;


}