#include "set_visualizer.hpp"
#include "terminal.hpp"
#include <iostream>
#include <optional>

namespace setvis {

using namespace asciid;

std::uint64_t SetVisualizer::calcIntersection(std::uint64_t a, std::uint64_t b) {
    return a & b;
}

std::uint64_t SetVisualizer::calcUnion(std::uint64_t a, std::uint64_t b) {
    return a | b;
}

std::uint64_t SetVisualizer::calcDifference(std::uint64_t a, std::uint64_t b) {
    return a & ~b;
}

std::uint64_t SetVisualizer::calcComplement(std::uint64_t a) {
    return ~a;
    
}

void SetVisualizer::showSet(std::uint64_t a, std::optional<std::uint64_t> b,std::uint64_t result)
{
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            int bit = row * 8 + col;
            bool inA = (a >> bit) & 1ULL;
            bool inB = b.has_value() ? ((b.value() >> bit) & 1ULL) : false;
            bool inRes = (result >> bit) & 1ULL;

            if (inRes) {
                Terminal::setTextColor(Color::Red);
                std::cout << "*";
                Terminal::resetTextColor();
            } else if (inA || inB) {
                Terminal::setTextColor(Color::White);
                std::cout << "*";
                Terminal::resetTextColor();
            } else {
                std::cout << ".";
            }
        }
        std::cout << "\n";
    }
}

void SetVisualizer::showIntersection(std::uint64_t a, std::uint64_t b) {
    std::cout << "intersection(a,b):\n";
    showSet(a, std::make_optional(b), calcIntersection(a, b));
}

void SetVisualizer::showUnion(std::uint64_t a, std::uint64_t b) {
    std::cout << "union(a,b):\n";
    showSet(a, std::make_optional(b), calcUnion(a, b));
}

void SetVisualizer::showDifference(std::uint64_t a, std::uint64_t b) {
    std::cout << "difference(a,b):\n";
    showSet(a, std::make_optional(b), calcDifference(a, b));
}

void SetVisualizer::showComplement(std::uint64_t a) {
    std::cout << "complement(a):\n";
    showSet(a, std::nullopt, calcComplement(a));
}

} // namespace setvis
