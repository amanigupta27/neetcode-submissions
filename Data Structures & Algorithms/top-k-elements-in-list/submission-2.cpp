class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; 
        for (int num: nums) {
            map[num]++; 
        }

        vector<pair<int, int>> sorted; 
        for (auto const& [key, value]: map) {
            sorted.push_back({value, key}); 
        }
        sort(sorted.rbegin(), sorted.rend());

        vector<int> answer; 
        for (int i = 0; i < k; i++) {
            answer.push_back(sorted[i].second); 
        }
        return answer; 

    }
};