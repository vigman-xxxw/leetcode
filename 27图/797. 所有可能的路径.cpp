class Solution {
        vector<vector<int> > ret;
        vector<int> stk;
        void dfs(int n, vector<vector<int> >& graph, int now){
            if(now == n - 1){
                ret.push_back(stk);
                return;
            }
            for(int i = 0; i < graph[now].size(); ++i){
                stk.push_back(graph[now][i]);
                dfs(n, graph, graph[now][i]);
                stk.pop_back();
            }
        }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        //类似邻接表的存储结构 题意是求从顶点0到顶点n-1的路径
        int n = graph.size();
        stk.clear();
        ret.clear();
        stk.push_back(0);
        dfs(n, graph, 0);
        return ret;
    }
};