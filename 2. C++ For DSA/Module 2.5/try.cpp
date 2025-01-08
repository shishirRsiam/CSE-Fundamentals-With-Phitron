#include<bits/stdc++.h>
using namespace std;
int * fun(int *a)
{
    int *ar=new int[*a];
    for (int i=0;i<*a;i++)
    {
        cin>>ar[i];
    }
    for (int i=0;i<*a-1;i++)
    {
        for (int j=i+1;j<*a;j++)
        {
            if (ar[i]>ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    return ar;
}
int main()
{
    int *a=new int;
    cin>>*a;
    int * ret=fun(a); // fun ke call kore retune er moddhe rakhlam..
    for (int i=0;i<*a;i++)
    {
        cout<<ret[i]<<" "; // ferot asha ar retune er maddhome print kore dilam..
    }
    return 0;
}
