class Solution {
public:
    bool iscycle(int src,vector<bool> &vis,vector<bool> &rec,vector<vector<int>>& edges){
        vis[src]=true;
        rec[src]=true;

        for(int i=0;i<edges.size();i++){
            int v = edges[i][0];
            int u =edges[i][1];
            
            if(src==u){
                if(!vis[v]){
                    if(iscycle(v,vis,rec,edges)){
                        return true;
                    }
                }else if(rec[v]){
                        return true;
                    }
            }
        }

        rec[src]=false;
        return false;
    }

    void topo(int src,vector<bool> &vis,stack<int> &s,vector<vector<int>>& edges){
        vis[src]=true; 

        for(int i=0;i<edges.size();i++){
            int v = edges[i][0];
            int u =edges[i][1];
            
            if(src==u){
                if(!vis[v]){
                    topo(v,vis,s,edges);
                }
            }
        }
        s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n,false);
        vector<bool> rec(n,false);

        vector<int> ans;

        for(int i =0;i<n;i++){
            if(!vis[i]){
                if(iscycle(i,vis,rec,edges)){
                    return ans;
                }
            }
        }

        stack<int> s;
        vis.assign(n,false);

        for(int i =0;i<n;i++){
            if(!vis[i]){
                topo(i,vis,s,edges);
            }
        }

        while(s.size()){
            ans.push_back(s.top());
            s.pop();
        }

        return ans;


    }
};