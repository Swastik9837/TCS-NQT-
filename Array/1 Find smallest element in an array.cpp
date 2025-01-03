#include <bits/stdc++.h>
using namespace std;
// 1st method using sorting
int sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[0];
}
int SmallestElement(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
    int arr[] = {2, 5, 1, 0, 7};
    int n = 5;
    int min = SmallestElement(arr, n);
    cout << "min element from 2nd element is " << min << endl;
    cout << "The smallest element in the array is: " << sortArr(arr1) << endl;
    cout << "The smallest element in the array is: " << sortArr(arr2) << endl;
}
