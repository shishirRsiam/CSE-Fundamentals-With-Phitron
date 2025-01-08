#include<bits/stdc++.h>
using namespace std;
int * sort_it(int a)
{
    int *ar = new int[a];
    for (int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+a,greater<int>());
    return ar;
}
int main()
{
    int *a =new int;
    cin>>*a;
    int * ret = sort_it(*a);
    // sort(ret,ret+*a,greater<int>());
    for (int i=0;i<*a;i++)
    {
        cout<<ret[i]<<" ";
    }
    delete[] ret;
    return 0;
}