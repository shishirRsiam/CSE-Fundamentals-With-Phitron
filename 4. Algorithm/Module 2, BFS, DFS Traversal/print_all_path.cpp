#include<bits/stdc++.h>
using namespace std;

const int sz = 10;
vector<int>mat[sz];
bool vst[sz];
vector<int>path;
set<vector<int>>st;
void print_all_path(int s,int t)
{
    vst[s]=true;
    path.push_back(s);
    if(s==t) st.insert(path);
    else 
    {
        for(int c:mat[s])
            if(!vst[c]) print_all_path(c,t);
    }
    path.pop_back();
    vst[s]=false;
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
    }
    print_all_path(0,4);

    for(auto x:st)
    {
        for(int v:x) cout<<v<<" ";
        cout<<endl;
    }

    return 0;
}

/*
input: 
4 5
0 1
0 2
1 3
2 3
0 3

input: 
5 9
0 1
0 1
0 4
0 3
1 4
1 2
1 3
2 3
3 4
*/