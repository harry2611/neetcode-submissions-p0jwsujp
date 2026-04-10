class Solution {
public:
    void dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<char>>& grid, int n, int m ){
        if( i<0 || j<0 || i>= m || j>= n || vis[i][j]== true || grid[i][j] != '1' ){
            return;
        }

        vis[i][j] = true;

        dfs(i-1, j, vis,grid, n, m);
        dfs(i, j+1, vis, grid, n, m);
        dfs(i+1, j, vis, grid, n, m);
        dfs(i,j-1, vis, grid, n, m);
    }


    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int islands = 0;

        // bool vis[n][m] = false;
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for(int i = 0; i<m; i++){
            for (int j = 0; j<n; j++){
                if(grid[i][j] == '1' && vis[i][j] == false){
                    dfs(i,j, vis, grid, n, m);
                    islands++;                }
            }

        }
        return islands;

        
    }
};


