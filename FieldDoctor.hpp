
#include "Player.hpp"
// #include "OperationsExpert.hpp"
namespace pandemic
{

    class FieldDoctor : public Player
    {
    public:    
        FieldDoctor(Board board, City::city_list city)
        {
            this->_city = city;
            this->_board = _board;
        }
    };
}