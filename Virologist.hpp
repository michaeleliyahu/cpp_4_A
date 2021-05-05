
#include "Player.hpp"
namespace pandemic
{
    class Virologist : public Player
    {
    public:
        Virologist(Board board, City::city_list city)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}