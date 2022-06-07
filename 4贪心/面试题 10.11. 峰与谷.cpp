class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        int i;
        int l =0;
        int r = nums.size()-1;
        while(l<r){
            tmp.push_back(nums[r--]);
            tmp.push_back(nums[l++]);
        }
        if(l==r)
            tmp.push_back(nums[l]);
        for(i=0;i<nums.size();++i){
            nums[i] = tmp[i];
        }
    }
};