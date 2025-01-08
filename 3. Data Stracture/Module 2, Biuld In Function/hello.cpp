
#include<bits/stdc++.h>
using namespace std;
class Num
{
    public:
    int a,b,c;
};
int main()
{
    int n;
    cin>>n;
    Num a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].a>>a[i].b>>a[i].c;
    }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i].a > a[j].a && a[i].b > a[j].b && a[i].c > a[j].c)
        {
            int tmp = a[i].a;
            a[i].a=a[j].a;
            a[j].a=tmp;
        }
        i++,j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].a<<" "<<a[i].b<<" "<<a[i].c<<endl;
    }
    return 0;
}