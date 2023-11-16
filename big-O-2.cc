#include <iostream>
#include <vector>
#include <set>

// Return true if array has a duplicate
// Return false if not

bool containsDuplicate(std::vector<int>& nums) {
    std::set<int> set;

    for (int num : nums) {
        if (set.find(num) != set.end()) {
            return true;
        }
        set.insert(num);
    }
    return false;
};