class Solution {
    void swap(char* a,char* b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
public:
    string reversePrefix(string word, char ch) {
        int i;
        for(i =0;i<word.size();++i){
            if(ch == word[i])
                break;
        }
        if(i == word.size()){
            return word;
        }
        int j =i;
        i =0;
        while(i<j){
            swap(&word[i],&word[j]);
            ++i;
            --j;
        }
        return word;

    }
};