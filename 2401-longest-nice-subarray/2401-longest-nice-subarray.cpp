class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int num = 0; //contains set bit of all numbers in array
        int j =0;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            while ( (num & nums[i]) != 0) 
            {
                // keep removing numbers from back unless problem is solved
                // Solution ---> and of all numbers in subarray should be zero
               num^=nums[j++];     // XoR to remove where bits are set   
            }  
            // if nums & nums[i]==0;
             num|= nums[i]; // add number---> set bits in num with current nums[i]
            ans = max(ans,i-j+1); // max length
        }
        return ans;
    }
};
