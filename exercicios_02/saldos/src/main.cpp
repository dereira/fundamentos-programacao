#include <iomanip>
#include <iostream>

int main() {
    constexpr double discountRate{0.15};

    double salesTotal{0.0};
    std::cout << "What's the sales total in euros: ";
    std::cin >> salesTotal;

    if (salesTotal <= 0.0) {
        std::cout << "Error: sales total must be greater than zero.\n";
        return 1;
    }

    const double discountAmount = salesTotal * discountRate;
    const double totalAfterDiscount = salesTotal - discountAmount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Discount applied: " << discountAmount << " EUR\n";
    std::cout << "The total after the discount is: " << totalAfterDiscount << " EUR\n";

    return 0;
}
