#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t;
    cin >> n >> t;
    long long arr[n];
    unordered_map<long long, int> indices;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // Store the index of each element
        indices[arr[i]] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        long long complement = t - arr[i];
        // Check if the complement exists in the hashmap
        if (indices.find(complement) != indices.end() && indices[complement] != i + 1)
        {
            cout << i + 1 << " " << indices[complement] << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
