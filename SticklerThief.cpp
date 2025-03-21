int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n + 1, -1);
        return findMaxSum(arr, n - 1, dp);
    }
    
    int findMaxSum(vector<int>& arr, int n, vector<int>& dp) {
        if (n < 0) {
            return 0;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        int take = arr[n] + findMaxSum(arr, n - 2, dp);
        int notTake = findMaxSum(arr, n - 1, dp);

        return dp[n] = max(take, notTake);
    }
