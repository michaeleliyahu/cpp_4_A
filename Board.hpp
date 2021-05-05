#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <iostream>
namespace pandemic
{

    class Board
    {
    public:
        // City::city_list _city;
        int& operator[](City::city_list city);
        // int& operator[](City &temp);
        // Board(const City::city_list city) : _city(city) {}
        bool is_clean();
        friend std::ostream &operator<<(std::ostream &input, const Board &nl);
        
        void remove_cures()
        {
            
        }
        
    };

}