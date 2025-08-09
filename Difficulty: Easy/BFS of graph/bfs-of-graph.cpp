class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        queue<int>q;
        vector<int>v;
        q.push(0);
        vector<bool>vi(adj.size(),false);
        vi[0]=true;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            v.push_back(node);
            for(auto it:adj[node])
            {
                if(!vi[it])
                {
                    q.push(it);
                    vi[it]=true;
                }
            }
        }
        return v;
    }
};
         