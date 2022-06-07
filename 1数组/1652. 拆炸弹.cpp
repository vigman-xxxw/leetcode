class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ret;
        int n = code.size();
        int i,j,val;
        for(i=0;i<code.size();++i){
            val = 0;
            if(k>0){
                for(j=i+1;j<=i+k;++j){
                    val += code[j%n];
                }
            }
            else if(k<0){
                for(j = i-1;j>=i+k;--j){
                    val += code[(j%n+n)%n];
                }
            }
            ret.push_back(val);
        }
        return ret;
    }
};