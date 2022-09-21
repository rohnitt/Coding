//Back-end complete function Template for C++
class Solution

{
   public:
    string ReFormatString(string S, int K){
    int n =S.size();
    string ans,temp;
    for(int i=n-1;i>=0;i--){
        char ch=S[i];
        if(ch=='-') continue;
        else{
            temp+=toupper(ch);
            if(temp.size()==K){
                ans+=temp;
                ans+='-';
                temp="";
            }
        }
    }
    ans+=temp;
     reverse(ans.begin(),ans.end());
     if(ans[0]=='-'){
         ans.erase(ans.begin());
     }
     return ans ;
    }
};
