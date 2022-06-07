class Solution {
    unordered_map< string, int > hash;
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1 += " ";
        s2 += " ";
        char tmp[210];
        int i;
        int size = 0;
        vector<string> ret;
        for(i = 0; i < s1.size(); ++i){
            if(s1[i] == ' '){
                tmp[size] = '\0';
                if(size){
                    hash[ tmp ]++; //把char存的内容放入哈希表 并使它的值++
                }
                size = 0;
            }
            else{
                tmp[ size++ ] = s1[i];
            }
        }
        size = 0;
        for(i = 0; i < s2.size(); ++i){
            if(s2[i] == ' '){
                tmp[size] = '\0';
                if(size){
                    hash[ tmp ]++;
                }
                size = 0;
            }
            else{
                tmp[ size++ ] = s2[i];
            }
        }
        for(auto iter = hash.begin(); iter != hash.end(); ++iter ){
            if(hash[ iter->first ] == 1){
                ret.push_back(iter->first);
            }
        }
        return ret;
    }
};