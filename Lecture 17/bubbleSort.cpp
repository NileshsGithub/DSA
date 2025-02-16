#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }   
    }
}

int main() {
    vector<int> arr = {90, 5, 23, 80, 33, 76};
    int n = 6;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}
