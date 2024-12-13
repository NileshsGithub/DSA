#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *ptr=&num;

    int *m=ptr;
    

    cout<<ptr<<" - "<<m<<endl;
    cout<<*ptr<<" - "<<*m<<endl;

    cout<<"Before : "<<*ptr<<endl;
    (*ptr)++;
    cout<<"Aftre : "<<*ptr<<endl;

    cout<<"Adress of num is : "<<ptr<<endl;
    cout<<"Value of num is : "<<*ptr<<endl;


    double cnt=700000;
    double *p=&cnt;
    cout<<"Adress of cnt is : "<<p<<endl;
    cout<<"value of cnt is : "<<*p<<endl;

    char a= 'z';
    char *ch= &a;
    cout<<"Adress of cnt is : "<<ch<<endl;
    cout<<"value of ch is : "<<*ch<<endl;

    cout<<"Size of pointer : "<<sizeof(ptr)<<endl;


    //Pointer Arithmatic

    int i=6;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;

    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;




}