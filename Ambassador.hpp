#include "Player.hpp"

using namespace coup;
using namespace std;

class Ambassador: public Player{
    string name;
    public:
        Ambassador(const coup::Game& game, const string& name);
        void transfer(const Player& from_player, const Player& to_player);
};