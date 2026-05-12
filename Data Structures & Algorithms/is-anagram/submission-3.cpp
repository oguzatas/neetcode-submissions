class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        unordered_map<char,int> map2;

        for(char c : s)
        {
            map[c]++;            
        }
        for(char c: t)
        {
            map2[c]++;
        }
        if(map==map2) return true;

        else return false;
        
    }
};
