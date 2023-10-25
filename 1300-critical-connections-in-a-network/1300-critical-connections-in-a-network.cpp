class Solution {
public:
    void dfs(int node, unordered_map<int,list<int>>&adj,vector<int>&disc,vector<int>&low,unordered_map<int,bool>&visited,vector<int>&parent,int &timer,vector<vector<int>>&ans){
        timer++;
        disc[node]=timer;
        low[node]=timer;
        visited[node]=true;
        for (auto nb:adj[node]){
            if(nb==parent[node]){
                continue;
            }
            if(!visited[nb]){
                parent[nb]=node;
                dfs(nb,adj,disc,low,visited,parent,timer,ans);
               low[node]=min(low[node],low[nb]);
                if(low[nb]>disc[node]){
                    ans.push_back({nb,node});
                }
            }
            else {
                low[node]=min(low[node],disc[nb]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
         vector<vector<int>> ans;
         vector<int>disc(n,-1);
         vector<int>low(n,-1);
         unordered_map<int,bool>visited;
         vector<int>parent(n,-1);
         int timer=0;
         unordered_map<int,list<int>>adj;
         for (int i=0;i<connections.size();i++){
             int u=connections[i][0];
             int v=connections[i][1];
             adj[u].push_back(v);
             adj[v].push_back(u);
         }
         for (int i=0;i<n;i++){
             if(!visited[i])
             dfs(i,adj,disc,low,visited,parent,timer,ans);
         }
         return ans ;
    }
};