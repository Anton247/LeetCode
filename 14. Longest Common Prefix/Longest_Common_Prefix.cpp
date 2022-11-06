class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        pair<size_t, size_t> minLength = { 0, strs[0].length() };
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].length() < minLength.second)
                minLength = { i, strs[i].length() };
        }
        string res = "";
        for (int i = 0; i < strs[minLength.first].length(); ++i) {
            for (int j = 0; j < strs.size(); ++j) {
                if (strs[minLength.first][i] != strs[j][i])
                    return res;
            }
            res += strs[minLength.first][i];
        }
        return res;
    }
};