class Solution {
public:
    bool canJumpUtil(vector<int>& nums,int i,vector<int>&dp)
    {
        if(i>=nums.size()-1)return true; // if crosses the size of array then can jump so true
        if(dp[i]!=-1)return dp[i]; 
        if(nums[i]==0)return dp[i]=false; // if the ith index value is zero no further jump so false
        for(int j=1;j<=nums[i];j++)
        {
            if(canJumpUtil(nums,i+j,dp))
                return dp[i]=true;
            
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return canJumpUtil(nums,0,dp);
    }
};