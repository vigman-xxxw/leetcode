class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int hash[2][256];
        memset(hash,0,sizeof(hash));
        int i;
        for(i = 0; i < word1.size(); ++i){
            ++hash[0][ word1[i] ];
        }
        for(i = 0; i < word2.size(); ++i){
            ++hash[1][ word2[i] ];
        }
        for(i = 'a'; i <= 'z'; ++i){
            if( abs(hash[0][i] - hash[1][i]) > 3 ){
                return false;
            }
        }
        return true;
    }
};