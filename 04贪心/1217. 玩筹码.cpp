class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int i,j;
        int cost, mincost = 1000000;
        for(i=0; i < position.size() ;++i){
            cost = 0;
            for(j=0 ; j < position.size() ;++j){
                if( (position[j] - position[i]) & 1){
                    ++cost;
                }
            }
            mincost = min(mincost,cost);
        }
        return mincost;
    }
};