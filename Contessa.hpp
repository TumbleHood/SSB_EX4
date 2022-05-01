#include "Player.hpp"

using namespace coup;
using namespace std;

class Contessa: public Player{
    string name;
    public:
        Contessa(const coup::Game& game, const string& name);
        void block(const Player& player);
};