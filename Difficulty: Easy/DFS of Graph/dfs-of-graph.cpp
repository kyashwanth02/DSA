class Solution {
  public:
  void dfs(int node,vector<vector<int>>& adj,vector<bool>&visited,vector<int>&result)
  {
      visited[node]=true;
      result.push_back(node);
      for(int it:adj[node])
      {
          if(!visited[it])
          {
              dfs(it,adj,visited,result);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool>visited(adj.size(),false);
        vector<int>result;
        dfs(0,adj,visited,result);
        return result;
    }
};