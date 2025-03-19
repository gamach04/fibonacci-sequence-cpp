#include <iostream>
#include <vector>

std::vector<int> fib(int n) {
    std::vector<int> sequence;
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        sequence.push_back(a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    return sequence;
}

int main() {
    int n = 10;
    std::vector<int> sequence = fib(n);
    for (int num : sequence) {
        std::cout << num << std::endl;
    }
    return 0;
}