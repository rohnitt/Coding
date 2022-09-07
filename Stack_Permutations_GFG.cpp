https://practice.geeksforgeeks.org/viewSol.php?subId=2d9000c50102ba8d74eec4871556d5b5&pid=710056&user=rohitkumar36

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
         stack<int> s;
    for (int i = 0,j=0; j <N && i <= N;)

    {
        if (!s.empty() and B[j] == s.top()) //if stack is not empty and top matches with B[j]
        {
             s.pop();
            j++;
        }
     else
        {
              s.push(A[i]);
                i++;
            }
    }
    if (s.empty())
        return 1;
    else
        return 0;
    }
};
