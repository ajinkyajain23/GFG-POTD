ArrayList<Integer> countDistinct(int arr[], int k) {
        // code here
        
        int ws = 0;
        ArrayList<Integer> res = new ArrayList<>();
        Map<Integer, Integer> map = new HashMap<>();
        for(int we = 0; we < arr.length; ++we){
            if(we - ws + 1 < k){
                map.put(arr[we], map.getOrDefault(arr[we], 0) + 1);
            }
            else{
                map.put(arr[we], map.getOrDefault(arr[we], 0) + 1);
                res.add(map.size());
                if(map.get(arr[ws]) != null){
                    if(map.get(arr[ws]) == 1){
                        map.remove(arr[ws]);
                    }
                    else{
                        map.put(arr[ws], map.get(arr[ws]) - 1);
                    }
                }
                ++ws;
            }
        }
        
        return res;
    }
