class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        
        std::vector<bool> primes(n + 1);
        for(int i = 2; i <= n; ++i){
            primes[i] = true;
        }
    
        
        for (int i = 2; i * i <= n; ++i) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primes[j] = false;
                }
            }
        }
    
        
        std::vector<int> res;
        bool found = false;
        for (int i = 2; i <= n; ++i) {
            if (primes[i] && primes[n - i]) {
                res.push_back(i);
                res.push_back(n - i);
                found = true;
                break;
            }
        }
    
        
        if (!found) {
            res.push_back(-1);
            res.push_back(-1);
        }
    
        return res;
    }
};
