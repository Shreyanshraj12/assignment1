#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int insertPos = 0; 
    for (int num : nums) {
        if (num != 0) {
            nums[insertPos] = num;
            insertPos++;
        }
    }


    while (insertPos < nums.size()) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    std::cout << "Result: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;  

    return 0;
}
