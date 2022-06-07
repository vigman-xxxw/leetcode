class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int i;
        int cnt = 1;
        for(i = 1;i<arr.size();++i){
            if(arr[i] == arr[i-1]){
                ++cnt;
                if(cnt*4>arr.size()){
                    return arr[i];
                }
            }else{
                cnt = 1;
            }
        }
        return arr[0];
    }
};