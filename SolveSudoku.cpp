void solveSudoku(vector<vector<int>> &mat) {
        // code here
        sudokuUtils(mat);
    }
    
    bool isValid(vector<vector<int>> &mat, int r, int c, int val) {
        for (int i = 0; i < 9; ++i) {
            if (mat[i][c] == val) {
                return false;
            }
            if (mat[r][i] == val) {
                return false;
            }
            if (mat[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == val) {
                return false;
            }
        }
        return true;
    }

    bool sudokuUtils(vector<vector<int>> &mat) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (mat[i][j] == 0) {
                    for (int val = 1; val <= 9; ++val) {
                        if (isValid(mat, i, j, val)) {
                            mat[i][j] = val;
                            if (sudokuUtils(mat)) {
                                return true;
                            }
                            mat[i][j] = 0; // Backtrack
                        }
                    }
                    return false; // No valid number found, return false
                }
            }
        }
        return true; // Solved
    }
