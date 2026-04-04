class Solution {

    public boolean searchInRow(int [][] mat, int target, int row){
        int n = mat[0].length;
        int st = 0; int end = n-1;

        while(st<= end){
            int mid = st + (end - st)/2;
            if(target == mat[row][mid]){
                return true;
            }else if(target > mat[row][mid]){
                st = mid +1;

            }else{
                end = mid -1;
            }
        }
        return false;

    }


    public boolean searchMatrix(int[][] mat, int target) {
        int m = mat.length; int n= mat[0].length;
        int strow = 0;
        int endrow = m-1;

        

        while (strow <= endrow){
            int midrow = strow + (endrow - strow)/2;

            if(target >= mat[midrow][0] && target <= mat[midrow][n-1]){
                return searchInRow(mat, target, midrow);
                
            }else if(target >= mat[midrow][n-1]){
                strow = midrow + 1;

            }else{
                endrow = midrow - 1;
            }

           
        }
        return false;
    }
}
