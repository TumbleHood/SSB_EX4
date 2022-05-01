#include "Player.hpp"

using namespace coup;
using namespace std;

class Captain: public Player{
    string name;
    public:
        Captain(coup::Game game, string name);
        void block(Player player);
        void steal(Player player);
};