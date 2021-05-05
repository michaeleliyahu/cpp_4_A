#include "OperationsExpert.hpp"
#include "Board.hpp"
#include "iostream"
// #include "City.hpp"
using namespace std;
using namespace pandemic;
// class myexception: public exception
// {
//   virtual const char* what() const throw()
//   {
//     return "My exception happened";
//   }
// } myex;
OperationsExpert OperationsExpert::take_card(City::city_list _city)
{
    return *this;
}
OperationsExpert OperationsExpert::treat(City::city_list)
{
    return *this;
}
OperationsExpert OperationsExpert::drive(City::city_list _city)
{

    if (_city == City::city_list::Madrid)
    {
        cout<<"here";
        // throw myex;
    }
    return *this;
}
OperationsExpert OperationsExpert::build()
{
    return *this;
}
OperationsExpert OperationsExpert::fly_shuttle(City::city_list _city)
{
    return *this;
}
OperationsExpert OperationsExpert::fly_charter(City::city_list)
{
    return *this;
}
OperationsExpert OperationsExpert::is_clean()
{
    return *this;
}
OperationsExpert OperationsExpert::discover_cure(Color::color_list)
{
    return *this;
}
OperationsExpert OperationsExpert::fly_direct(City::city_list)
{
    if (_city == City::city_list::Madrid)
    {
        // throw myex;
    }
    return *this;
}
