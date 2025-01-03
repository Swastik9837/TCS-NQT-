#include <bits/stdc++.h>
using namespace std;
void insertatEnd(int *arr, int n, int value)
{
    arr[n] = value;
}
void insertatbegin(int *arr, int n, int value)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
}
int main()
{
    int n = 8;
    int arr[9] = {10, 9, 14, 8, 20, 48, 16, 9};
    int value = 40;
    insertatbegin(arr, n, value);
    cout << "Before inserting the value at beginning:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertatEnd(arr, n, value);
    cout << "After inserting the value at beginning:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}