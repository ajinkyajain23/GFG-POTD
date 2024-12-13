public int findMin(int[] arr) {
        // complete the function here
        int l = 0;
        int r = arr.length - 1;
        
        if (arr[l] < arr[r]) {
            return arr[l];
        }
        
        while(l < r){
            int mid = l + (r - l) / 2;
            if(arr[mid] > arr[r]){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
        return arr[l];
    }
