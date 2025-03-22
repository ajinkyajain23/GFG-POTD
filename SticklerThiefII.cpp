int maxValue(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[0];

        vector<int> dp(n + 1, -1);
        int case1 = maxLoot(arr, 0, n - 2, dp);
        
        fill(dp.begin(), dp.end(), -1);
        int case2 = maxLoot(arr, 1, n - 1, dp);
        
        return max(case1, case2);
    }

private:
    int maxLoot(vector<int>& arr, int i, int n, vector<int>& dp) {
        if (i > n) return 0;
        
        if (dp[i] != -1) return dp[i];

        int take = arr[i] + maxLoot(arr, i + 2, n, dp);
        int notTake = maxLoot(arr, i + 1, n, dp);
        
        return dp[i] = max(take, notTake);
    }
