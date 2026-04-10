class Solution {
public:
    int dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<int>>& grid, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n || vis[i][j] == true || grid[i][j] != 1){
            return 0;
        }

        int area = 1;
        vis[i][j] = true;

        area += dfs(i-1, j, vis, grid, m, n);
        area += dfs(i, j+1, vis, grid, m, n);
        area += dfs(i+1, j, vis, grid, m, n);
        area += dfs(i, j-1, vis, grid, m, n);
        return area;
           


    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea = 0;
        int m = grid.size();
        int n = grid[0].size();

        vector<vector <bool>> vis(m, vector<bool>(n, false));

        for(int i = 0; i<m; i++){
            for(int j =0; j<n; j++){
                if(grid[i][j] == 1 && vis[i][j] == false){
                    int area = dfs(i, j, vis, grid, m, n);
                    maxarea = max(maxarea, area);
                }
            }
        }
        return maxarea;
    }
};
