class Solution {
        int n ;
       int  m ;
    long long  mod = 1e9 + 7;
    // int dirx[4] = {-1,1,0,0};
    // int diry[4] = {0,0,-1,1};
    long long dfs(int xcordinate, int ycordinate, vector<vector<int>>& grid, vector<vector<int>> &dp)
    {
        static int dirx[4] = {-1,1,0,0};
    static int diry[4] = {0,0,-1,1};
        if(dp[xcordinate][ycordinate] != -1)
            return dp[xcordinate][ycordinate];
        
        long long val = 0;
        for(int i = 0; i < 4; i++)
        {
            long long ans = grid[xcordinate][ycordinate];
            int nxtx = xcordinate + dirx[i];
            int nxty = ycordinate + diry[i];
            if(nxtx >= n || nxty >= m || nxtx < 0 || nxty < 0) continue;
            if(grid[nxtx][nxty] <= grid[xcordinate][ycordinate]) continue;
            val = (val% mod + dfs(nxtx, nxty, grid, dp) % mod + 1)%mod;
        }
        return dp[xcordinate][ycordinate] = val;
    }
public:
    int countPaths(vector<vector<int>>& grid) {
       n = grid.size();
       m = grid[0].size();
        long long paths = 0;
       //long long  mod = 1e9 + 7;
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                paths = (paths%mod + 1 + dfs(i , j , grid, dp)%mod)%mod;
            }
        }
        return (paths%mod);
    }
};