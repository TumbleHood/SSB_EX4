#include "Player.hpp"

using namespace coup;
using namespace std;

class Duke: public Player{
    string name;
    public:
        Duke(const coup::Game& game, const string& name);
        void block(const Player& player);
        void tax();
};