class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        int n = nums.size();
        for(int i = 0;i < 32; ++i){
            int ans =0;
            for(int j = 0; j < n; ++j){
                ans += (nums[j] >> i) & 1;
            }
            ans %= 3; //过滤掉能被3整除的数
            if(ans){
                ret += ((unsigned int)1 << i); //单独的数 每个位复原相加
            }
        }
        return ret;
    }
};