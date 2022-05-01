#pragma once
#include "Game.hpp"
#include <string>

using namespace std;

class Player{
    string name;
    public:
        void income();
        void foreign_aid();
        static int coins();
        string role();
        void coup(const Player& player);
};