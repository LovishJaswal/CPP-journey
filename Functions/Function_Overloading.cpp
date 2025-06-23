#include <iostream>
#include <algorithm>  // for std::max

// Function Prototypes
int findmax(int a, int b);
double findmax(double a, double b);
int findmax(int a, int b, int c);

// Function Definitions
int findmax(int a, int b) {
    return std::max(a, b);
}

double findmax(double a, double b) {
    return std::max(a, b);
}

int findmax(int a, int b, int c) {
    return std::max(a, std::max(b, c));
}

// Main Function
int main() {
    std::cout << "Max of 4 and 6: " << findmax(4, 6) << std::endl;
    std::cout << "Max of 2.5 and 3.6: " << findmax(2.5, 3.6) << std::endl;
    std::cout << "Max of 2, 5 and 6: " << findmax(2, 5, 6) << std::endl;
}
