class Solution {
    int code(char c){
        if( c >= 'a' && c <= 'z'){
            return c - 'a';
        }
        return c - 'A' + 26;
    }
public:
    string longestNiceSubstring(string s) {
        int l,i,j,k;
        int size ;
        int hash[52];
        for(l = s.size();l>0;--l){
            i=0;
            j=-1;
            size = s.size();
            memset(hash,0,sizeof(hash));
            while(j < size - 1){
                ++j;
                ++hash[ code(s[j]) ] ;
                while(j - i + 1 > l){
                    --hash[ code(s[i]) ];
                    ++i;
                }
                if(j - i + 1 == l){
                    for( k = 0 ; k < 26 ; ++k){
                        if( hash[k] && !hash[k+26] ){
                            break;
                        }else if( !hash[k] && hash[k+26] ){
                            break;
                        }
                    }
                    if( k == 26 ){
                        return s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return "";
    }
};