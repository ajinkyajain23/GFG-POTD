static public boolean isWordExist(char[][] mat, String word) {
        // Code here
        int m = mat.length;
        int n = mat[0].length;
        for(int i = 0; i <m ;++i){
            for(int j = 0; j < n; ++j){
                if(mat[i][j] == word.charAt(0) && help(mat, i, j, word, 0)){
                    return true;
                }
            }
        }
        return false;
    }
    
    static boolean help(char[][] mat, int i, int j, String word, int len){
        if(len == word.length()){
            return true;
        }
        
        if(i < 0 || j < 0 || i >= mat.length || j >= mat[0].length){
            return false;
        }
        
        if(mat[i][j] != word.charAt(len)){
            return false;
        }
        
        char temp = mat[i][j];
        mat[i][j] = '*';
        
        boolean found = help(mat, i - 1, j, word, len + 1) || 
                        help(mat, i + 1, j, word, len + 1) ||
                        help(mat, i, j - 1, word, len + 1) ||
                        help(mat, i, j + 1, word, len + 1);
                        
        
        mat[i][j] = temp;
        return found;
        
    }
