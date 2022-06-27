class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 0, r = 100000;
        long long ans = 0;
        while(l <= r){
            long long mid = l + (r - l);
            if(mid * (mid + 1) / 2 <= n){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return ans ;
    }
};