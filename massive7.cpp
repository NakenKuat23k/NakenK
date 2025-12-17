#include <vector>
#include <unordered_set>

int countDistinct(const std::vector<int>& arr) {
    std::unordered_set<int> unique(arr.begin(), arr.end());
    return unique.size();
}