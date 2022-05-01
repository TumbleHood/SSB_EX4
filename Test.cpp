#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Contessa.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Ambassador.hpp"
#include <stdexcept>

using namespace std;
using namespace coup;

TEST_CASE("Good Input"){
    SUBCASE("2 Players"){
        Game game2{};
        Duke duke1{game2, "duke1"};
        Duke duke2{game2, "duke2"};

        CHECK_NOTHROW(duke1.income());
        CHECK_NOTHROW(duke2.income());
    }
    SUBCASE("3 Players"){
        Game game3{};
        Duke duke1{game3, "duke1"};
        Duke duke2{game3, "duke2"};
        Duke duke3{game3, "duke3"};

        CHECK_NOTHROW(duke1.income());
        CHECK_NOTHROW(duke2.income());
        CHECK_NOTHROW(duke3.income());
    }
    SUBCASE("4 Players"){
        Game game4{};
        Duke duke1{game4, "duke1"};
        Duke duke2{game4, "duke2"};
        Duke duke3{game4, "duke3"};
        Duke duke4{game4, "duke4"};

        CHECK_NOTHROW(duke1.income());
        CHECK_NOTHROW(duke2.income());
        CHECK_NOTHROW(duke3.income());
        CHECK_NOTHROW(duke4.income());
    }
    SUBCASE("5 Players"){
        Game game5{};
        Duke duke1{game5, "duke1"};
        Duke duke2{game5, "duke2"};
        Duke duke3{game5, "duke3"};
        Duke duke4{game5, "duke4"};
        Duke duke5{game5, "duke5"};

        CHECK_NOTHROW(duke1.income());
        CHECK_NOTHROW(duke2.income());
        CHECK_NOTHROW(duke3.income());
        CHECK_NOTHROW(duke4.income());
        CHECK_NOTHROW(duke5.income());
    }
    SUBCASE("6 Players"){
        Game game6{};
        Duke duke1{game6, "duke1"};
        Duke duke2{game6, "duke2"};
        Duke duke3{game6, "duke3"};
        Duke duke4{game6, "duke4"};
        Duke duke5{game6, "duke5"};
        Duke duke6{game6, "duke6"};

        CHECK_NOTHROW(duke1.income());
        CHECK_NOTHROW(duke2.income());
        CHECK_NOTHROW(duke3.income());
        CHECK_NOTHROW(duke4.income());
        CHECK_NOTHROW(duke5.income());
        CHECK_NOTHROW(duke6.income());
    }

    SUBCASE("Test Coup"){
        Game game{};
        
        Contessa count1{game, "count1"};
        Contessa count2{game, "count2"};

        for (int i = 0; i < 7; i++){
            count1.income();
            count2.income();
        }

        CHECK_NOTHROW(count1.coup(count2));
    }

    SUBCASE("Blocks"){
        SUBCASE("Foreign Aid"){
            Game game{};

            Duke duke{game, "duke"};
            Contessa count{game, "count"};

            count.foreign_aid();
            CHECK_NOTHROW(duke.block(count));
        }
        SUBCASE("Assasinate"){
            Game game{};

            Assassin assassin{game, "assassin"};
            Contessa count{game, "count"};

            for (int i = 0; i < 3; i++){
                assassin.income();
                count.income();
            }

            CHECK_NOTHROW(assassin.coup(count));
            CHECK_NOTHROW(count.block(assassin));
        }
        SUBCASE("Steal"){
            Game game{};

            Captain cap1{game, "cap1"};
            Captain cap2{game, "cap2"};

            cap1.foreign_aid();
            cap2.foreign_aid();

            CHECK_NOTHROW(cap1.steal(cap2));
            CHECK_NOTHROW(cap2.steal(cap1));
            CHECK_NOTHROW(cap1.block(cap2));
        }
    }
}
TEST_CASE("Bad Input"){
    SUBCASE("Not 2-6 Players"){
        Game game1{};
        Duke duke{game1, "duke"};

        CHECK_THROWS(duke.income());

        Game game7{};
        Duke duke1{game7, "duke1"};
        Duke duke2{game7, "duke2"};
        Duke duke3{game7, "duke3"};
        Duke duke4{game7, "duke4"};
        Duke duke5{game7, "duke5"};
        Duke duke6{game7, "duke6"};
        try{
            Duke duke7{game7, "duke7"};
        }
        catch (const invalid_argument e){
            throw invalid_argument(e);
        }
    }
    SUBCASE("Test Coup"){
        Game game{};
        
        Contessa count1{game, "count1"};
        Contessa count2{game, "count2"};

        for (int i = 0; i < 6; i++){
            CHECK_THROWS(count1.coup(count2));
            CHECK_THROWS(count2.coup(count1));
            count1.income();
            count2.income();
        }
    }
}