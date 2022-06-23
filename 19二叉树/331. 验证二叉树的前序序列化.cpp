class Solution {
public:
    bool isValidSerialization(string preorder) {
        preorder += ",";
        int in = -1; //二叉树中 根节点入度为0  总出度 = 总入度 + 1
        int out = 0;
        for(int i = 0; i < preorder.size(); ++i){
            if(preorder[i] == ','){
                continue;
            }
            ++in;
            if(out < in){
                return false;
            }
            if(preorder[i] >= '0' && preorder[i] <= '9'){
                out += 2;
                while(preorder[i] != ',')  //跳到数字的个位
                    ++i;
                --i;
            }
        }
        return in == out;
    }
};