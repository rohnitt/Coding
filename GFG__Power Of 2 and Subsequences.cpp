class Solution{   
public:
    long long numberOfSubsequences(int n, long long A[]){
        // code here 
        // long long count=0;
         long long ans = 1;
        for(long long i = 0; i < n; i++)
            if(__builtin_popcount(A[i]) == 1) // if it is power of 2 then true
                ans = (ans*2) % (int)(1e9+7); //count++;
        return ans-1;  // return 2^count-1;
    }
};
