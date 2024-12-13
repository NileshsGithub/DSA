#include<iostream>
using namespace std;
#include <bits/stdc++.h> 

void solve(string output, vector<string>& ans, int i, string str ){
	//Base case
	if(i >=str.length()){
          if (output.length() != 0) {
            ans.push_back(output);
          }
            return;
        }
        //Exclude
	solve(output, ans, i+1, str);

	//Include
	char element = str[i];
	output.push_back(element);
	solve(output, ans, i+1, str);

}

vector<string> subsequences(string str){
	vector<string>ans;
	string output = "";
	int i =0;

	solve(output, ans, i, str);

	return ans;
	
}

int main(){
    string str = "abc";

    vector<string>ans = subsequences(str);

    for(int i=0; i<100; i++){
        cout<< ans[i] <<" ";
    }
    
}