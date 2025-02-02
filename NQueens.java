public ArrayList<ArrayList<Integer>> nQueen(int n) {
        // code here
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        ArrayList<Integer> temp = new ArrayList<>();
        for(int i =0; i < n; ++i){
            temp.add(0);
        }
        help(n, ans, temp, 0);
        return ans;
    }
    
    boolean canPlace(int row, int col, ArrayList<Integer> temp, int n){
        int r = row;
        int c = col;
        --r;
        --c;
        while(r >= 0 && c >= 0){
            if(temp.get(r) == c+ 1){
                return false;
            }
            --r;
            --c;
        }
        r = row;
        c = col;
        while(r>= 0){
            if(temp.get(r) == c+ 1){
                return false;
            }
            --r;
        }
        
        r = row;
        c = col;
        --r;
        ++c;
        while(r >= 0 && c < temp.size()){
            if(temp.get(r) == c + 1){
                return false;
            }
            --r;
            ++c;
        }
        return true;
    }
    
    void help(int n, ArrayList<ArrayList<Integer>> ans, ArrayList<Integer> temp, int row){
        if(row == n){
            ans.add(new ArrayList<>(temp));
            return;
        }
        
        for(int col = 0; col < n ;++col){
            if(canPlace(row, col, temp, n)){
                temp.set(row,col + 1);
                help(n, ans, temp, row + 1);
                temp.set(row, 0);
            }
        }
    }
