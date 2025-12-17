#include <vector>
#include <unordered_set>

bool areSetsEqual(const std::vector<int>& a, const std::vector<int>& b) {
    std::unordered_set<int> setA(a.begin(), a.end());
    std::unordered_set<int> setB(b.begin(), b.end());
    return setA == setB;
}