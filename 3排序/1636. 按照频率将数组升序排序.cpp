class Solution {
    #define base 100
public:
    vector<int> frequencySort(vector<int>& nums) {
        int i;
        int hash[201];
        memset(hash,0,sizeof(hash));
        for(i=0;i<nums.size();++i){
            ++hash[nums[i]+base]; //base解决负数
        }
        sort(nums.begin(),nums.end(),[&](const int& a,const int& b){//排序规则是匿名函数
            if(hash[a+base]!=hash[b+base]){
                return hash[a+base] < hash[b+base]; //按哈希表升序
            }
            return a>b; //降序
        });
        return nums;
    }
};