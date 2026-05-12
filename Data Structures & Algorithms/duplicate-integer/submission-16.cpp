class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int n : nums)
        {
            hash[n] = 0;
        }
        
        for(int n : nums)
        {
            hash[n]++;
        }
        for(int n : nums)
        {
            if(hash[n] >= 2)
            {
                return true;
            }
        }
        return false;
    }
};
