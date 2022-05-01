#include "Player.hpp"

using namespace coup;
using namespace std;

class Assassin: public Player{
    string name;
    public:
        Assassin(const coup::Game& game, const string& name);
};