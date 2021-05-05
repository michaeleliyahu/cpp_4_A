#pragma once
#include "Board.hpp"
#include "Player.hpp"
namespace pandemic
{

    class OperationsExpert : public Player
    {
    public:
        City::city_list _city;
        Board _board;
        OperationsExpert(Board board, City::city_list city) : _board(board), _city(city) {}
        // Board board()
        // {
        //     return _board;
        // }
        // City::city_list citylist()
        // {
        //     return _city;
        // }
        // OperationsExpert(Board board, City::city_list city, int x)
        // {
        //     this->_city = city;
        //     this->_board = _board;
        // }
        // OperationsExpert()
        // {
        //     this->_board = board();
        //     this->_city = citylist();
        // }
        ~OperationsExpert() {}

        virtual OperationsExpert take_card(City::city_list _city);
        OperationsExpert build();
        OperationsExpert drive(City::city_list);

        OperationsExpert fly_direct(City::city_list);
        OperationsExpert treat(City::city_list);
        OperationsExpert fly_charter(City::city_list);
        OperationsExpert fly_shuttle(City::city_list);
        OperationsExpert is_clean();
        OperationsExpert discover_cure(Color::color_list _color);
    };
}