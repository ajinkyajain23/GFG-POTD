long long ExtractNumber(string sentence) {

        // code here
            regex regex("[0-9]+");
            smatch match;
            string s = sentence;
            vector<string> numbers;
    
            while (regex_search(s, match, regex)) {
                numbers.push_back(match.str());
                s = match.suffix().str();
            }
    
            
            long long max = LLONG_MIN;
    
            for (const auto& num : numbers) {
                if (num.find('9') == string::npos) {
                    long long numValue = stoll(num);
                    if (max < numValue) {
            
                        max = numValue;
                    }
                }
            }
    
            return max == LLONG_MIN ? -1 : max;
        }
