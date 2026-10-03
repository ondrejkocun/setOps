#include "set_visualizer.hpp"
#include <iostream>

using namespace setvis;

int main() {
    const std::uint64_t a = 0x0F0F0F0F0F0F0F0F;
    const std::uint64_t b = 0xFFFFFFFF00000000;

    SetVisualizer vis;

    vis.showIntersection(a, b);
    std::cout << "\n";
    vis.showUnion(a, b);
    std::cout << "\n";
    vis.showDifference(a, b);
    std::cout << "\n";
    vis.showComplement(a);

    return 0;
}
