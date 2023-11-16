#include <vector>
#include <iostream>

// Required Complexity
// Time: 0(N)
// Space: 0(1)

// Return Element that only repeats once
// [2,2,1] -> 1
// [5,5,4] -> 4
// [3,2,2] -> 3


// Actual Complexity
// Time: 0(N)
// Space: 0(1)
class Problem {
public:
    int nonRepeatedElement(std::vector<int>& nums) {

        int bits = 0;

        for (int num : nums) {
            bits ^= num;
        }
        
        return bits;
    }
};

