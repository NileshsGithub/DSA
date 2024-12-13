#include<iostream>
#include<vector>
using namespace std;

char toLower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}

int getLength(char name[]){
    int count=0;
    
    for(int i=0;i<name[i]!='\0';i++){

            count++;
    }
    return count;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int main(){
    char name[20];
    cout<<"Enter the name ";
    cin>>name;

    cout<<"The name is "<<name<<endl;

    int len= getLength(name);
    cout<<"Length of array is : "<<len<<endl;

    reverse(name,len);
    cout<<"Reversed array : "<<name<<endl;

    cout<<"Character is "<<toLower('M');
    cout<<"Character is "<<toLower('nn');
    


}