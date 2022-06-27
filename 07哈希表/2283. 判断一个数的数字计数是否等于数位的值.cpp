class Solution {
public:
    bool digitCount(string num) {
        int i, hash[11];
        memset(hash,0,sizeof(hash));
        if(num == "0"){
            return false;
        }
        for(i = 0; i < num.size(); ++i){
            ++hash[ num[i] - '0' ];
        }
        for(i = 0; i < num.size(); ++i){
            if( hash[ i ] != num[i] - '0' ){ //把num[i]变成字符
                return false;
            }
        }
        return true;
    }
};