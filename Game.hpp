#pragma once

#include <string>
#include <vector>

using namespace std;

namespace coup{
    class Game{
        vector<string> players_list;
        public:
            Game();
            static vector<string> players();
            static string turn();
            static string winner();
    };
}