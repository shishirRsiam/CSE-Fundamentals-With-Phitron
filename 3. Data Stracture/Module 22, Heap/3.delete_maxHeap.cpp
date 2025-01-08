#include<bits/stdc++.h>
using namespace std;

void insertHeap(vector<int>&a,int x)
{
    a.push_back(x);
    int cur = a.size()-1;

    while(cur != 0)
    {
        int p = (cur-1)/2;
        if(a[cur] > a[p])
        {
            swap(a[cur],a[p]);
            cur = p;
        }
        else break;
    }
}

void deleteHeap(vector<int>&a)
{
    a[0] = a[a.size()-1]; a.pop_back();
    int cur = 0, last = a.size();
    while(true)
    {
        int l = (cur*2)+1;
        int r = l+1; // ekhane amra (cur*2)+2; use korte partam...
        if(l < last and r < last) // duitai ache...
        {
            // left boro right er theke and left boro cur er theke
            if(a[l] >= a[r] and a[l] > a[cur]) 
            {
                swap(a[l],a[cur]);
                cur = l;
            }
            // right boro left er theke and right boro cur er theke
            else if(a[r] >= a[l] and a[r] > a[cur])
            {
                swap(a[r],a[cur]);
                cur = r;
            }
            else break;
        }
        else if(l<last) // left ache
        {
            if(a[l] > a[cur])
            {
                swap(a[l],a[cur]);
                cur = l;
            }
            else break;
        }
        else if(r<last) //right ache...
        {
            if(a[r]>a[cur])
            {
                swap(a[r],a[cur]);
                cur = r;
            }
            else break;
        }
        else break; // konotai nai...
    }
}

void print_(vector<int>a)
{
    for(int v:a) cout<<v<<" ";
    cout<<endl;
}

int main()
{
    int n; cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        insertHeap(a,x);
    }
    print_(a);
    deleteHeap(a);
    print_(a);
    return 0;
}

/*
input: 7
30 20 25 15 5 6 3
*/