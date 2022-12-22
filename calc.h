#include <iostream>
#include <cassert>

long long sum(long long x, long long y) {
    return x + y;
}

void test_sum() {
    assert(sum(2, 4) == 6);
    assert(sum(-1, 3) == 2);
    assert(sum(27702, 311) == 28013);
    std::cout << "Tests passed sum" << '\n';
}

long long multiply(long long x, long long y) {
    return x * y;
}

void test_multiply() {
    assert(multiply(3, 1) == 3);
    assert(multiply(-1, 3) == -3);
    assert(multiply(212, 612) == 129744);
    std::cout << "Tests passed multiply" << '\n';
}

long long minus(long long x, long long y) {
    return x - y;
}

void test_minus() {
    assert(minus(3, 1) == 2);
    assert(minus(4, 3) == 1);
    assert(minus(0, -2) == 2);
    std::cout << "Tests passed minus" << '\n';
}

float division(float x, float y) {
    return x / y;
}

void test_division() {
    assert(std::to_string(division(4.0, 5.0)) == std::to_string((4.0 / 5.0)));
    assert(division(1.0, 2.0) == 1.0 / 2.0);
    assert(std::to_string(division(17.0, 3.0)) == std::to_string(17.0 / 3.0));
    std::cout << "Tests passed division" << '\n';
}
