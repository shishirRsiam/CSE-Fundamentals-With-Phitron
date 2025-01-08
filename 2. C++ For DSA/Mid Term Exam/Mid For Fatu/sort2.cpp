#include<bits/stdc++.h>
using namespace std;
int * sort_it(int number)
{
    int * array = new int[number];
    for(int i=0;i<number;i++)
    {
        cin>>array[i];
    }
    sort(array,array+number,greater<int>());
    return array;
}
int main()
{
    int *number = new int;
    cin>>*number;
    int * returne = sort_it(*number);
    for (int i=0;i<*number;i++)
    {
        cout<<returne[i]<<" ";
    }
    return 0;
}