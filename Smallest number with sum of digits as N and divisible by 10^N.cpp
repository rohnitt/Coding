https://practice.geeksforgeeks.org/viewSol.php?subId=8972a5a5179050e99c98756f921b960e&pid=704604&user=rohitkumar36
Greedy Approach
class Solution{
	public:
	string digitsNum(int N)
	{
	    // Code here.
	     string ans = "";
	   for(int i = 0; i < N; i++){
	       ans += '0';
	   }
	   while(N >= 9){
	       ans = '9' + ans;
	       N -= 9;
	   }
	   if(N != 0){
	       ans = to_string(N) + ans;
	   }
	   return ans;
	}
};
