#include <iostream>

class Stock {
    private:
        std::string d_ticker;
        double d_price;
    public:
        Stock(std::string ticker, double price);
};

inline
Stock::Stock(std::string ticker, double price) : d_ticker(ticker), d_price(price) 
{
    std::cout << "constructor called!" << std::endl; 
}
