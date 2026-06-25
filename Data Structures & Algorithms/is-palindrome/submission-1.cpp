class Solution {
public:
    bool isPalindrome(string s) {
       int left = 0; 
       int right = s.length() - 1; 

       while (left < right) {
            char l = tolower(s[left]);
            char r = tolower(s[right]);

            if (!isalnum(l)) {
                left++; 
                continue; 
            }

            if (!isalnum(r)) {
                right--; 
                continue; 
            }

            if(l != r) {
                return false;
            }

            right--; 
            left++; 

       }
       return true; 
    }
};
