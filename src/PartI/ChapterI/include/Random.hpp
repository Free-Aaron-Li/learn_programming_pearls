// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'ChapterI' project.
// This program is called:'Random'.


#ifndef CHAPTERI_RANDOM_HPP
#define CHAPTERI_RANDOM_HPP

/**
 * @title
 * Random value generation
 */

#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <fstream>
#include <memory>

class Random {
 public:
    explicit Random(const long quantity = 0, const long min_num = 0, const long max_num = 0)
        : _num_quantity(quantity),
          _min_num(min_num),
          _max_num(max_num),
          _numbers(std::make_shared<std::vector<long>>()) {}

    /**
     * @brief Random number
     * @param quantity the random number quantity
     * @param min_num the lowest range value of the random number
     * @param max_num the highest range value of the random number
     * @return void
     */
    void number(long quantity, long min_num, long max_num);

    void printNumber();

 private:
    std::shared_ptr<std::vector<long>> _numbers;
    long                               _num_quantity;
    long                               _min_num;
    long                               _max_num;
};
#endif  // CHAPTERI_RANDOM_HPP
