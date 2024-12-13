#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(10);

    cout<<binary_search(vec.begin(),vec.end(),6)<<endl;

    cout<<lower_bound(vec.begin(),vec.end(),6)-vec.begin()<<endl;

    cout<<upper_bound(vec.begin(),vec.end(),6)-vec.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"a : "<<a<<endl;

    string s = "Nilesh";

    reverse(s.begin(),s.end());
    cout<<s<<endl;

    string s2= "Ganesh";
    rotate(s2.begin(),s2.begin()+1,s2.end());
    cout<<s2<<endl;
    

    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
    }


}