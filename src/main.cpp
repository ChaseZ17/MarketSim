#include <iostream>
#include <string>
#include <map>

#include "../include/Listing.h"
#include "../include/Market.h"

int main() {
    Market market;

    market.addListing(Listing("Apple", 100, 0.5));
    market.displayListings();

    return 0;
}