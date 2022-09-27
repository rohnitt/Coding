long long minCost(long long arr[], long long n) {
if(n<=1){

            return 0;
        }
        long long ans=0;
        priority_queue<long long ,vector<long long>, greater<long long>> pq;
        for(long long i=0;i<n;i++)
        {       
            pq.push(arr[i]);
        }
        while(!pq.empty()){
            long long first=pq.top();
            pq.pop();
            long long second=pq.top();
            pq.pop();
            long long temp=first+second;
            ans+=temp;
            if(!pq.empty()){
             pq.push(temp);
            }
        }
        return ans;
    }
