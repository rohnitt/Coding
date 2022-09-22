class Solution {
public:
int countSubstrings(string s) {
    int n=s.length() ;
    vector<vector<bool>> dp(n,vector<bool>(n,false)) ;
    int count=0,i,j ;
    
    for(int g=0;g<n;g++) //Diagonal traversal top left to bottom right
    {
        for(i=0,j=g;j<n;i++,j++)
        {
            if(i==j) //Substrings with length 1(Diagonal elements)
                dp[i][j]=true ;
            
            else if(g==1)//Substrings with length 2
            {
                if(s[i]==s[j])
                dp[i][j]=true ;
            }
            else//Substrings with length more than 2
            {
                if(s[i]==s[j] && dp[i+1][j-1])
                    dp[i][j]=true ;
            }
            
            if(dp[i][j]) // If palindrome
                count++ ;
        }
    }
    
    return count ;
    
    
}
};