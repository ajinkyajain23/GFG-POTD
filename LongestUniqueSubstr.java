public int longestUniqueSubstr(String s) {
        // code here
        int ws = 0;
        boolean[] vis = new boolean[26];
        int ans = Integer.MIN_VALUE;
        for(int we = 0; we < s.length(); ++we){
            
            while(vis[s.charAt(we) - 'a'] == true){
                vis[s.charAt(ws) - 'a'] = false;
                ++ws;
            }
            
            vis[s.charAt(we) - 'a'] = true;
            ans = Math.max(ans, we - ws + 1);
        }
        return ans;
    }
