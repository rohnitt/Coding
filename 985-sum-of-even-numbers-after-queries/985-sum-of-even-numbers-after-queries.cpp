class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int >ans;
        int s=0;
        for(auto x:nums){
            if(x%2==0)s+=x;
        }
        for(auto i:queries){
            if(nums[i[1]]%2==0)s-=nums[i[1]];
            nums[i[1]]+=i[0];
            if(nums[i[1]]%2==0)s+=nums[i[1]];
            ans.push_back(s);
        }
        return ans;
    }
};