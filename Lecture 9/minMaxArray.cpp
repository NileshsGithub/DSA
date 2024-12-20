#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        // max() predefined fuction can be used
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n)
{
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        // min() predefined fuction can be used
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{

    int size;
    cout << "Enter the size of an array" << endl;
    cin >> size;
    int arr[100];

    cout << "Enter the elements in array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum value is : " << getMin(arr, size) << endl;
    cout << "Maximum value is :" << getMax(arr, size) << endl;

    return 0;
}