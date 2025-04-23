vector<int> singleNum(vector<int>& arr) {
        // Code here.
        int value = 0;
        for (int num : arr) {
            value ^= num;
        }
    
        // Find the rightmost set bit
        int rightMostSetBit = (value & (value - 1)) ^ value;
    
        int x = 0, y = 0;
        for (int num : arr) {
            if ((num & rightMostSetBit) != 0) {
                x ^= num;
            } else {
                y ^= num;
            }
        }
    
        vector<int> res = {x, y};
        sort(res.begin(), res.end());
        return res;
    }
