class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        array<int, 26> arr1{};
        array<int, 26> arr2{};
        int l=0;
        int r=s1.size();

        if(s2.size()<s1.size()) return false;

        for(int i=0;i<s1.size();i++)
        {
           arr1[s1[i]-'a']++;
           arr2[s2[i]-'a']++;
        }

        while(r<s2.size())
        {
            if (arr1==arr2) return true;

            arr2[s2[r]-'a']++;
            arr2[s2[l]-'a']--;
            r++;            
            l++;
            
        }

        return arr1==arr2;
    }
};
