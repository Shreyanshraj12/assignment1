#include<bits/stdc++.h>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> complement_map;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (complement_map.count(complement) > 0) {
            return {complement_map[complement], i};
        }
        complement_map[nums[i]] = i;
    }

    return {};  
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl; 

    return 0;
}
