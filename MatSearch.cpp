bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
         int row = 0;
        int col = mat[0].size() - 1;
        int n = mat.size();
        
        while (row < n && col >= 0) {
            int curr = mat[row][col];
            if (curr == x) {
                return true;
            }
            if (curr > x) {
                --col;
            } else {
                ++row;
            }
        }
        
        return false;
    }
