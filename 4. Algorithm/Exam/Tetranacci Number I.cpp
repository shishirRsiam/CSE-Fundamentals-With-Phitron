#include <bits/stdc++.h>

using namespace std;

int solve(int n)
{
    if(n == 0) return 0;
    if(n == 1 or n == 2) return 1;
    if(n == 3) return 2;
    return solve(n-1) + solve(n-2) + solve(n-3) + solve(n-4);
}

int main()
{
    int n; cin>> n; 

    cout<<solve(n)<<endl;

    return 0;
}
