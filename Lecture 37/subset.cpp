#include<iostream>
#include <vector>
using namespace std;
 
void solve(vector<int>nums, vector <int >output,int i, vector<vector <int>>&ans){
    //Base case
    if(i >= nums.size()){
        ans.push_back(output);
        return ;
    }

    //Exclude
    solve(nums,output,i+1,ans);

    //Include
    int element = nums[i];
    output.push_back(element);
    solve(nums,output,i+1,ans);
}   
  
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0;
        solve(nums, output, i, ans);
        return ans; 
    }

int main(){
    vector<int> nums = {1,2,3
     
     };
    vector<vector<int>> result = subsets(nums);
    
    for (const auto& subset : result) {
        for (const auto& num : subset) {
            cout << num ;
        }
        cout<<" ";
    }
}