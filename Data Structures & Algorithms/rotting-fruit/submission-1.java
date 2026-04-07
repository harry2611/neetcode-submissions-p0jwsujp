class Solution {
    public int orangesRotting(int[][] grid) {
        int ans = 0;
        int fresh = 0;
        int m = grid.length;
        int n = grid[0].length;

        boolean vis[][] = new boolean[m][n];
        Queue<int[]> q = new LinkedList<>();

        for(int i = 0; i<m; i++){
            for (int j = 0; j<n; j++){
                if(grid[i][j] == 2){
                    q.add(new int[]{i, j, 0});
                    vis[i][j] = true;
                }else if (grid[i][j]== 1){
                    fresh++;
                }
            }
        }
        while(!q.isEmpty()){
            int curr[] = q.poll(); //curr pair[row,col,time] added 
            int i = curr[0];
            int j =curr[1];

            int time = curr[2];

            ans = Math.max(time, ans);

            //chk neighbors
            //top
            if(i - 1 >= 0 && vis[i-1][j] == false && grid[i-1][j] == 1){
                q.add(new int[]{i-1,j,time +1});
                vis[i-1][j]= true;
                fresh--;
            }
            //right
             if(j + 1 < n && vis[i][j+1] == false && grid[i][j+1] == 1){
                q.add(new int[]{i,j+1,time + 1});
                vis[i][j+1]= true;
                fresh--;
            }
            //bottom
             if(i + 1 < m  && vis[i+1][j] == false && grid[i+1][j] == 1){
                q.add(new int[]{i+1,j,time +1});
                vis[i+1][j]= true;
                fresh--;
            }
            //left
             if(j - 1 >= 0  && vis[i][j-1] == false && grid[i][j-1] == 1){
                q.add(new int[]{i,j-1,time + 1});
                vis[i][j-1]= true;
                fresh--;
            }



        }
        if(fresh > 0) return -1;
        return ans;
    }
}
