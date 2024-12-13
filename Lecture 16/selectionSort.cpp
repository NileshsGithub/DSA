#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    vector<int> arr = {90, 50, 70, 3, 2, 60};
    int n = 6;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",  ";
    }
    cout << endl;

    return 0;
}
