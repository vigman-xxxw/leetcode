class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long sum[100010] = {0};
        int i, j;
        int ans = 0;
        for(i = 1; i <= n; ++i){ //数组下标偏移
            sum[i] = sum[i-1] + nums[i-1];
        }
        i = 0;
        for(j = 1; j <= n; ++j){
            long long s = (sum[j] - sum[j-1]) * (j - i) - (sum[j] - sum[i]);  //自增的次数
            //(sum[j] - sum[j-1]) 哪个高频数  
            //(sum[j] - sum[j-1]) * (j - i)  全部变成高频数需要多少次数
            //(sum[j] - sum[j-1]) * (j - i) - (sum[j] - sum[i])  矩形面积-下三角形面积
            while(s > k){
                ++i; //把最小的那个数放弃掉 ， 把所有次数用来填后面的
                s = (sum[j] - sum[j-1]) * (j - i) - (sum[j] - sum[i]);
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};