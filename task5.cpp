#include <iostream>

int max_of(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int data[] = {12, 7, 42, 5, 18, 30};

    int n = sizeof(data) / sizeof(data[0]);

    std::cout << n << " " << max_of(data, n) << '\n';
}