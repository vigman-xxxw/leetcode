class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        int j = 0;
        stack<int> stk;
        while(i < pushed.size() || j < popped.size()){
            if(i < pushed.size()){
                stk.push(pushed[i++]);
            }
            while(!stk.empty() && stk.top() == popped[j]){
                stk.pop();
                ++j;
            }
            if(i == pushed.size()){
                if(j < popped.size()){
                    return false;
                }
            }
        }
        return true;
    }
};