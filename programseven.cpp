#include <iostream>
#include <cmath>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 0;
    int r = 0;

    std::cout << "Input your value for N: " << std::endl;
    std::cin >> n;
    std::cout << "Input your value for R: " << std::endl;
    std::cin >> r;

    int permutation = factorial(n) / factorial(n - r);
    int combination = factorial(n) / (factorial(r) * factorial(n - r));
    int permutationWithRepeats = std::pow(n, r);
    int combinationWithRepeats = factorial(n + r - 1) / (factorial(r) * factorial(n - 1));

    std::cout << "Permutation: " << permutation << std::endl;
    std::cout << "Combination: " << combination << std::endl;
    std::cout << "Permutation With Repeats: " << permutationWithRepeats << std::endl;
    std::cout << "Combination With Repeats: " << combinationWithRepeats << std::endl;

    return 0;
}

