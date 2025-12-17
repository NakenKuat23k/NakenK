#include <vector>
#include <unordered_set>

bool isSet(const std::vector<int>& arr) {
    std::unordered_set<int> s(arr.begin(), arr.end());
    return s.size() == arr.size();
}