#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int i = 0;
    while (i < 20) {
        nums.push_back(i);
        i++;
    }
    for (auto i = nums.begin(); i != nums.end(); i++) {
        std::cout<< *i << std::endl;
    }
    return 0;
}