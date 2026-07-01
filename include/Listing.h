#pragma once
#include <string>

class Listing
{
    public:
        Listing(std::string n, int quantity, double price)
            : _name(n), _quantity(quantity), _price(price) {};
        ~Listing() = default;

        //Setter methods
        void SetName(const std::string& name) { _name = name; }
        void SetQuantity(int quantity) { _quantity = quantity; }
        void SetPrice(double price) { _price = price; }

        // Accessor methods
        std::string GetName() const { return _name; }
        int GetQuantity() const { return _quantity; }
        double GetPrice() const { return _price; }

        void PrintInfo() const;

    private:
        std::string _name;
        int _quantity;
        double _price;
};