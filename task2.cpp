#include <cstdint>
#include <iostream>

std::uint8_t mirror_bits(std::uint8_t b) {
    std::uint8_t result = 0;

    for (int i = 0; i < 8; ++i) {
        result = (result << 1) | (b & 1);
        b >>= 1;
    }

    return result;
}

int main() {
    std::cout << std::hex
              << static_cast<int>(mirror_bits(0x01)) << " "
              << static_cast<int>(mirror_bits(0xA0)) << " "
              << static_cast<int>(mirror_bits(0x3C)) << '\n';
}