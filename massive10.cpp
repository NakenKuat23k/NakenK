#include <vector>
#include <unordered_set>

int countCommon(const std::vector<int>& a, const std::vector<int>& b) {
    std::unordered_set<int> setB(b.begin(), b.end());
    std::unordered_set<int> counted; // чтобы не считать дубли из a
    int count = 0;
    for (int x : a) {
        if (setB.count(x) && !counted.count(x)) {
            counted.insert(x);
            count++;
        }
    }
    return count;
}