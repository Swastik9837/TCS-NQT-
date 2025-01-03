#include <bits/stdc++.h>
using namespace std;
int main() // using set
{
    int n = 6;
    int arr[n] = {20, 15, 26, 2, 98, 6};
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                s.insert(arr[j]);
            }
        }
        cout << s.size() + 1 << " ";
    }
}

// using map
int main()
{
    int n = 6;
    int arr[n] = {20, 15, 26, 2, 98, 6};
    map<int, int> mp;
    int temp = 1;
    int tempp[n];
    for (int i = 0; i < n; i++)
    {
        tempp[i] = arr[i];
    }

    sort(tempp, tempp + n);
    for (int i = 0; i < n; i++)
    {
        if (mp[tempp[i]] == 0)
        {
            mp[tempp[i]] = temp;
            temp++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << mp[arr[i]] << " ";
    }
}