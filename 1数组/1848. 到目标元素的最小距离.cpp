class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i;
        int u = -1;
        int Min = 1000000000;
        for(i =0;i<nums.size();++i){
            if(nums[i] == target && abs(i-start)<Min){
                Min = abs(i-start);
                u = i;
            }
        }
        return Min;
    }
};