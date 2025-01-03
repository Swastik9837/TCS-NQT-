#include <bits/stdc++.h>
using namespace std;
bool isSubset(int arr[], int m, int arr2[], int n) // method 1
{
    if (m > n)
        return false;
    bool isPresent = false;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr2[j] == arr[i])
                isPresent = true;
            break;
        }
        if (isPresent = true)
            return false;
    }
    return true;
}

// method 2(using sorting and binary search)

bool isSubsett(int arr1[], int m, int arr2[], int n)
{
    sort(arr2, arr2 + n);
    if(m>n) return false;
    for(int i=0;i<m;i++)
    {
        bool present = bSearch(arr1[i],arr2,n)
    }
}
int main()
{
    int arr1[] = {1, 3, 4, 5, 2};
    int arr2[] = {2, 4, 3, 1, 7, 5, 15};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    bool ans = isSubset(arr1, m, arr2, n);
    bool ans = isSubsett(arr1, m, arr2, n);

    if (ans == true)
        cout << "arr1[] is a subset of arr2[]";
    else
        cout << "arr1[] is not a subset of arr2[]";

    return 0;
}