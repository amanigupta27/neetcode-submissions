class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> finalList; 
       for(string str: strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end()); 
            finalList[sorted].push_back(str);        
       }
       vector<vector<string>> result;
       for (auto const& [key, val] : finalList) {
           result.push_back(val);
       }
       return result; 
    }
};
