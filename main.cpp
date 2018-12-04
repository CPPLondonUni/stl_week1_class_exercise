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
    nano::sort(words);

    for (const auto& word : words) {
        std::cout << word << "\n";
    }

    // OR

    nano::copy(words, nano::ostream_iterator<std::string>{std::cout, "\n"});
}

void random_numbers()
{
    auto numbers = get_random_numbers();
    // Task: print the minimum and maximum values
    const auto minmax = nano::minmax(numbers);

    std::cout << "Min was " << minmax.min << '\n';
    std::cout << "Max was " << minmax.max << '\n';

    // Task (harder): print the median value

    // Partially sort the numbers such that the median element is in the right place
    nano::nth_element(numbers, nano::begin(numbers) + nano::size(numbers)/2);
    const auto median = numbers[numbers.size()/2];
    std::cout << "Median was " << median << '\n';
}


int main()
{
    print_words();
    random_numbers();
}