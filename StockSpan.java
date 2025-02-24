public ArrayList<Integer> calculateSpan(int[] arr) {
        // write code here
        Stack<Integer> st = new Stack<>();
        Integer[] res = new Integer[arr.length];
        res[0] = 1;
        for(int i = 0; i < arr.length; ++i){
            if(st.isEmpty()){
                st.push(i);
            }
            else{
                while(!st.isEmpty() && arr[i] >= arr[st.peek()]){
                    st.pop();
                }
                
                if(st.isEmpty()){
                    res[i] = i + 1;
                }
                else{
                    res[i] = i - st.peek();
                }
                
                st.push(i);
            }
        }
        return new ArrayList<>(Arrays.asList(res));
        
    }
