int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int, int> map;
        int cnt = 0;
        
        for(int num : arr) {
            int compliment = target - num;
            if(map.find(compliment) != map.end()) {
                cnt += map[compliment];
            }
            
            map[num]++;
        }
        
        return cnt;
    }
