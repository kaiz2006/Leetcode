class Solution {
public:

    int man(vector<vector<int>>& points,int x,int y){
        return abs(points[x][0]-points[y][0]) + abs(points[x][1]-points[y][1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
        vector<bool> mst(n,false);
        int mstCost=0;
        pq.push({0,0});
        while (pq.size()>0){
            auto p = pq.top();
            int wt = p.first;
            int node = p.second;

            pq.pop();

            if(mst[node]) continue;
            mst[node]=true;
            mstCost +=wt;
            
            for(int i =0;i<n;i++){
                if(!mst[i]){
                    int edgeWt = man(points,node,i);
                    pq.push({edgeWt,i});
                }
            }
        }


        return mstCost;
    }
};