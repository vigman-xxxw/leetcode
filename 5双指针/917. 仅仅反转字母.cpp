class Solution {
    bool isAlp(char c){
        return c>='a'&&c<='z' || c>='A'&&c<='Z';
    }
    void swap(char* a,char * b){
        char tmp = *a;
        *a = *b;
        *b = tmp;
    }

public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j= s.size()-1;
        while(i<j){
            if(!isAlp(s[i])){
                ++i;
                continue;
            }
            if(!isAlp(s[j])){
                --j;
                continue;
            }
            swap(&s[i],&s[j]);
            ++i;
            --j;
        }
        return s;
    }
};