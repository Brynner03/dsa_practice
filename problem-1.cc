#include <vector>
#include <unordered_map>

// Required Complexity
// Time: 0(N)
// Space: 0(1)

// Return Element that only repeats once
// [2,2,1] -> 1
// [5,5,4] -> 4
// [3,2,2] -> 3


// Actual Complexity
// Time: 0(N)
// Space: 0(N)
class Problem {
public:
    int nonRepeatedElement(std::vector<int>& nums) {

        std::unordered_map<int,int> map;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            map[nums[i]] += 1;
        };

        for (auto key : map) {
            if (key.second == 1) {
                return key.first;
            }
        }
        
        return -1;
    }
};

