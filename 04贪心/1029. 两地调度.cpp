class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),[&](const vector<int>& a,const vector<int>& b){   
            //根据A.price - B.price排序
            return a[0]-a[1] < b[0] - b[1];
        });
        int n = costs.size()/2;
        int i;
        int ret = 0;
        for(i=0;i<n;++i){
            ret += costs[i][0] + costs[i+n][1];  //左半边去A，右半边去B
        }
        return ret;
    }
};