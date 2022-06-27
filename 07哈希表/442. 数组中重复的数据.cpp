class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int hash[100005];
        vector<int> ret;
        memset(hash,0,sizeof(hash));
        for(int i =0 ; i < nums.size(); ++i){
            if(hash[ nums[i] ]){
                ret.push_back( nums[i] );
            }
            ++hash[ nums[i] ];
        }
        return ret;
    }
};