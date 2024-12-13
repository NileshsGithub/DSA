#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,4,6,7};
    
    char ch[]="Nilesh ";
    char *c=&ch[0];

    cout<<arr<<endl;
    cout<<ch<<endl;
    //Prints entire string
    cout<<c<<endl;

}