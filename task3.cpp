#include <iostream>

int main() {
    int m[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    int transposed[4][3];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            transposed[i][j] = m[j][i];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << '\n';
    }
}