#include <iostream>
#include <string>

std::string caesar(std::string text, int shift) {
    for (char& c : text) {
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + shift) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + shift) % 26;
        }
    }
    return text;
}

int main() {
    std::cout << caesar("Hello, World!", 3) << '\n';
}