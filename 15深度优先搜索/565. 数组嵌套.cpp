class Solution {
    int Max;
    int cnt;
    int hash[200010];
    void dfs(vector<int>& nums, int u, int color){
        if(hash[u] != -1){
            return ;
        }
        hash[u] = color;
        ++cnt;
        dfs(nums, nums[u], color);
    }
public:
    int arrayNesting(vector<int>& nums) {
        int i;
        int n = nums.size();
        int color = 0;
        Max = 0;
        memset(hash, -1, sizeof(hash));
        for(i = 0; i < n; ++i){
            if(-1 == hash[i]){
                cnt = 0;
                dfs(nums, i, ++color);
                Max = max(Max, cnt);
            }
        }
        return Max;
    }
};