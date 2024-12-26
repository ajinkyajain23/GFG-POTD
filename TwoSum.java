boolean twoSum(int arr[], int target) {
        // code here
        Set<Integer> set = new HashSet<>();
        for(int num : arr){
            int diff = target - num;
            if(set.contains(diff)){
                return true;
            }
            
            set.add(num);
        }
        
        return false;
    }
