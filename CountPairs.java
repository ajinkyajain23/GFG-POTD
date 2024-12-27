int countPairs(int arr[], int target) {
        // Your code here
        Map<Integer, Integer> map = new HashMap<>();
        int cnt = 0;
        for(int num : arr){
            int compliment = target - num;
            if(map.containsKey(compliment)){
                cnt += map.get(compliment);
            }
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        return cnt;
    }
