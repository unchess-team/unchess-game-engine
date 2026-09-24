#pragma once

#include <cstdint>

class Square {
public:
    
    using Index = std::uint16_t;

    constexpr Square() = default;

    explicit constexpr Square(Index index) : index_(index) {}

    constexpr Index index() const {
        return index_;
    }

    constexpr bool operator==(const Square& other) const {
        return index_ == other.index_;
    }

private:
    Index index_{0};
};