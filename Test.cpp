#include "doctest.h"
#include "Board.hpp"
#include "OperationsExpert.hpp"
using namespace pandemic;
using namespace std;

TEST_CASE("simple_test")
{
    Board board;
    OperationsExpert player{board, City::Atlanta};

    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_NOTHROW(player.drive(City::Miami));
    CHECK_NOTHROW(player.drive(City::Chicago));
    // CHECK_NOTHROW(player.drive(City::Blue));

    OperationsExpert player2{board, City::Algiers};
    CHECK_NOTHROW(player.drive(City::Madrid));
    CHECK_NOTHROW(player.drive(City::Paris));
    CHECK_NOTHROW(player.drive(City::Istanbul));
    CHECK_NOTHROW(player.drive(City::Cairo));

    OperationsExpert player3{board, City::Atlanta};

    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_NOTHROW(player.drive(City::Miami));
    CHECK_NOTHROW(player.drive(City::Chicago));
    // CHECK_NOTHROW(player.drive(City::Blue));

    OperationsExpert player4{board, City::Algiers};
    CHECK_NOTHROW(player.drive(City::Madrid));
    CHECK_NOTHROW(player.drive(City::Paris));
    CHECK_NOTHROW(player.drive(City::Istanbul));
    CHECK_NOTHROW(player.drive(City::Cairo));

    OperationsExpert player5{board, City::Atlanta};

    CHECK_NOTHROW(player.drive(City::Washington));
    CHECK_NOTHROW(player.drive(City::Miami));
    CHECK_NOTHROW(player.drive(City::Chicago));
    // CHECK_NOTHROW(player.drive(City::Blue));

    OperationsExpert player6{board, City::Algiers};
    CHECK_NOTHROW(player.drive(City::Madrid));
    CHECK_NOTHROW(player.drive(City::Paris));
    CHECK_NOTHROW(player.drive(City::Istanbul));
    CHECK_NOTHROW(player.drive(City::Cairo));
}