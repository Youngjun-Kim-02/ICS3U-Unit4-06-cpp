// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program using nested loop

#include <iostream>

int main() {
    // this function using nested loop
    int counter1;
    int counter2;
    int counter3;
	for (counter1 = 0; counter1 < 256; counter1++) {
	    for (counter2 = 0; counter2 < 256; counter2++) {
	        for (counter3 = 0; counter3 < 256; counter3++) {
	           std::cout << "RGB" << counter1 << counter2 << counter3 
	           << std::endl;
	        }
	    }
	}
}
