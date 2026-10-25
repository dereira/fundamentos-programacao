#include <iomanip>
#include <iostream>

double read_value(std::string_view prompt) {
    std::cout << prompt << "\n";
    double value{0.0};
    std::cin >> value;

    return value;
}

int main() {
    const double pricePerLiter = read_value("What's the price per liter: ");
    const double amountInEuros = read_value("What's the amount in euros available: ");

    if (pricePerLiter <= 0.0 || amountInEuros < 0.0) {
        std::cout << "Error: prices must be positive and amount cannot be negative.\n";
        return 1;
    }

    const double totalLiters = amountInEuros / pricePerLiter;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The total liters filled is: " << totalLiters << "\n";

    return 0;
}
