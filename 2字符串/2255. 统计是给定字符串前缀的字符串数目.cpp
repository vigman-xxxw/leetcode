class Solution {
    bool isprefix(string& pre,string& s){
        if(pre.size()>s.size()){
            return false;
        }
        for(int i =0;i<pre.size();++i){
            if(pre[i]!=s[i]){
                return false;
            }
        }
        return true;
    }
public:
    int countPrefixes(vector<string>& words, string s) {
        int ret = 0;
        for(int i =0; i < words.size(); ++i){
            if(isprefix(words[i],s)){
                ++ret;
            }
        }
        return ret;
    }
};