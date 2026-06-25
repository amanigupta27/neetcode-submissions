class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> freq; 
       for (const auto& num: nums) {
        freq[num]++;
       } 

       vector<pair<int, int>> toSort;
       for (auto &hehe: freq) {
        toSort.push_back({hehe.second, hehe.first});
       }
       sort(toSort.rbegin(), toSort.rend());

       vector<int> final; 
       for (int i = 0; i < k; i++) {
        final.push_back(toSort[i].second);
       }
       return final;
       


    }
};
