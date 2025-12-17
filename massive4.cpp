#include <vector>
#include <algorithm>

std::vector<int> longestIncreasingSubsequence(const std::vector<int>& arr) {
    if (arr.empty()) return {};
    size_t n = arr.size();
    std::vector<int> dp(n, 1), parent(n, -1);
    size_t maxLength = 1, bestEnd = 0;

    for (size_t i = 1; i < n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (arr[j] < arr[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                parent[i] = j;
            }
        }
        if (dp[i] > maxLength) {
            maxLength = dp[i];
            bestEnd = i;
        }
    }

    // Восстановление подпоследовательности
    std::vector<int> lis;
    for (int i = bestEnd; i != -1; i = parent[i]) {
        lis.push_back(arr[i]);
    }
    std::reverse(lis.begin(), lis.end());
    return lis;
}