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
    /**
     * @brief Random
     * @param quantity The random number quantity
     * @param min_num The lowest range value of the random number
     * @param max_num The highest range value of the random number
     * @return void
     */
    explicit Random(const long quantity = 0, const long min_num = 0, const long max_num = 0)
        : _num_quantity(quantity),
          _min_num(min_num),
          _max_num(max_num),
          _numbers(std::make_shared<std::vector<long>>()) {}

    /**
     * @brief Random number
     * @param quantity The random number quantity
     * @param min_num The lowest range value of the random number
     * @param max_num The highest range value of the random number
     * @return _numbers
     */
    void number(long quantity, long min_num, long max_num);

    /**
     * @brief Print the numbers
     * @return outfile
     */
    void printNumber();

 private:
    /// @param _numbers A container for storing numbers
    std::shared_ptr<std::vector<long>> _numbers;
    /// @param _num_quantity Digital total
    long                               _num_quantity;
    /// @param _min_num Numeric Value Minimum interval value
    long                               _min_num;
    /// @param _max_num Numeric Value Maximum interval value
    long                               _max_num;
};
#endif  // CHAPTERI_RANDOM_HPP
