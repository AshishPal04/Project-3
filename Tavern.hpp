#ifndef TAVERN_HPP_
#define TAVERN_HPP_
#include "Character.hpp"
#include "ArrayBag.hpp"

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

class Tavern : ArrayBag<Character> {
    private:
    int level_sum_;
    int enemy_count_;
    public:
    Tavern();
    bool enterTavern(const Character& person);
    bool exitTavern(const Character& person);
    int getLevelSum() const;
    int calculateAvgLevel() const;
    int getEnemyCount() const;
    double calculateEnemyPercentage() const;
    int tallyRace(const string& race) const;
    void tavernReport() const;
};

#endif