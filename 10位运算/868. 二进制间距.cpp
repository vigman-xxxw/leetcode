class Solution {
public:
    int binaryGap(int n) {
        int pre = -1;
        int now = 0;
        int maxd = 0;
        while(n){
            if(n & 1){ //当前数为1
                if(pre != -1){
                    maxd = max(now - pre, maxd);
                }
                pre = now;
            }
            n >>= 1;
            ++now;
        }
        return maxd;
    }
};