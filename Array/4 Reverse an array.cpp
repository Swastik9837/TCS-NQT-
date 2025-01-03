#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[n - i - 1] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
}
void reverseArray2(int array[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        swap(array[p1], array[p2]);
        p1++;
        p2--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}
void reverseArray3(int array[], int start, int end)
{
    if (start < end)
    {
        swap(array[start], array[end]);
        reverseArray3(array, start + 1, end - 1);
    }
}
int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
    reverseArray2(arr, n);
    reverseArray3(arr, 0, n - 1);

    return 0;
}