public int[] singleNum(int[] arr) {
        // Code here
        int xor = 0;
        for(int num : arr){
            xor ^= num;
        }
        
        int rightmostSetBit = (xor & (xor - 1)) ^ xor;
        int x = 0;
        int y = 0;
        for(int num : arr){
            if((num & rightmostSetBit) != 0){
                x ^= num;
            }
            else{
                y ^= num;
            }
        }
        
        int[] res = {x, y};
        Arrays.sort(res);
        return res;
    }
