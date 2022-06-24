
class Solution {
    int index;
    string dfs(const string& s, int start) {
        string ret;
        for (index = start; index < s.size(); ++index) {
            if (s[index] == '(') {
                string st = dfs(s, index + 1);
                reverse(st.begin(), st.end());
                ret += st;
            }
            else if (s[index] == ')') {
                return ret;
            }
                ret += s[index];
            }
        }
        return ret;
    }
public:
    string reverseParentheses(string s) {
        return dfs(s, 0);
    }
};
