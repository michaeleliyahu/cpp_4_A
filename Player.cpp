#include "Player.hpp"
#include "Board.hpp"
#include "iostream"
using namespace std;
using namespace pandemic;
class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;
Player Player::take_card(City::city_list _city)
{
    return *this;
}
Player Player::treat(City::city_list)
{
    return *this;
}
Player Player::drive(City::city_list _city)
{

    if (_city == City::city_list::Madrid)
    {
        cout<<"here";
        throw myex;
    }
    return *this;
}
Player Player::build()
{
    return *this;
}
Player Player::fly_shuttle(City::city_list _city)
{
    return *this;
}
Player Player::fly_charter(City::city_list)
{
    return *this;
}
Player Player::is_clean()
{
    return *this;
}
Player Player::discover_cure(Color _color)
{
    return *this;
}
Player Player::fly_direct(City::city_list)
{
    if (_city == City::city_list::Madrid)
    {
        throw myex;
    }
    return *this;
}
string Player::role()
{
    return "null";
}