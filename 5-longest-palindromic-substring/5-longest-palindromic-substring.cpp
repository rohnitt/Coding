class Solution {
public:
   // vector<int> Palin()
    string longestPalindrome(string s) {
        int n=s.size();
        //int i=0;
        //int j=n-1;
        string p;
        int len=1;
        vector<vector<int>> dp(n,vector<int>(n,0));
        for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
        
        // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            start = i;
            len= 2;
        }
    }
        
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                // Get the ending index of substring from
            // starting index j and length i
            int j = i+k - 1;
 
            // checking for sub-string from ith index to
            // jth index iff str[i+1] to str[j-1] is a
            // palindrome
            if (dp[i + 1][j - 1] && s[i] == s[j]) {
                dp[i][j] = 1;
 
                if (k > len) {
                    start = i;
                    len = k;
                }
            }
                
                
            }
        }
        p=s.substr(start, len);
        return p;
    }
};