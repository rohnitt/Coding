class Solution {
public:
    int count = 0;
    void dfs(vector<vector<char> > &mat, string target, int r, int c, int i){
       if(r< 0 or c<0 or r >= mat.size() or c >= mat[0].size()) // out of bound index base condition
           return;
           
       if(mat[r][c] != target[i]) // if target[i] is not matching with current mar[i][j] return 
           return;
           
       if(i == target.size()-1){ // if index is equal to target size then we have reached one of the solution so increment
           count++;
           return;
       }
           
       char ch = mat[r][c];
       
       mat[r][c] = '_'; // removing character which has visited
       
       dfs(mat, target, r+1, c, i+1);
       dfs(mat, target, r-1, c, i+1);
       dfs(mat, target, r, c+1, i+1);
       dfs(mat, target, r, c-1, i+1);
       
       mat[r][c] = ch; // putting back character which has been visited basically Backtracking
   }
   
   int findOccurrence(vector<vector<char> > &mat, string target){
       for(int i = 0; i < mat.size(); i++){
           for(int j = 0; j < mat[0].size(); j++)
               //if(mat[i][j] == target[0])
                   dfs(mat, target, i, j, 0);
       }
       
       return count;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){
           for(int j = 0; j < board[0].size(); j++)
               //if(mat[i][j] == target[0])
                   dfs(board, word, i, j, 0);
            if(count>=1) return true;
       }
       return false;
    }
};