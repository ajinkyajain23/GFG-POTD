int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int count = 0;
        int n = arr.size();
        
        int left = 0, right = n-1;
        
        while(left < right){
            int sum = arr[left] + arr[right];
            
            if(sum == target){
                count += 1;
                
                int nextLeft = left + 1;
                
                while(nextLeft < right && arr[nextLeft] == arr[nextLeft - 1]){
                    count += 1;
                    ++nextLeft;
                }
                
                right -= 1;
                
            }else if(sum < target){
                left += 1;
            }else{
                right -= 1;
            }
        }
        
        return count;
    }
