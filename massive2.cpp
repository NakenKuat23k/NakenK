#include <vector>
std::vector<int> longestIncreasingSubarray(const std::std::vector<int>& arr) {
    if (arr.empty()) return {};
    size_t maxStart = 0, maxLen = 1;
    size_t curStart = 0, curLen = 1;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[i - 1]) {
            curLen++;
        } else {
            if (curLen > maxLen) {
                maxLen = curLen;
                maxStart = curStart;
            }
            curStart = i;
            curLen = 1;
        }
    }
    if (curLen > maxLen) {
        maxLen = curLen;
        maxStart = curStart;
    }
    return std::vector<int>(arr.begin() + maxStart, arr.begin() + maxStart + maxLen);
}