// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'ChapterI' project.
// This program is called:'Sort'.
#ifndef CHAPTERI_SORT_HPP
#define CHAPTERI_SORT_HPP

/**
 * @title
 * Sorting algorithm
 */

#include "Random.hpp"
#include <iostream>
#include <memory>

#include <vector>
#include <bitset>

class Sort {
    friend class Random;

 public:
    Sort() : _numbers(std::make_shared<std::vector<long>>()) {}

    void bitSort(const std::shared_ptr<std::vector<long>>& obj_numbers, const long max_number);

 private:
    std::shared_ptr<std::vector<long>> _numbers;
};
#endif  // CHAPTERI_SORT_HPP
