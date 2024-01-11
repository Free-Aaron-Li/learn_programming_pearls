// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'PartI' project.
// This program is called:'main'.
// If there are no special instructions, this file is used as an exercise and test file.
#include "Random.hpp"

int
main() {
    Random random;
    random.number(10000000, 10000000, 99999999);
    random.printNumber();
}