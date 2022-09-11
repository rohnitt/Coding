class Solution {
public:
    int partitionString(string s) {
      int DesiredOutput = 1;
        set<char> st;
        
        for(int i = 0;i < s.length(); i++){
           
            if(st.find(s[i]) == st.end()){
                st.insert(s[i]);
            }else{  // if duplicate clear set start a fresh set from that char
                DesiredOutput++;
                st.clear();
                st.insert(s[i]);
            }
        }
        return DesiredOutput;   
    }
};