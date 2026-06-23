class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<vector<pair<int,int>>> graph(n);

        for(auto &f : flights){
            int u = f[0];
            int v = f[1];
            int wt = f[2];

            graph[u].push_back({v, wt});
        }

        
        queue<pair<int, pair<int,int>>> q;

        vector<int> dist(n, INT_MAX);

        q.push({src, {0, 0}});
        dist[src] = 0;

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int node = it.first;
            int cost = it.second.first;
            int stops = it.second.second;

            if(stops > k) continue;

            for(auto &edge : graph[node]){
                int adj = edge.first;
                int wt = edge.second;

                if(cost + wt < dist[adj]){
                    dist[adj] = cost + wt;
                    q.push({adj, {dist[adj], stops + 1}});
                }
            }
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};