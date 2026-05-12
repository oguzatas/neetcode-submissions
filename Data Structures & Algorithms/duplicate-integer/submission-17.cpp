class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> hash;
        for (int n : nums) {
            if (hash[n])  
                return true;
            hash[n] = true;
        }
        return false;
    }
};
