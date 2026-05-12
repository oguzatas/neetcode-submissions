class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> map;

        for (auto s : strs) {
            vector<int> count(26, 0);

            // Harfleri sayıyoruz
            for (auto c : s) {
                count[c - 'a']++;  // 'a' harfini 0 kabul ediyoruz, böylece indeksleme doğru olur.
            }

            // Sayıları birleştirerek anahtar (key) oluşturuyoruz
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }

            // Aynı anahtara sahip kelimeleri gruplayıp haritaya ekliyoruz
            map[key].push_back(s);
        }

        // Sonuçları bir vektör olarak döndürmek için hazırlıyoruz
        vector<vector<string>> result;
        for (auto mem : map) {
            result.push_back(mem.second);  // 'second' kullanmalısınız
        }

        return result;
    }
};
