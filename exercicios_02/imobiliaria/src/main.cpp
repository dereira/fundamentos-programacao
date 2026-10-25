#include <iostream>
#include <string_view>

double read_value(std::string_view prompt) {
    std::cout << prompt << "\n";
    double value{0.0};
    std::cin >> value;

    return value;
}

int main() {
    const double length = read_value("What's the length in meters: ");
    const double width = read_value("What's the width in meters: ");

    const double area = length * width;
    std::cout << "The area of the plot is: " << area << " square meters.\n";

    return 0;
}
