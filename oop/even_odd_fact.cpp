/* Practical-2.	Implement a class to design following 1. To find given number is even or odd 2. Factorial of given number.*/

#include <iostream>
class NumberProcessor {
public:
    // Function to check if a number is even
    static bool isEven(int num) {
        return num % 2 == 0;
    }

    // Function to check if a number is odd
    static bool isOdd(int num) {
        return num % 2 != 0;
    }

    // Function to calculate factorial of a number
    static int factorial(int num) {
        if (num < 0) {
            std::cerr << "Factorial is not defined for negative numbers." << std::endl;
            return -1;  // Return an error value
        } else if (num == 0 || num == 1) {
            return 1;
        } else {
            int result = 1;
            for (int i = 2; i <= num; ++i) {
                result *= i;
            }
            return result;
        }
    }
};

int main() {
    int num;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is even or odd
    if (NumberProcessor::isEven(num)) {
        std::cout << num << " is even." << std::endl;
    } else if (NumberProcessor::isOdd(num)) {
        std::cout << num << " is odd." << std::endl;
    }

    // Calculate and display factorial
    int factResult = NumberProcessor::factorial(num);
    if (factResult != -1) {
        std::cout << "Factorial of " << num << " is: " << factResult << std::endl;
    }

    return 0;
}

