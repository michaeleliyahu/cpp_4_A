#include "Player.hpp"
#include "Board.hpp"
#include "iostream"
#include <fstream>
#include <map>
#include <list>
#include <array>
using namespace std;
using namespace pandemic;
map<City::city_list, list<City::city_list>> city_connected;
map<City::city_list, int> city_color;
// map<City::city_list, list<City::city_list>> Player::read_file(std::ifstream &stram)
// void Player::read_file(std::ifstream &stram)
// {
//     list<string> keep_word;
//     string line;
//     string first_city;
//     string word;
//     string keep_color;
//     // size_t i = 0;
//     int counter = 0;
//     while (!getline(stram, line))
//     {
//         for (size_t i = 0; i < line.length(); i++)
//         {
//             if (line[i] != ' ')
//             {
//                 word += line[i];
//             }
//             else
//             {
//                 if (counter==0)
//                 {
//                     first_city = word;
//                 }
//                 if (counter ==1)
//                 {
//                     keep_color = word;
//                 }
//                 else
//                 {
//                 keep_word.insert(keep_word.end(), word);
//                 }
//             }
//         }
//         City::str_list x = 
//         city_connected.insert(pair<City::city_list, list<City::city_list>>())
        
//     }
// }
class myexception : public exception
{
    virtual const char *what() const throw()
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
        cout << "here";
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