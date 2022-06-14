class Solution {
public:
    string removeOuterParentheses(string s) {
        int i, j;
        int pre = 0;
        int stktop = 0;
        string ans;
        for(i = 0; i < s.size(); ++i){
            if(s[i] == '('){
                ++stktop;
            }else{
                --stktop;
            }
            if(!stktop){
                for(j = pre + 1; j <= i - 1; ++j){  //遍历输出 外层括号内的 内容
                    ans += s[j];
                }
                pre = i + 1;
            }
        }
        return ans;
    }
};