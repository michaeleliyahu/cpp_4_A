#pragma once
#include "Board.hpp"
// #include "OperationsExpert.hpp"
#include <iostream>
#include <map>
#include <list>
namespace pandemic
{

    class Player
    {
    public:
        City::city_list _city;
        Board _board;
        Player(Board board, City::city_list city) : _board(board), _city(city) {}
        ~Player() {}
        Board board()
        {
            return _board;
        }
        City::city_list citylist()
        {
            return _city;
        }
        // Player()
        // {
        //     this->_city = _city;
        //     this->_board = _board;
        // }
        Player()
        {
            this->_board = board();
            this->_city = citylist();
        }
        // map<City::city_list, list<City::city_list>> read_file(std::ifstream &stram);

        Player drive(City::city_list);
        Player take_card(City::city_list _city);
        Player build();

        Player fly_direct(City::city_list);
        Player treat(City::city_list);
        Player fly_charter(City::city_list);
        Player fly_shuttle(City::city_list);
        Player is_clean();
        Player discover_cure(Color _color);
        std::string role();
        protected:
        // static void read_file(std::ifstream &stram);
    };
}