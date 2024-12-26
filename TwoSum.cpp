bool twoSum(vector<int>& arr, int target) {
        // code here
        std::unordered_set<int> seenNumbers;

        for (int num : arr) {
            int complement = target - num;
            if (seenNumbers.find(complement) != seenNumbers.end()) {
                return true;
            }
    
            seenNumbers.insert(num);
        }
    
        return false;
    }
