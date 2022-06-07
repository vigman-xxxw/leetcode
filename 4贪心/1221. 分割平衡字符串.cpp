class Solution {
public:
    int balancedStringSplit(string s) {
        int i ;
        int cnt = 0,ret = 0;
        for(i=0;i<s.size();++i){
            cnt += (s[i]=='L') ? +1 : -1;
            if(cnt == 0){
                ++ret;
            }
        }
        return ret;
    }
};