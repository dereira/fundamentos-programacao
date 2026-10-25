#include <iostream>

int main() {
    constexpr int secondsPerMinute{60};

    int minutes{0};
    std::cout << "What's the duration in minutes: \n";
    std::cin >> minutes;

    if (minutes < 0) {
        std::cout << "Error: duration cannot be negative.\n";
        return 1;
    }

    const int seconds = minutes * secondsPerMinute;
    std::cout << "The duration in seconds is:  " << seconds << " seconds\n";

    return 0;
}
