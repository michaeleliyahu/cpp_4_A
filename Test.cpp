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

    OperationsExpert player3{board, City::Baghdad};

    CHECK_NOTHROW(player.drive(City::Tehran));
    CHECK_NOTHROW(player.drive(City::Istanbul));
    CHECK_NOTHROW(player.drive(City::Cairo));
    CHECK_NOTHROW(player.drive(City::Riyadh));
    CHECK_NOTHROW(player.drive(City::Karachi));

    OperationsExpert player4{board, City::Bangkok};
    CHECK_NOTHROW(player.drive(City::Kolkata));
    CHECK_NOTHROW(player.drive(City::Chennai));
    CHECK_NOTHROW(player.drive(City::Jakarta));
    CHECK_NOTHROW(player.drive(City::HoChiMinhCity));
    CHECK_NOTHROW(player.drive(City::HongKong));

    OperationsExpert player5{board, City::Beijing};

    CHECK_NOTHROW(player.drive(City::Shanghai));
    CHECK_NOTHROW(player.drive(City::Seoul));

    OperationsExpert player6{board, City::Bogota};
    CHECK_NOTHROW(player.drive(City::MexicoCity));
    CHECK_NOTHROW(player.drive(City::Lima));
    CHECK_NOTHROW(player.drive(City::Miami));
    CHECK_NOTHROW(player.drive(City::SaoPaulo));
}