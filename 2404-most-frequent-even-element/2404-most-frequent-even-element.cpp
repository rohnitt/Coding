class Solution {
public:
      static bool comp(const pair<int,int>&p1,const pair<int,int> &p2){
        return p1.second>p2.second;
    }
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        int maxi=INT_MIN,a=INT_MAX;
        for(auto i:nums)
            m[i]++;
       // sort(m.begin(),m.end(),comp);
        for(auto i:m){
            if(i.first%2==0 and i.second>maxi){
                maxi=i.second;
                 a=i.first;
        }
        }
        if(maxi!=INT_MIN)
            return a;
        else 
            return -1;
    }
};

