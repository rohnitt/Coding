class Solution {
public:
    // custom split template
    vector<string> split(string str, char delim) {
        string line;
        vector<string> res;
        stringstream ss(str);
        while (getline(ss, line, delim)) res.push_back(line);
        return res;
    }

    string reverseWords(string s) {
        // split by ' '
        vector<string> v = split(s, ' ');
        // reverse each string
        for(auto &x : v) reverse(x.begin(), x.end());
        // construct the answer
        string ans;
        for(int i = 0; i < v.size(); i++) {
            ans += v[i];
            // add space after each string except the last one
            if(i != v.size() - 1) ans += " ";
        } 
        return ans;
    }
};