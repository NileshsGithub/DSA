#include<iostream>
#include <vector>
using namespace std;

void solve(string digits, int i,string output, vector<string>&ans, string mapping[]){
    if(i >= digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[i]-'0';
    string value = mapping[number]; 

    for(int j=0; j<value.length(); j++){
        output.push_back(value[j]);
        solve(digits,i+1,output,ans,mapping);
        output.pop_back();
    } 
}

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string output;
        int i=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqr","stuv","wxyz"};
        solve(digits,i,output,ans,mapping);
        return ans;   
    }

int main(){
    string s ="4";

    vector<string> ans = letterCombinations(s);

    for(int i=0; i<s.length()^2;i++){
        cout<<ans[i] << " ";
    }

}