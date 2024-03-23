    vector<int> Series(int n) {
        // Code here
        std::vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        int mod = 1000000007;
        for(int i = 2; i <= n; ++i){
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        }
        return dp;
    }
