#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>vec){
    int start =0;
    int end= vec.size()-1;
     

    while(start<=end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return vec;
}

void print(vector<int>vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec={1,2,3,4,5,6,7};
    
    vector<int>ans=reverse(vec);

    print(ans);
}