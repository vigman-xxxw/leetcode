class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0,i; //ans要赋值成0 不然出错 原理还没研究
        for(i = 0; i < nums.size(); ++i){
            ans ^= nums[i];
        }
        return ans;
    }
};