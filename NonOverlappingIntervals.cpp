int minRemoval(vector<vector<int>> &intervals) {
        // code here
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
    
        int end = intervals[0][1];
        int count = 0;
    
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < end) {
                ++count;
            } else {
                end = intervals[i][1];
            }
        }
    
        return count;
    }
