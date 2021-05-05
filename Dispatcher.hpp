#include "Player.hpp"
namespace pandemic
{

    class Dispatcher : public Player
    {
    public:
        Dispatcher(Board board, City::city_list city)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}