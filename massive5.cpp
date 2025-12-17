#include <vector>
#include <unordered_map>

int countUniqueOnce(const std::vector<int>& arr) {
    std::unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;
    int count = 0;
    for (auto& [num, cnt] : freq)
        if (cnt == 1) count++;
    return count;
}