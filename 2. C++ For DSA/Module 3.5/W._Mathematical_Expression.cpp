#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, ans;
    char n, m;
    cin >> a >> n >> b >> m >> ans;
    if (n == '+')
    {
        if (a + b == ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << a+b;
        }
    }
    if (n == '-')
    {
        if (a - b == ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << a-b;
        }
    }
    if (n == '*')
    {
        if (a * b == ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << a*b;
        }
    }
    return 0;
}