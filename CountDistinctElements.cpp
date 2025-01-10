vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
         std::unordered_map<int, int> map;
        std::vector<int> res;
        int ws = 0;
        int n = arr.size();
        for (int we = 0; we < n; ++we) {
            
            map[arr[we]]++;
    
            
            if (we - ws + 1 == k) {
                
                res.push_back(map.size());
    
                
                if (map[arr[ws]] == 1) {
                    map.erase(arr[ws]);
                } else {
                    map[arr[ws]]--;
                }
                
                ++ws;
            }
        }
    
        return res;
    }
