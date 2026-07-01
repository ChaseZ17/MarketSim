#include "../include/Listing.h"
#include <iostream>

void Listing::PrintInfo() const {
    std::cout << "Name: " << _name 
              << "\nQuantity: " << _quantity 
              << "\nPrice: " << _price << std::endl;
}