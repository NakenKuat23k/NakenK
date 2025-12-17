#include <vector>
std::vector<int> longestPalindromicSubarray(const std::vector<int>& arr) {
    if (arr.empty()) return {};
    size_t maxStart = 0, maxLen = 1;

    auto expand = [&](int left, int right) {
        while (left >= 0 && right < static_cast<int>(arr.size()) && arr[left] == arr[right]) {
            int len = right - left + 1;
            if (len > static_cast<int>(maxLen)) {
                maxLen = len;
                maxStart = left;
            }
            --left;
            ++right;
        }
    };

    for (size_t i = 0; i < arr.size(); ++i) {
        expand(i, i);       // нечётная длина
        expand(i, i + 1);   // чётная длина
    }

    return std::vector<int>(arr.begin() + maxStart, arr.begin() + maxStart + maxLen);
}