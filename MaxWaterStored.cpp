int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int maxWaterStored = INT_MIN;
    
        while (low < high) {
            int waterStored = std::min(arr[low], arr[high]) * (high - low);
            maxWaterStored = std::max(maxWaterStored, waterStored);
            if (arr[low] < arr[high]) {
                ++low;
            } else {
                --high;
            }
        }
    
        return maxWaterStored == INT_MIN ? 0 : maxWaterStored;
    }
