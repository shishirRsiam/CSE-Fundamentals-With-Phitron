#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (n[i] > n[j])
            {
                // int tmp = n[i];
                // n[i] = n[j];
                // n[j] = tmp;;
                swap(n[i],n[j]);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}