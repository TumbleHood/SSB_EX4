#include "Player.hpp"

using namespace coup;
using namespace std;

class Captain: public Player{
    string name;
    public:
        Captain(const coup::Game& game, const string& name);
        void block(const Player& player);
        void steal(const Player& player);
};