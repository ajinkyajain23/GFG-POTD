int countPairs(int arr[], int target) {
        // Complete the function
        int l = 0;
        int r = arr.length - 1;
        int cnt = 0;
        while(l < r){
            int sum = arr[l] + arr[r];
            if(sum == target){
                ++cnt;
                int nextLeft = l + 1;
                while(nextLeft < r && arr[nextLeft] == arr[nextLeft - 1]){
                    ++cnt;
                    ++nextLeft;
                }
                --r;
            }
            else if(sum < target){
                ++l;
            }
            else{
                --r;
            }
        }
        return cnt;
    }
