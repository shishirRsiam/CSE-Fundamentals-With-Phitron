#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll recursion(vector<int>& cost, int i)
{
    if(i<0) return 0;
    return min(recursion(cost, i-1), recursion(cost, i-2)) + cost[i];
}

int minCostClimbingStairs(vector<int>& cost)
{
    return min(recursion(cost, cost.size()-1), recursion(cost, cost.size()-2));
}

int main()
{
    vector<int>cost{10, 15, 20};
    cout<<minCostClimbingStairs(cost)<<endl;
    return 0;
}