class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int index = 0;
        int i, t = 1;
        int hash[101];
        int limit = target.back();
        memset(hash,0,sizeof(hash));
        vector<string> ret;
        for(i = 0; i < target.size(); ++i){
            hash[target[i]] = 1;
        }
        for(i = 1; i <= limit; ++i){
            ret.push_back("Push"); //第一步永远Push
            if(!hash[i]){          //数字不在哈希表中 就把他Pop
                ret.push_back("Pop");
            }
        }
        return ret;
    }
};