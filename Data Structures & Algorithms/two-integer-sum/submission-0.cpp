#include <iostream>
#include <vector>

// Finds two distinct values whose sum equals the target.
// Returns their indices, or an empty vector if no pair exists.
std::vector<int> twoIntegerSum(const std::vector<int>& numbers, int target) {
    for (int first = 0; first < static_cast<int>(numbers.size()); ++first) {
        for (int second = first + 1; second < static_cast<int>(numbers.size()); ++second) {
            if (numbers[first] + numbers[second] == target) {
                return {first, second};
            }
        }
    }

    return {};
}

int main() {
    const std::vector<int> numbers{2, 7, 11, 15};
    const int target = 9;

    const std::vector<int> result = twoIntegerSum(numbers, target);

    if (result.empty()) {
        std::cout << "No pair found.\n";
        return 0;
    }

    std::cout << "Indices: " << result[0] << ", " << result[1] << '\n';
    std::cout << "Values: " << numbers[result[0]] << " + "
              << numbers[result[1]] << " = " << target << '\n';
    return 0;
}
