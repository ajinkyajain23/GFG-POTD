public int maxWater(int arr[]) {
        // Code Here
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        int maxStored = Integer.MIN_VALUE;
        while(low < high){
            int waterStored = (high - low) * Math.min(arr[high], arr[low]);
            maxStored = Math.max(waterStored, maxStored);
            if(arr[low] < arr[high]){
                ++low;
            }
            else{
                --high;
            }
        }
        return maxStored == Integer.MIN_VALUE ? 0: maxStored;
    }
