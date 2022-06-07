class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int i,j;
        int ret = 0;
        for(i = 0;i<arr.size();++i){
            int sum = 0;
            for(j=i;j<arr.size();++j){
                sum += arr[j];
                if((j-i+1)&1){ // 奇数
                    ret += sum;
                }
            }
        }
        return ret;
    }
};