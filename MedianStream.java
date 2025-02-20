class Solution {
    PriorityQueue<Integer> max = new PriorityQueue<>(Collections.reverseOrder());
    PriorityQueue<Integer> min = new PriorityQueue<>();
    public ArrayList<Double> getMedian(int[] arr) {
        // code here
        ArrayList<Double> res = new ArrayList<>();
        for(int ele : arr){
            insertInHeap(ele);
            balance();
            res.add(getMedian());
        }
        return res;
    }
    
    double getMedian(){
        if(max.size() == min.size()){
            return (double)(max.peek() + min.peek()) / 2;
        }
        else{
            return max.peek();
        }
    }
    
    void balance(){
        if(max.size() > min.size() + 1){
            min.add(max.poll());
        }
        else if(max.size() < min.size()){
            max.add(min.poll());
        }
    }
    
    void insertInHeap(int ele){
        if(max.isEmpty() || max.peek() > ele){
            max.add(ele);
        }
        else{
            min.add(ele);
        }
    }
    
}
