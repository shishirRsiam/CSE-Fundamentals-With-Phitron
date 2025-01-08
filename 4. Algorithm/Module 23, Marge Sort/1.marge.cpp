#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

void marge(vec &a, int l, int m, int r)
{
    // copy element new array
    vec leftArray(a.begin(), a.begin()+m+1);
    vec rightArray(a.begin()+m+1, a.begin()+r+1);

    vec sortedArray;
    int i = 0, j = 0;
    while(i<leftArray.size() and j<rightArray.size())
    {
        if(leftArray[i]<=rightArray[j])
        {
            sortedArray.push_back(leftArray[i]);
            i++;
        }
        else 
        {
            sortedArray.push_back(rightArray[j]);
            j++;
        }
    }

    while(i<leftArray.size())
    {
        sortedArray.push_back(leftArray[i]);
        i++;
    }
    while(j<rightArray.size())
    {
        sortedArray.push_back(rightArray[j]);
        j++;
    }
    // for(int i=0;i<sortedArray.size();i++) cout<<sortedArray[i]<<" ";

    for(int i=0;i<leftArray.size();i++) cout<<leftArray[i]<<" ";
    cout<<endl;
    for(int i=0;i<rightArray.size();i++) cout<<rightArray[i]<<" ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vec a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    marge(a, 0, 3, n-1);

    // for(int i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}

/*
10
2 3 5 10 1 4 6 7 8 9
*/