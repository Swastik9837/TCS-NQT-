#include <iostream>
using namespace std;
void swap(int arr[], int a, int b, int k)
{
    for (int i = 0; i < k; i++)
    {
        swap(arr[a + i], arr[b + i]);
    }
}

void BlockSwap(int arr[], int k, int n)
{
    if (k == 0 || k == n)
        return;

    if (k == n - k) // if first part and second part are of same size
    {
        swap(arr, 0, n - k, k);
    }

    else if (k < n - k)
    {
        swap(arr, 0, n - k, k);
        BlockSwap(arr, k, n - k);
    }
    else
    {
        swap(arr, 0, k, n - k);
        BlockSwap(arr + n - k, k, n - k);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    BlockSwap(arr, k, n);
    cout << "After Rotating the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        return 0;
    }
}