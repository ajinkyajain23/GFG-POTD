int getSingle(vector<int> &arr) {
        // code here
        int res = 0;
        int n = arr.size();
        for(int i = 0; i < 32; ++i){
            int count = 0;
            int x = 1 << i;
            for(int j = 0; j < n; ++j){
                if((arr[j] & x) != 0){
                    ++count;
                }
            }
            
            if(count %3 != 0){
                res |= x;
            }
        }
        return res;
    }
