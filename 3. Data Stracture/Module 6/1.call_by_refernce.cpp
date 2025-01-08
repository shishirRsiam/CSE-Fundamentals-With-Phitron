#include<bits/stdc++.h>
using namespace std;
void fun(int* &pnt)
{
    pnt = NULL;
}
int main()
{
    int val=10;
    int *pnt = &val;
    fun(pnt);
    cout<<pnt<<" "<<val<<endl;
    return 0;
}