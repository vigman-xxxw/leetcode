class Solution {
public:
    int percentageLetter(string s, char letter) {
        int lcnt = 0;
        for(int i =0;i<s.size();++i){
            if(s[i] == letter)
                ++lcnt;
        }
        return lcnt*100/s.size();
    }
};