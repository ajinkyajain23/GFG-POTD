bool searchRowMatrix(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        for (int i = 0; i < n; ++i) {
            if (search(mat, x, i)) {
                return true;
            }
        }
        return false;
    }
    
    bool search(vector<vector<int>>& mat, int x, int rowNo) {
        int l = 0;
        int r = mat[rowNo].size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (mat[rowNo][mid] == x) {
                return true;
            }
            if (mat[rowNo][mid] > x) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return false;
    }
