class Solution {
public:
    int dp[10001];
	long long JumpAt_ith_Index(int i, vector<int> &nums) {
		if (i >= nums.size() - 1) return 0;
        if(dp[i] != -1) return dp[i];
		long long ans = INT_MAX;
		for (int j = 1; j <= nums[i]; j++) {
			long long cost = 1 + JumpAt_ith_Index(i + j, nums);
			ans = min(ans, cost);
		}
		return dp[i] = ans;
	}
public:
	int jump(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
		return JumpAt_ith_Index(0, nums);
	}
};