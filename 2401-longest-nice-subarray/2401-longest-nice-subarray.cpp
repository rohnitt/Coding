class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int num = 0;
        int j =0;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            while ( (num & nums[i]) != 0) 
            {
               num^=nums[j++];       
            }  
             num|= nums[i];
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};