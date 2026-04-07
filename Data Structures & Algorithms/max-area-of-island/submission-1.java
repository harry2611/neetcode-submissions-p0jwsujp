class Solution {
    public int dfs(int i, int j, boolean vis[][], int[][] grid, int n, int m){
        if(i<0 || j<0 || i>= m || j>=n || vis[i][j] || grid[i][j] != 1) return 0;

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
        int m = grid.length;
        int n = grid[0].length;

        boolean vis[][] = new boolean[m][n];

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1 && vis[i][j] == false ){
                    int area = dfs(i,j,vis, grid, n, m);
                    maxarea = Math.max(maxarea, area);
                }
            }
        }
        return maxarea;
    }
}
