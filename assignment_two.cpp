// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program calculates the perimeter of a parallelogram

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the perimeter of a parallelogram
    int baseOfParallelogram;
    int sideOfParallelogram;
    int perimeterOfParallelogram;

    // input
    std::cout << "Enter base (mm): ";
    std::cin >> baseOfParallelogram;

    std::cout << "Enter side (mm): ";
    std::cin >> sideOfParallelogram;

    // process
    perimeterOfParallelogram = 2 *
    (baseOfParallelogram + sideOfParallelogram);

    // output
    std::cout << "" << std::endl;
    std::cout << "The perimeter of the parallelogram is "
              << perimeterOfParallelogram;
    std::cout << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
