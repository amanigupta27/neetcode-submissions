class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> freq; 
       for (const auto &str: strs) {
        string s = str; 
        sort(s.begin(), s.end()); 
        freq[s].push_back(str);
       } 
       vector<vector<string>> final; 
       for(auto &pair: freq) {
        final.push_back(pair.second); 
       }
       return final; 
    }
};
