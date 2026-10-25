#include <iomanip>
#include <iostream>

int main() {
    constexpr int cmPerMeter{100};

    double heightInCm{0.0};
    std::cout << "What's the height in centimeters: \n";
    std::cin >> heightInCm;

    if (heightInCm <= 0.0) {
        std::cout << "Error: height must be greater than zero.\n";
        return 1;
    }

    const double heightInMeters = heightInCm / cmPerMeter;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The height in meters is: " << heightInMeters << " meters\n";

    return 0;
}
