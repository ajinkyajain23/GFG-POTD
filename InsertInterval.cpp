 vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
          vector<vector<int>> result;
            int i = 0, n = intervals.size();
        
            // Add intervals that come before the new interval
            while (i < n && intervals[i][1] < newInterval[0]) {
                result.push_back(intervals[i]);
                i++;
            }
        
            // Merge overlapping intervals with the new interval
            while (i < n && intervals[i][0] <= newInterval[1]) {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
                i++;
            }
            result.push_back(newInterval);
        
            // Add remaining intervals that come after the new interval
            while (i < n) {
                result.push_back(intervals[i]);
                i++;
            }
        
            return result;
    }