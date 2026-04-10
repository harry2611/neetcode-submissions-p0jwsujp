class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<pair<int, int>,int>> q;
        vector<vector<bool>> vis(m,  vector<bool> (n, false));

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n ; j++){
                if(grid[i][j] == 0){
                    q.push({{i,j}, 0});
                    vis[i][j]= true;
                }
            }
        }
        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int dist = q.front().second;
            q.pop();

            grid[i][j] = dist;

            if(i-1 >= 0 && vis[i-1][j] == false && grid[i-1][j] == 2147483647){
                q.push({{i-1,j}, dist + 1});
                vis[i-1][j] = true;
            }
             if(j+1 < n && vis[i][j+1] == false && grid[i][j+1] == 2147483647){
                q.push({{i,j+1}, dist + 1});
                vis[i][j+1] = true;
            }
             if(i+1 < m && vis[i+1][j] == false && grid[i+1][j] == 2147483647){
                q.push({{i+1,j}, dist + 1});
                vis[i+1][j] = true;
            }
             if(j-1 >= 0 && vis[i][j-1] == false && grid[i][j-1] == 2147483647){
                q.push({{i,j-1}, dist + 1});
                vis[i][j-1] = true;
            }




        }
    }
};
