long ExtractNumber(String sentence) {
        // code here
        Pattern pattern = Pattern.compile("[0-9]+");
        Matcher matcher = pattern.matcher(sentence);
        List<String> nums = new ArrayList<>();
        while(matcher.find()){
            nums.add(matcher.group());
        }
        
        long max = Long.MIN_VALUE;
        for(String numStr : nums){
            if(!numStr.contains("9")){
                long num = Long.parseLong(numStr);
                max = Math.max(max, num);
            }
        }        
        return max == Long.MIN_VALUE ? -1 : max;
    }
