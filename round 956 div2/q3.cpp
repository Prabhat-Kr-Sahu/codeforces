#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>

std::pair<bool, std::unordered_map<int, std::vector<int>>> haveSameElementsWithPositions(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return {false, {}};
    }

    std::unordered_map<int, int> countMap1;
    std::unordered_map<int, int> countMap2;
    std::unordered_map<int, std::vector<int>> positions1;
    std::unordered_map<int, std::vector<int>> positions2;

    for (size_t i = 0; i < arr1.size(); ++i) {
        countMap1[arr1[i]]++;
        positions1[arr1[i]].push_back(i);
    }

    for (size_t i = 0; i < arr2.size(); ++i) {
        countMap2[arr2[i]]++;
        positions2[arr2[i]].push_back(i);
    }

    if (countMap1 != countMap2) {
        return {false, {}};
    }

    // Combining positions into a single map for the result
    std::unordered_map<int, std::vector<int>> combinedPositions;
    for (const auto& entry : positions1) {
        combinedPositions[entry.first] = entry.second;
    }

    for (const auto& entry : positions2) {
        combinedPositions[entry.first].insert(combinedPositions[entry.first].end(), entry.second.begin(), entry.second.end());
    }

    return {true, combinedPositions};
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {5, 4, 3, 2, 1};

    auto result = haveSameElementsWithPositions(arr1, arr2);

    if (result.first) {
        std::cout << "The arrays have the same elements.\n";
        std::cout << "Positions:\n";
        for (const auto& entry : result.second) {
            std::cout << "Element " << entry.first << " positions: ";
            for (const auto& pos : entry.second) {
                std::cout << pos << " ";
            }
            std::cout << "\n";
        }
    } else {
        std::cout << "The arrays do not have the same elements.\n";
    }

    return 0;
}
