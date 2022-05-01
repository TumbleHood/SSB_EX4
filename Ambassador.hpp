#include "Player.hpp"

using namespace coup;
using namespace std;

class Ambassador: public Player{
    string name;
    public:
        Ambassador(coup::Game game, string name);
        void transfer(Player from_player, Player to_player);
};