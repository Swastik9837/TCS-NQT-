#include <bits/stdc++.h>
using namespace std;
// 1st method
int main()
{
    int n = 5;
    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    cout << "The symmetric pairs are " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << " ";
                break;
            }
        }
    }
}

// 2nd method
int main()
{
    int n = 5;
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    unordered_map<int, int> mp;
    cout << "The symmetric Paris are: " << endl;
    for (int i = 0; i < n; i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        if (mp.find(second) != mp.end() && mp[second] == first)
        {
            cout << "(" << first << " " << second << ")" << " ";
        }

        else
        {
            mp[first] = second;
        }
    }
}