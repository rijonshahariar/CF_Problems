#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if a number is palindrome
bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

// Function to make a number palindrome
int makePalindrome(int n) {
    // If the number is already palindrome, no need to make changes
    if (isPalindrome(n)) {
        return n;
    }

    int original = n;
    std::vector<int> digits;

    // Extract the digits of the number
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    // Reverse the extracted digits and append them to the original number
    for (int digit : digits) {
        original = original * 10 + digit;
    }

    return original;
}

int main() {
    int number;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Make the number palindrome
    int palindrome = makePalindrome(number);

    // Output the palindrome
    std::cout << "Palindrome: " << palindrome << std::endl;

    return 0;
}
