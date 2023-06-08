#include <iostream>
#include <list>
#include <algorithm>

// Custom comparison function for sorting in alphabetical order
bool compareAlphabetically(const std::string& a, const std::string& b) {
    return a < b;
}

int main() {
    std::list<std::string> names = { "John", "Alice", "Bob", "David", "Catherine" };

    names.sort(compareAlphabetically);  // Sort the list using the custom comparison function

    // Print the sorted list
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
