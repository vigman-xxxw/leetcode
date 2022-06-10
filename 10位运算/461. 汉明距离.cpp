class Solution {
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n){
            ans += (n & 1);
            n >>= 1;
        }
        return ans;
    }
public:
    int hammingDistance(int x, int y) {
        return hammingWeight(x ^ y); //统计不同位上1的个数
    }
};