#include "Player.hpp"

using namespace coup;
using namespace std;

class Duke: public Player{
    string name;
    public:
        Duke(coup::Game game, string name);
        void block(Player player);
        void tax();
};