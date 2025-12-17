#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 2, 4, 5, 4, 3, 2, 1};

    // Пример для задачи 1
    std::cout << "Strictly increasing? " << isStrictlyIncreasing(arr) << "\n";

    // Пример для задачи 5
    std::cout << "Unique-once count: " << countUniqueOnce(arr) << "\n";

    // И т.д.
    return 0;
}