#include <iomanip>
#include <iostream>
#include <string_view>

int read_value(std::string_view prompt) {
    std::cout << prompt;
    int value{0};
    std::cin >> value;

    if (value < 0) {
        std::cout << "Error: quantities cannot be negative.\n";
        return 0;
    }

    return value;
}

int main() {
    constexpr double tshirtPrice{10.00};
    constexpr double jeansPrice{45.00};
    constexpr double beltPrice{15.00};
    constexpr double discountRate{0.10};

    const int tshirtAmount = read_value("What's the amount of t-shirts: ");
    const int jeansAmount = read_value("What's the amount of jeans: ");
    const int beltsAmount = read_value("What's the amount of belts: ");

    const double totalBeforeDiscount =
        (tshirtAmount * tshirtPrice) + (jeansAmount * jeansPrice) + (beltsAmount * beltPrice);
    const double discountValue = totalBeforeDiscount * discountRate;
    const double totalAfterDiscount = totalBeforeDiscount - discountValue;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The total before discount is: " << totalBeforeDiscount << " EUR\n";
    std::cout << "The discount value is: " << discountValue << " EUR\n";
    std::cout << "The final amount to pay is: " << totalAfterDiscount << " EUR\n";

    return 0;
}
