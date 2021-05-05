#include "Player.hpp"
namespace pandemic
{

    class Researcher : public Player
    {
    public:
        Researcher(Board board, City::city_list city)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}