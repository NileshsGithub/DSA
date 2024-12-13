#include<iostream>
#include <vector>
#include <deque>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K){

    deque<long long>dq;
    vector<long long>ans;

    //Process first window k size
    for(int i=0;i<K;i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }

    //Store answer of first k sized window
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    // Process for reaming windows
    for(int i=K;i<N;i++){

        // Removal
        if(!dq.empty() && i - dq.front() >= K){
            dq.pop_front();
        }
        //Addtion 
            if(A[i] < 0){
                dq.push_back(i);
            }
        

        // Store answer
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }        
    }
    return ans;
}

int main(){
    long long int A[] = {-8, 2, 3, -6, 10};
    long long int N = 5;
    long long int K = 2;

    vector<long long> result = printFirstNegativeInteger(A, N, K);

    // Print the result
    for(long long val : result) {
        cout << val << " ";
    }
}