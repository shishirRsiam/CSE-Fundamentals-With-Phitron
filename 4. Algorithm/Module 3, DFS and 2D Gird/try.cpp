#include<bits/stdc++.h>
using namespace std;

vector<int>mat[1001];
bool vst[1001];

void dsf_(int s)
{
    cout<<s<<" ";
    vst[s]=true;
    for(int c:mat[s])
    {
        if(!vst[c]) dsf_(c);
    }
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(vst, false, 1001);

    int cnt = 0;
    for(int i=0;i<1001;i++)
    {
        cout<<"Start-> ";
        if(!vst[i]) dsf_(i), cnt++;
        cout<<"<-END\n";
    }
    cout<<"\nCount-> "<<cnt<<endl;
    return 0;
}