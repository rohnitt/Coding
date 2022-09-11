class Solution {
public:
   static bool comp(pair<int,int> &p1,pair<int,int> &p2)
    {
        return p1.first>p2.first;
    }
    long long mod=1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<pair<int,int>> v(n);
        for(int i=0;i<speed.size();i++)
        {
            v[i]={efficiency[i],speed[i]};
        }
        sort(v.begin(),v.end(),comp);
        
        long long int sum=0,ans=0;
        
        for(int i=0;i<n;i++)
        {
            int sp = v[i].second;
            int Mineff = v[i].first;
            pq.push(sp);
            sum+=sp;
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            
            ans=max(ans,sum*Mineff);
            
        }
        return ans%mod;
    }
};