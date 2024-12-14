int search(int[] arr, int key) {
        // Complete this function
        int l = 0;
        int r = arr.length - 1;
        while(l <= r){
            int m = (l + r) / 2;
            if(arr[m] == key){
                return m;
            }
            
            if(arr[m] >= arr[l]){
                if(key >= arr[l] && key <= arr[m]){
                   r = m - 1; 
                }
                else{
                    l = m + 1;
                }
            }
            else{
                if(key>= arr[m] && key <= arr[r]){
                    l = m + 1;
                }
                else{
                    r = m - 1;
                }
            }
        }
        return -1;
    }
