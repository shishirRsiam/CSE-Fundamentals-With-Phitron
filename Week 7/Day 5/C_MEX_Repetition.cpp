#include <bits/stdc++.h>
using namespace std;


void testcase()
{
    int n, k;
    cin >> n >> k;

    k %= n + 1;

    vector<int> mex(n), gurveg;
    vector<bool> found(n + 2);
    for (int i = 0; i < n; i++)
    {
        cin >> mex[i];
        if (mex[i] <= n) found[mex[i]] = true;
        else gurveg.push_back(i);
    }
    
    vector<int> empty;
    for (int i = 0; i < n + 1; i++)
    {
        if (!found[i])
            empty.push_back(i);
    }

    int point = 0;
    for (int idx : gurveg)
        mex[idx] = empty[point++];

    int last = empty.back();

    deque<int>d;
    for(auto &v:mex) d.push_back(v);

    while (k--)
    {
        // mex.insert(mex.begin(), last);
        // last = mex.back();
        // mex.pop_back();

        d.push_front(last);
        last = d.back();
        d.pop_back();
    }

    for (auto v : d)
        cout << v << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        testcase();

    return 0;
}