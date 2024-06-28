bool checkForPalinRow(const vector<vector<int>>& arr, int row, int n) {
        int l = 0, r = n - 1;
        while (l < r) {
            if (arr[row][l] != arr[row][r]) {
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
    
    bool checkForPalinCol(const vector<vector<int>>& arr, int col, int n) {
        int l = 0, r = n - 1;
        while (l < r) {
            if (arr[l][col] != arr[r][col]) {
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
    
    string pattern(const vector<vector<int>>& arr) {
        int n = arr.size();
    
        for (int row = 0; row < n; ++row) {
            if (checkForPalinRow(arr, row, n)) {
                return to_string(row) + " R";
            }
        }
    
        for (int col = 0; col < n; ++col) {
            if (checkForPalinCol(arr, col, n)) {
                return to_string(col) + " C";
            }
        }
        return "-1";
    }
