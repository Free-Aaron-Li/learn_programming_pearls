// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'ChapterI' project.
// This program is called:'Random'.
// Code implementation
#include "Random.hpp"

void
Random::number(const long quantity, const long min_num, const long max_num) {
    _num_quantity = quantity;
    _min_num      = min_num;
    _max_num      = max_num;

    if (_num_quantity > _max_num) {
        std::cerr << "The maximum random number is less than the number of target sequences!";
        return;
    }
    std::random_device                  device;
    std::default_random_engine          engine(device());
    std::uniform_int_distribution<long> distribution(_min_num, _max_num);
    for (long i = 0; i < _num_quantity; ++i)
        _numbers->push_back(distribution(engine));
}

void
Random::printNumber() {
    std::string   file_name;
    std::ofstream outfile;

    std::cout << "print outfile name:";
    std::cin >> file_name;

    outfile.open(file_name);

    for (const auto& val : *_numbers)
        outfile << val << "\n";
    outfile.close();
}
