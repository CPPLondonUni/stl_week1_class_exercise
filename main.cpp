#include <iostream>
#include <string>
#include <vector>

#include "nanorange.hpp"
#include "random_numbers.hpp"
#include "words.hpp"

void print_words()
{
    auto words = get_words();
    // Task: print these an alphabetical order
}

void random_numbers()
{
    auto numbers = get_random_numbers();
    // Task: print the minimum and maximum values

    // Task (harder): print the median value
}


int main()
{
    print_words();
    random_numbers();
}