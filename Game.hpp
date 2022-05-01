#pragma once

#include <string>
#include <vector>

using namespace std;

namespace coup{
    class Game{
        vector<string> players_list;
        public:
            Game();
            vector<string> players();
            string turn();
            string winner();
    };
}