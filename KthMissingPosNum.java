 public int kthMissing(int[] arr, int k) {
        // code here
        int idx = 0;
        int curr = 1;
        int missCnt = 0;
        int n = arr.length;
        while(missCnt < k){
            if(idx < n && arr[idx] == curr){
                ++idx;
            }
            else{
                ++missCnt;
                if(missCnt == k){
                    return curr;
                }
            }
            ++curr;
        }
        return -1;
    }
