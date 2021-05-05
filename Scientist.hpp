#include "Player.hpp"
namespace pandemic
{

    class Scientist : public Player
    {
    public:
        Scientist(Board board, City::city_list city, int x)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}