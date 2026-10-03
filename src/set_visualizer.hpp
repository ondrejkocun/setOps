#pragma once
#include <cstdint>
#include <optional>

namespace setvis {

class SetVisualizer {
public:
    static std::uint64_t calcIntersection(std::uint64_t a, std::uint64_t b);
    static std::uint64_t calcUnion(std::uint64_t a, std::uint64_t b);
    static std::uint64_t calcDifference(std::uint64_t a, std::uint64_t b);
    static std::uint64_t calcComplement(std::uint64_t a);

    static void showIntersection(std::uint64_t a, std::uint64_t b);
    static void showUnion(std::uint64_t a, std::uint64_t b);
    static void showDifference(std::uint64_t a, std::uint64_t b);
    static void showComplement(std::uint64_t a);

private:
    static void showSet(std::uint64_t a, std::optional<std::uint64_t> b, std::uint64_t result);
};

} // namespace setvis
