class Solution {
    public int dfs(int i, int j, boolean vis[][], int[][] grid, int n, int m){
        if(i<0 || j<0 || i>= n || j>=m || vis[i][j] || grid[i][j] != 1) return 0;

        vis[i][j] = true;
        int area = 1;

        area += dfs(i-1,j, vis, grid, n, m);
        area += dfs(i,j+1, vis, grid, n, m);
        area += dfs(i+1, j, vis, grid, n, m);
        area += dfs(i,j-1, vis, grid, n, m);
        return area;
    }


    public int maxAreaOfIsland(int[][] grid) {
        int maxarea = 0;
        int n = grid.length;
        int m = grid[0].length;

        boolean vis[][] = new boolean[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 && vis[i][j] == false ){
                    int area = dfs(i,j,vis, grid, n, m);
                    maxarea = Math.max(maxarea, area);
                }
            }
        }
        return maxarea;
    }
}
