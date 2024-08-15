#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;
class Solution {   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        int i = 0, j = 0;
        long long sum = 0, ans = 0;
        while(j<n)
        {
            sum += arr[j]; // contributeing add
            if(j-i+1 == k)
            {
                ans = max(ans, sum); // dicision make
                sum -= arr[i]; // contribution delete
                i++, j++;
            }
            else j++;
        }
        return ans;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i)
        {
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}


// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1