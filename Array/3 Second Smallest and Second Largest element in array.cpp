#include <bits/stdc++.h>
using namespace std;
void getElements(int array[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;
    sort(array, array + n);
    int small = array[1];
    int large = array[n - 2];
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

void getElementss(int array[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        small = min(small, array[i]);
        large = max(large, array[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] < second_small && array[i] != small)
        {
            second_small = array[i];
        }
        if (array[i] > second_small && array[i] != large)
        {
            second_large = array[i];
        }
    }
    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n);
    getElementss(arr, n);
    return 0;
}