class Solution {
    int UnionFind[26];
    int find(int x) {
        return UnionFind[x] == x ? x : (UnionFind[x] = find(UnionFind[x]));
    }
public:
    bool equationsPossible(vector<string>& equations) {
        for (int i = 0; i < 26; ++i) UnionFind[i] = i;
        for (auto i : equations) {
            if (i[1] == '=') UnionFind[find(i[0] - 'a')] = find(i[3] - 'a'); //store variables in same component if they are equal.
        }
        for (auto i : equations) {
            if (i[1] == '!' && find(i[0] - 'a') == find(i[3] - 'a')) return false; // if != variable in same component then return false;
        }
        return true;
    }
};