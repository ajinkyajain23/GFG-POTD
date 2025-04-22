public int findUnique(int[] arr) {
        // code here
        int res = 0;
        for(int num : arr){
            res = res ^ num;
        }
        return res;
    }
