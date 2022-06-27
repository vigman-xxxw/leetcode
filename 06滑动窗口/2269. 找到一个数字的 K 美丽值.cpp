class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int f[10];
        f[0] = 1;
        for(int i = 1; i < 10; ++i){
            f[i] = f[i-1] * 10;
        }
        vector<int> stk;
        int N = num;
        int ret = 0;
        while(num){
            stk.push_back(num % 10);
            num /= 10;
        }
        reverse(stk.begin(),stk.end());
        int i =0 , j = -1 ;
        int size = stk.size();
        int s = 0;

        while( j < size -1){
            ++j;
            s = s * 10 + stk[j];   //能存放除数 2，24，240 
            while( j - i + 1 > k){
                ++i;
                s %= f[k]; //只保留到十位 10^k次是100   240去头变成40
            }
            if(j - i + 1 == k){
                if(s  && N % s == 0){
                    ++ret;
                }
            }
        }
        return ret;
    }
};