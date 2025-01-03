#include <iostream>
#include <unordered_set>
#include <map>
using namespace std;

class RemoveDuplicate
{

public:
    void removeAndPrintUnique(int arr[], int n)
    {
        unordered_set<int> seen;
        for (int i = 0; i < n; i++)
        {
            if (seen.find(arr[i]) == seen.end())
            { // Check if not already in set
                cout << arr[i] << " ";
                seen.insert(arr[i]);
            }
        }
        cout << endl;
    }

    void duplicate(int arr[], int n)
    {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) == mp.end())
            {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }
};

int main()
{
    int arr[] = {4, 3, 4, 2, 4, 1, 10, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    RemoveDuplicate d1;
    d1.removeAndPrintUnique(arr, n);
    d1.duplicate(arr, n);

    return 0;
}
