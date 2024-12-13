#include<iostream>
using namespace std;

int rowSum (int arr[][3],int row ,int col){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
             sum =sum+arr[i][j];
        }
        cout<<sum<<" "; 
    }
    cout<<endl;
}

int largestRowSum(int arr[][3],int row ,int col){
    int maxi=INT16_MIN;
    int rowIndex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
             sum =sum+arr[i][j];
        }
        // cout<<sum<<" "; 
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<" Maximum sum in row is "<< maxi;
    return rowIndex;
}

int colSum (int arr[][3],int row ,int col){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
             sum =sum+arr[j][i];
        }
        cout<<sum<<" "; 
    }
    cout<<endl;
}

int largestColSum(int arr[][3],int row ,int col){
    int maxi=INT16_MIN;
    int colIndex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
             sum =sum+arr[j][i];
        }
        // cout<<sum<<" "; 
        if(sum>maxi){
            maxi=sum;
            colIndex=row;
        }
    }
    
    cout<<" Maximum sum in column is "<< maxi;
    return colIndex;
}

bool isPresent (int arr[][3],int target,int row ,int col){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[j][i]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3];
    
    // //Row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //column wise input
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter element to find "<<endl;
    cin>>target;

    if(isPresent(arr,target,3,3)==true){
        cout<<"Element found"<<endl;
    }
    else{
    cout<<"Element is not found"<<endl;
    }

    rowSum(arr,3,3);
    colSum(arr,3,3);
    int ansRowIndex = largestRowSum(arr,3,3);
    cout<<"At index : "<<ansRowIndex;
    int ansColIndex =largestColSum(arr,3,3);
    cout<<"At index : "<<ansColIndex;


}