int findMin(vector<int>& arr) {
        // complete the function here
        int left = 0, right = arr.size() - 1;

        // Handle the case where the array is not rotated.
        if (arr[left] < arr[right]) {
            return arr[left];
        }
    
        while (left < right) {
            int mid = left + (right - left) / 2;
    
            // If mid element is greater than the rightmost element,
            // the minimum is in the right half.
            if (arr[mid] > arr[right]) {
                left = mid + 1;
            } else { // Otherwise, the minimum is in the left half.
                right = mid;
            }
        }
    
        // At the end of the loop, left == right, which points to the minimum element.
        return arr[left];
    }
