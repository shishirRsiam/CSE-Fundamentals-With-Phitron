#include<bits/stdc++.h>
using namespace std;

void fun_(int i, int n, vector<int>&a)
{
    if(i==n) return;
    fun_(i+1, n, a);
    cout<<a[i]<<" ";
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fun_(0, a.size(), a);
    return 0;
}