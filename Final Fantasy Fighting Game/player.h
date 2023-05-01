#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player {
private:
  double resistance;

public:
  string move;
  int userMove = 0; // int for user move (1=a,2=b,3=p)
  int userHP = 0;   // int for user hp
  int sharp = 0;    // int for multiplier of how much dps a sword does

  int armor = 0; // temp variable for multipliers
  int sword = 0; // "

  int swordLvl = 0; // sword level
  int armorLvl = 0; // armor level

  Player();
  ~Player();

  void getPlayerMove();
  void setPlayerHP(int);
  void setResistance();
};
