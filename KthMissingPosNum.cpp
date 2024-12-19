 int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int missingCount = 0;
        int currentNum = 1;
        int idx = 0;
        int n = arr.size();
        while(missingCount < k){
            if(idx < n && arr[idx] == currentNum){
                ++idx;
            }
            else{
                ++missingCount;
                if(missingCount == k){
                    return  currentNum;
                }
            }
            ++currentNum;
        }
        return -1;
    }
