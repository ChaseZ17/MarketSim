#include "../include/Market.h"
#include "../include/Listing.h"

#include <iostream>

void Market::displayListings() const {
    for (const Listing& listing : _listings) {
        std::cout << "Name: " << listing.GetName() 
                  << "\nQuantity: " << listing.GetQuantity() 
                  << "\nPrice: " << listing.GetPrice() << std::endl;
    }
}
