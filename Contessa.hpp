#include "Player.hpp"

using namespace coup;
using namespace std;

class Contessa: public Player{
    string name;
    public:
        Contessa(coup::Game game, string name);
        void block(Player player);
};