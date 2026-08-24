class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest=1;
        int l=0;
        int r=0;
        unordered_set<char> seen;
        
        if(s.empty()) return 0;

        while(r<s.size())
        {
            while(seen.contains(s[r]))
            {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            r++;
            longest = max(longest,r-l);
            

        }

        return longest;
    }
};
