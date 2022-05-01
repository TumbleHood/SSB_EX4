#include "Player.hpp"

using namespace coup;
using namespace std;

class Assassin: public Player{
    string name;
    public:
        Assassin(coup::Game game, string name);
};