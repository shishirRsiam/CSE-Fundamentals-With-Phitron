#include <bits/stdc++.h>
using namespace std;


void sieve_of_Eratosthenes(vector<bool> &all_prime)
{
    all_prime[1] = true;
    for(int i=2;i*i<=1e7;i++)
    {
        if(!all_prime[i])
        {
            for(int j=i+i;j<=1e7;j+=i)
                all_prime[j] = true;
        }
    }
}

bool isSquere(long long n)
{
    long long x = sqrtl(n);
    return (x*x) == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<bool>all_prime(1e7+5);
    sieve_of_Eratosthenes(all_prime);


    for(auto val:a)
    {
        if(!all_prime[sqrtl(val)] and isSquere(val))
            cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}