class Solution {
    
    boolean checkForPalRow(int[][] arr, int row, int n){
        int l = 0;
        int r = n - 1;
        while(l < r){
            if(arr[row][l] != arr[row][r]){
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
    
    boolean checkForPalCol(int[][] arr, int col, int n){
        int l = 0;
        int r = n - 1;
        while(l < r){
            if(arr[l][col] != arr[r][col]){
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
    public String pattern(int[][] arr) {
        // Code here
        int n = arr.length;
        for(int row = 0; row< n; ++row){
            if(checkForPalRow(arr, row, n)){
                return row + " R";
            }
        }
        
        for(int col = 0; col< n; ++col){
            if(checkForPalCol(arr, col, n)){
                return col + " C";
            }
        }
        
        return "-1";
        
    }
}
