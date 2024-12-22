public static boolean matSearch(int mat[][], int x) {
        // your code here
        int row = 0;
        int col = mat[0].length - 1;
        int n = mat.length;
        while(row < n && col >= 0){
            int curr = mat[row][col];
            if(curr == x){
                return true;
            }
             if(curr > x){
                 --col;
             }
             else{
                 ++row;
             }
        }
        return false;
    }
