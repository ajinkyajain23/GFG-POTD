    bool isWordExist(vector<vector<char>>& mat, string& word) {
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(mat[i][j] == word[0] && dfs(mat, i, j, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
    

    bool dfs(vector<vector<char>>& mat, int i, int j, string& word, int len) {
        if(len == word.size()) {
            return true;
        }

        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || mat[i][j] != word[len]) {
            return false;
        }

        char temp = mat[i][j];
        mat[i][j] = '*'; // Mark as visited

        bool found = dfs(mat, i + 1, j, word, len + 1) ||
                     dfs(mat, i - 1, j, word, len + 1) ||
                     dfs(mat, i, j + 1, word, len + 1) ||
                     dfs(mat, i, j - 1, word, len + 1);

        mat[i][j] = temp; // Restore original character
        return found;
    }
