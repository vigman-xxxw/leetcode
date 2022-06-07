class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0 ;
        int j = -1 ;
        int size = nums.size();
        int ans = 1000000000;
        while( j < size-1){
            ++j;
            while( j-i+1 > k ){
                ++i;
            }
            if( j-i+1 == k){
                ans = min(ans,nums[j]-nums[i]);
            }
        }
        return ans;
    }
};