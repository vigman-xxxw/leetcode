class Solution {
    int search(vector<int>& nums,  int target) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums.size();
        while(l <= r){
            int mid = (l + r) / 2;
            if(nums[mid] >= target){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int leftidx;
        leftidx = search(nums, target);
        if(leftidx != size && nums[leftidx] == target){
            int rightidx = search(nums, target + 1) - 1;
            return vector<int> {leftidx, rightidx};
        }else{
            return vector<int>{-1, -1};
        }
    }
};