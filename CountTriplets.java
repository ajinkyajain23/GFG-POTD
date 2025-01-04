public int countTriplets(int[] arr, int target) {
        // Code Here
        int n = arr.length;
        int res = 0;
        for(int i = 0; i < n - 2; ++i){
            int l = i + 1;
            int r = n - 1;
            while(l < r){
                int sum = arr[i] + arr[l] + arr[r];
                if(sum < target){
                    ++l;
                }
                else if(sum > target){
                    --r;
                }
                else if(sum == target){
                    
                    int cnt1 = 0;
                    int cnt2 = 0;
                    int ele1 = arr[l];
                    int ele2 = arr[r];
                    while(l <= r && ele1 == arr[l]){
                        cnt1++;
                        l++;
                    }
                    
                    while(l <= r && ele2 == arr[r]){
                        cnt2++;
                        r--;
                    }
                    
                    if(ele1 == ele2){
                        res += (cnt1 *(cnt1 - 1)) / 2;
                    }
                    else{
                        res += cnt1 * cnt2;
                    }
                }
            }
        }
        return res;
    }
