#include <vector>
#include <unordered_map>

int mostFrequentElement(const std::vector<int>& arr) {
    if (arr.empty()) throw std::invalid_argument("Array is empty");
    std::unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    int best = arr[0], maxCount = 0;
    for (auto& [num, cnt] : freq) {
        if (cnt > maxCount) {
            maxCount = cnt;
            best = num;
        }
    }
    return best;
}