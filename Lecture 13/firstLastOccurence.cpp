#include <iostream>
using namespace std;

int firstOcc(int arr[], int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
   return ans;
}

int lastOcc(int arr[], int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start < end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
   return ans;
}
int main()
{
    int arr[] = {1, 2, 2,2,2,2,5, 7, 9, 12, 45, 67};
    int size = 11;

    int first = firstOcc(arr, 11 ,2);
    cout << first << endl;

    int last = lastOcc(arr, 11 ,2);
    cout << last;

}