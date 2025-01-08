#include<bits/stdc++.h>
using namespace std;

void insertHeap(vector<int>&a, int x)
{
    a.push_back(x);
    int cur = a.size()-1;

    while(cur != 0)
    {
        int parent = (cur - 1)/2;
        if(a[cur] < a[parent])
        {
            swap(a[cur], a[parent]);
            cur = parent;
        }
        else break;
    }
}

int main()
{
    vector<int>a;
    int n; cin>>n;
    while(n--)
    {
        int x; cin>>x;
        insertHeap(a, x);
    }
    for(int v:a) cout<<v<<" ";
    return 0;
}

/*inpot: 5
10 30 40 50 60
*/