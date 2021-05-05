#include "Player.hpp"
namespace pandemic
{

    class Medic : public Player
    {
    public:
        Medic(Board board, City::city_list city)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}