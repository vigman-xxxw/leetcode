class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0]; //1条边中 两个相同的顶点 就是中心顶点
        if(a == edges[1][0] || a == edges[1][1]){
            return a;
        }
        return edges[0][1];
    }
};