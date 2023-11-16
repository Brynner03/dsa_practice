#include <iostream>
#include "problem-1.cc"

int main() {
    std::vector<int> test1 = {2, 2, 1};
    std::vector<int> test2 = {5, 5, 4};
    std::vector<int> test3 = {3, 2, 2};

    Problem problem;

    std::cout << "Test 1 Result: " << problem.nonRepeatedElement(test1) << std::endl;
    std::cout << "Test 2 Result: " << problem.nonRepeatedElement(test2) << std::endl;
    std::cout << "Test 3 Result: " << problem.nonRepeatedElement(test3) << std::endl;

    return 0;
}
