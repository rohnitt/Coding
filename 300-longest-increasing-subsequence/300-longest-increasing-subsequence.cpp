class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(nums.size(),1);
        vector<int> h;// helper array
        h.push_back(nums[0]);
        int index_of_h=0;
        for(int i=0;i<n;i++){ 
            if(h[index_of_h]<nums[i]){
                h.push_back(nums[i]);
                index_of_h++;
            }
            else
              {
                  binaryMethod(nums[i],h,index_of_h);
              }
              dp[i]=index_of_h+1;
            cout<<dp[i]<<" ";
        }
        return dp[dp.size()-1];
    }
     void binaryMethod(int element,vector<int> & h,int index){
            int le=0;
            int ri=index;
            while(le<ri){
                int mid=(le+ri)/2;
                if(h[mid]==element) return;
                else if(element<h[mid]) ri=mid;
                else le = mid+1;
            }
            h[ri]=element;
        }
};