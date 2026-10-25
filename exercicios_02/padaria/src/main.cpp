#include <iostream>
#include <string_view>

int read_value(std::string_view prompt) {
    std::cout << prompt << "\n";
    int value{0};
    std::cin >> value;

    return value;
}

int main() {
    constexpr double breadUnitPrice{0.14};
    constexpr double broaUnitPrice{1.5};

    const int amountOfBreads = read_value("What's the amount of sold breads: ");
    const int amountOfBroas = read_value("What's the amount of sold broas: ");

    const double salesTotal = (amountOfBreads * breadUnitPrice) + (amountOfBroas * broaUnitPrice);
    std::cout << "The total sales for today is: " << salesTotal << " EUR\n";

    return 0;
}
