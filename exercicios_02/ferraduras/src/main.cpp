#include <iostream>

int main() {
    constexpr int shoesPerHorse{4};

    int amountOfHorses{0};
    std::cout << "What's the amount of horses: \n";
    std::cin >> amountOfHorses;

    if (amountOfHorses < 0) {
        std::cout << "Error: horse count cannot be negative.\n";
        return 1;
    }

    const int horseshoeTotal = amountOfHorses * shoesPerHorse;
    std::cout << "The amount of horseshoes needed is: " << horseshoeTotal << "\n";

    return 0;
}
