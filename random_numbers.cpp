
#include "random_numbers.hpp"

#include <random>

std::vector<int> get_random_numbers()
{
    std::mt19937 rng{std::random_device{}()};
    std::uniform_int_distribution<> dist{1, 1000};
    std::vector<int> vec(100);
    std::generate(vec.begin(), vec.end(), [&] {
        return dist(rng);
    });

    return vec;
}