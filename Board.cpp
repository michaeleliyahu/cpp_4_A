#include "Board.hpp"
#include <map>
// #include <string.h>
// #include <string>
using namespace std;
using namespace pandemic;
map<string, int> disease_list;

bool Board::is_clean()
{
    return false;
}
int& Board::operator[](City::city_list city)
{
    // int *x;
    disease_list.insert(pair<string, int>("Kinshasa", 0));
    return disease_list["Kinshasa"];
    // return x;
}
ostream &pandemic::operator<<(ostream &input, const Board &nl)
{
    input << "input";
    return input;
}