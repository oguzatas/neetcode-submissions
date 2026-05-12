class Solution {
public:
    bool isPalindrome(std::string s) {
       
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !std::isalnum(c);
        }), s.end());
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        int a = 0;
        int b = s.length() - 1; 

      
        while (a < b) {
            if (s[a] != s[b]) {
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};