class Solution {
  public:
    
    string findOrder(vector<string>& words) {
        // Step 1: Initialize inDegree and graph
        unordered_map<char, int> inDegree;
        unordered_map<char, unordered_set<char>> graph;

        // Initialize with all unique characters
        for (const string& word : words) {
            for (char c : word) {
                if (inDegree.find(c) == inDegree.end()) {
                    inDegree[c] = 0;
                }
                if (graph.find(c) == graph.end()) {
                    graph[c] = unordered_set<char>();
                }
            }
        }

        // Step 2: Build the graph by comparing adjacent words
        for (int i = 0; i < words.size() - 1; ++i) {
            string word1 = words[i];
            string word2 = words[i + 1];

            // Invalid case: prefix rule violated
            if (word1.length() > word2.length() && word1.substr(0, word2.length()) == word2) {
                return "";
            }

            int len = min(word1.length(), word2.length());
            for (int j = 0; j < len; ++j) {
                char c1 = word1[j];
                char c2 = word2[j];
                if (c1 != c2) {
                    if (graph[c1].find(c2) == graph[c1].end()) {
                        graph[c1].insert(c2);
                        inDegree[c2]++;
                    }
                    break; // Only first difference matters
                }
            }
        }

        // Step 3: Topological Sort using Kahn's Algorithm
        queue<char> q;
        for (const auto& entry : inDegree) {
            if (entry.second == 0) {
                q.push(entry.first);
            }
        }

        string result;
        while (!q.empty()) {
            char curr = q.front();
            q.pop();
            result.push_back(curr);

            for (char neighbor : graph[curr]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        // Step 4: Check for cycle (if all nodes were processed)
        if (result.length() != inDegree.size()) {
            return "";
        }

        return result;
    }
};
