public int findMaxSum(int arr[]) {
        // code here
        int n = arr.length;
        int[] dp = new int[n + 1];
        Arrays.fill(dp, -1);
        return findMaxSumUtil(arr, n - 1, dp);
    }
    
    int findMaxSumUtil(int[] arr, int n, int[] dp){
        if(n < 0){
            return 0;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        int take = arr[n] + findMaxSumUtil(arr, n - 2, dp);
        int notTake = findMaxSumUtil(arr, n - 1, dp);
        return dp[n] = Math.max(take, notTake);
    }
