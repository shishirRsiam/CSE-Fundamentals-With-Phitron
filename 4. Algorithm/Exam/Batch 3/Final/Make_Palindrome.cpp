
int dp[25][10005];

int countset(int n, int sum, vector<int> &nums)
{
    if (!sum)
        return true;
    if (!n)
        return false;
    if (dp[n][sum] != -1)
        return dp[n][sum];

    int cnt = countset(n - 1, sum, nums);
    if (nums[n - 1] <= sum)
        cnt += countset(n - 1, sum - nums[n - 1], nums);
    return dp[n][sum] = cnt;
}

int findTargetSumWays(vector<int> &nums, int target)
{
    int sum = 0, n = nums.size();
    for (int v : nums)
        sum += v;
    target = (sum + target) / 2;
    memset(dp, -1, sizeof(dp));
    return countset(n, target, nums);
}
