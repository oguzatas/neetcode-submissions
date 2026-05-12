class Solution {
public:
    std::string encode(const std::vector<std::string>& strs) {
        std::string encoded;
        for (const std::string& s : strs) {
            encoded += std::to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    std::vector<std::string> decode(const std::string& s) {
        std::vector<std::string> decoded;
        size_t i = 0;
        while (i < s.size()) {
            size_t j = i;
            while (s[j] != '#' && j < s.size()) {
                j++;
            }
            int len = std::stoi(s.substr(i, j - i));
            j++; 
            decoded.push_back(s.substr(j, len));
            i = j + len;
        }
        return decoded;
    }
};