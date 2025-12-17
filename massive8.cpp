#include <vector>
#include <algorithm>

std::vector<int> best4Athletes(std::vector<int> times) {
    if (times.size() < 4) return times; // или бросить исключение
    std::sort(times.begin(), times.end());
    return std::vector<int>(times.begin(), times.begin() + 4);
}