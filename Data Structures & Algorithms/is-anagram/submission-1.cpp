class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagrams must have the same length
        if (s.size() != t.size()) {
            return false;
        }

        // Create a vector for counting occurrences
        vector<int> hash(26, 0); // Use int instead of bool for counting

        // Increment for characters in s, decrement for characters in t
        for (char c : s) {
            char lower = std::tolower(c);
            int position = lower - 'a';
            hash[position]++;
        }

        for (char c : t) {
            char lower = std::tolower(c);
            int position = lower - 'a';
            hash[position]--;
        }

        // Check if all counts are zero
        for (int count : hash) {
            if (count != 0) {
                return false;
            }
        }

        return true; // All counts are zero, so s and t are anagrams
    }
};