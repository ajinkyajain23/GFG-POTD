int longestUniqueSubstr(string &s) {
        // code here
        int res = INT_MIN; 
        bool vis[26] = {false}; 
        int we = 0, ws = 0; 
    
        for (we = 0; we < s.length(); ++we) {
            while (vis[s[we] - 'a'] == true) {
                vis[s[ws] - 'a'] = false;
                ++ws; 
            }
            vis[s[we] - 'a'] = true; 
            res = max(res, we - ws + 1); 
        }
        return res;
    }
