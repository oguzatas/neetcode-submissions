class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        // Sayıları sayma
        for(auto& num : nums) {
            map[num]++;
        }

        // Frekansları saklamak için diziyi hazırlıyoruz
        vector<vector<int>> freq(nums.size() + 1);

        // Frekansa göre sayıları grupla
        for(const auto& input : map) {
            freq[input.second].push_back(input.first);
        }

        vector<int> sol;
        // Frekansları yüksekten düşüğe doğru kontrol et
        for(int i = freq.size() - 1; i > 0; i--) {  // Burada freq.size() - 1 kullanılmalı
            for(int x : freq[i]) {
                sol.push_back(x);
                if(sol.size() == k) {
                    return sol;
                }
            }
        }
        return sol;
    }
};