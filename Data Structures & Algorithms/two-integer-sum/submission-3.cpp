class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>  count;
        vector<int> answer;  
        for (int i = 0; i < nums.size(); i++) {
            
            int diff = target - nums[i]; 
            if (count.find(diff) != count.end()) {
                answer.push_back(count[diff]);
                answer.push_back(i); 
                return answer; 
            }
            count[nums[i]] = i;
         }
         return answer; 
    }
};
