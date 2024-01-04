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

#include <iostream>
#include <vector>
#include <memory>

class Sort {
 public:
    void bitSort();

 private:
    std::shared_ptr<std::vector<long>> _numbers;
};
#endif  // CHAPTERI_SORT_HPP
