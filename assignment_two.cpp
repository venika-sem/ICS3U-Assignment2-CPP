// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program calculates the perimeter of a parallelogram

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the perimeter of a parallelogram
    int base_of_parallelogram;
    int side_of_parallelogram;
    int perimeter_of_parallelogram;

    // input
    std::cout << "Enter base (mm): ";
    std::cin >> base_of_parallelogram;

    std::cout << "Enter side (mm): ";
    std::cin >> side_of_parallelogram;

    // process
    perimeter_of_parallelogram = 2 *
    (base_of_parallelogram + side_of_parallelogram);

    // output
    std::cout << "" << std::endl;
    std::cout << "The perimeter of the parallelogram is "
              << perimeter_of_parallelogram;
    std::cout << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
