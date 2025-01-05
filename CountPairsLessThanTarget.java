int countPairs(int arr[], int target) {
        // Your code here
        Arrays.sort(arr);
        int l = 0;
        int r = arr.length - 1;
        int cnt = 0;
        while(l < r){
            int sum = arr[l] + arr[r];
            if(sum < target){
                cnt += r - l;
                ++l;
            }
            else{
                --r;
            }
        }
        
        return cnt;
    }
