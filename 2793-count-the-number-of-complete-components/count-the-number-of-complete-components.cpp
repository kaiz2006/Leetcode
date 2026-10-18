class Solution {
public:
    
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(const auto &e : edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        int count = 0;
        unordered_set<int> vis;
        for(int v =0;v<n;v++){
            if(vis.count(v)) continue;
            int comp[2] = {0,0};
            dfs(v,graph,vis,comp);

            if(comp[0]*(comp[0]-1) == comp[1]){
                count++;
            }
        }
        return count;
    }
    void dfs(int curr,vector<vector<int>> &graph,unordered_set<int> &vis,int comp[2]){
        vis.insert(curr);
        comp[0]++;
        comp[1]+=graph[curr].size();

        for(int n : graph[curr]){
            if(!vis.count(n)){
                dfs(n,graph,vis,comp);
            }
        }

    }
};