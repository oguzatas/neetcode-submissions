class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int> hash;
        int l=0;
        int maxf=0;

        for(int r=0; r<s.size();r++)
        {
            maxf= max(maxf, ++hash[s[r]]);

            if((r-l + 1) - maxf > k )
            {
                hash[s[l]]--;
                l++;
            }
        } 
        return s.size()-l;       

    }
};
