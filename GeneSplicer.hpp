#include "Player.hpp"
namespace pandemic
{

    class GeneSplicer : public Player
    {
    public:
        GeneSplicer(Board board, City::city_list city)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}