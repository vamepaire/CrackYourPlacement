class Solution {
public:
    
int strStr(const std::string& haystack, const std::string& needle) {
    if (needle.empty()) return 0;
    
    if (haystack.size() < needle.size()) return -1;
    
    for (size_t i = 0; i <= haystack.size() - needle.size(); ++i) {
        if (haystack.substr(i, needle.size()) == needle) {
            return i;
        }
    }
    
    return -1;
}
};
