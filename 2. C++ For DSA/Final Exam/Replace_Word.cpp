#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int len=b.length();
        while (a.find(b) != -1)
        {
            a.replace(a.find(b), len, "#");
        }
        cout << a << endl;
    }
    return 0;
}