// brute force approach
// for rotating elements to right

#include <iostream>
using namespace std;

void Rotatetoright(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;

    int temp[k];

    for (int i = n - k; i < n; i++) // copy the last k elements in to the temp array
    {
        temp[i - n + k] = arr[i];
    }

    for (int i = n - k - 1; i >= 0; i--) // shift  n-k elements from beginning by k position right
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++) // Copy the elements into the main array from the temp array.
    {
        arr[i] = temp[i];
    }
}

void Reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// 2nd method
void Rotatetorightt(int arr[], int n, int k)
{
    Reverse(arr, 0, n - k - 1); // reverse the first n-k  elements
    Reverse(arr, n - k, n - 1); // reverse the last k elements
    Reverse(arr, 0, n - 1);     // reverse the whole array
}
void Rotatetoleft(int arr[], int n, int k)
{
    // Reverse first k elements
    Reverse(arr, 0, k - 1);
    // Reverse last n-k elements
    Reverse(arr, k, n - 1);
    // Reverse whole array
    Reverse(arr, 0, n - 1);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    Rotatetoright(arr, n, k);
    Rotatetorightt(arr, n, k);
    Rotatetoleft(arr, n, k);
    cout << "After Rotating the elements to right " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}