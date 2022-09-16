class Solution {
public:
        int rec(int i,int low,int high,vector<int>&nums,vector<int>&m,vector<vector<int>>&dp){
        if(i>=m.size()){
            return 0;
        }
        if(low>high){
            return 0;
        }
        if(dp[i][low]!=INT_MIN)
            return dp[i][low];
        
        int take=rec(i+1,low+1,high,nums,m,dp)+nums[low]*m[i];
        int notTake=rec(i+1,low,high-1,nums,m,dp)+nums[high]*m[i];
        
        return dp[i][low]=max(take,notTake);
    }
    int maximumScore(vector<int>& nums, vector<int>& m) {
        int n=nums.size();
        vector<vector<int>>dp(m.size(),vector<int>(m.size(),INT_MIN));
        return rec(0,0,n-1,nums,m,dp);
    }
};