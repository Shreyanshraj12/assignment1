#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i]++;
            return digits;
        }
    }

    
    digits.insert(digits.begin(), 1);

    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = plusOne(digits);

    std::cout << "Result: ";
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl; 

    return 0;
}
