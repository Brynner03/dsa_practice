#include <iostream>
#include <vector>
#include <cassert>
#include "big-O-2.cc" // Include the file with the function implementation

void testContainsDuplicate() {
    std::vector<int> test1 = {1, 2, 3, 4, 5}; 
    std::vector<int> test2 = {1, 2, 3, 4, 2}; 

    // Test cases
    assert(containsDuplicate(test1) == false); 
    assert(containsDuplicate(test2) == true);

    std::cout << "All test cases passed successfully!\n";
}

int main() {
    testContainsDuplicate();
    return 0;
}
