class Solution {
    void dfs(int i, int j, boolean vis[][], char grid[][], int n, int m){

        if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] != '1'){
            return;
        }

        vis [i][j] = true; //mark your current visited node as true;

        //then visit neighbors 
        dfs(i-1,j, vis, grid, n, m); //top neighbor
        dfs(i,j+1, vis, grid, n, m); //right 
        dfs(i+1,j, vis, grid, n, m); //bottom
        dfs(i,j-1, vis, grid, n, m); //left


    }


    public int numIslands(char[][] grid) {
           int islands = 0;
           int n = grid.length;
           int m = grid[0].length;

           boolean vis[][] = new boolean[n][m];

            for (int i = 0; i<n; i++){
                for (int j = 0; j<m; j++){
                    if(grid[i][j] == '1' && vis[i][j] == false){
                        dfs(i, j, vis, grid, n, m);
                        islands++;
                    }
                }
            }
             return islands;
           }
          
    }

