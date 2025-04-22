int findUnique(vector<int> &arr) {
        // code here
        int finalNum = 0;
        for(int num : arr){
            finalNum = finalNum ^ num;
        }
        return finalNum;
    }
