#pragma once
#include <vector>

#include "Listing.h"

class Market 
{
    public:
        Market() = default;
        ~Market() = default;

        void displayListings() const;
        void addListing(const Listing& listing) { _listings.push_back(listing); } 

    private:
        std::vector<Listing> _listings;
};
