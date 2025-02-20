class Solution {
priority_queue<int> maxHeap; // Max heap (stores the smaller half)
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min heap (stores the larger half)

public:
    vector<double> getMedian(vector<int>& arr) {
        vector<double> medians;
        for (int ele : arr) {
            insertInHeap(ele);
            balanceHeap();
            medians.push_back(getMedian());
        }
        return medians;
    }

    double getMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        } else {
            return maxHeap.top();
        }
    }

    void balanceHeap() {
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    void insertInHeap(int ele) {
        if (maxHeap.empty() || maxHeap.top() > ele) {
            maxHeap.push(ele);
        } else {
            minHeap.push(ele);
        }
    }
};
