int maxValue(int[] arr) {
        // code here
        int n = arr.length;
        int[] dp = new int[n + 1];
        Arrays.fill(dp, -1);
        int case1 = maxLoot(arr, 0, n - 2, dp);
        Arrays.fill(dp, -1);
        int case2 = maxLoot(arr, 1, n - 1, dp);
        
        return Math.max(case1, case2);
    }
    
    int maxLoot(int[] arr, int i, int n, int[] dp){
        if(i > n){
            return 0;
        }
        
        if(dp[i] != -1){
            return dp[i];
        }
        
        int take = arr[i] + maxLoot(arr, i + 2, n, dp);
        int notTake = maxLoot(arr, i + 1, n, dp);
        return dp[i] = Math.max(take, notTake);
    }
