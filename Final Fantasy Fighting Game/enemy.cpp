#include "enemy.h"

#include <iostream>
using namespace std;

// constructor
Enemy::Enemy() {}

// destructor
Enemy::~Enemy() {}

// function to get a random enemy move (a,b,p)
void Enemy::getEnemyMove() {
  // generate random number
  srand(time(NULL));
  enemyMove = rand() % 3 + 1;
  // cout << enemyMove; // test
}

// function to set enemy hp
void Enemy::setEnemyHP(int hp) { enemyHP = hp; }

// function to get name of enemy based off of level
string Enemy::getName(int i) {
  name[0] = "Malacoda";
  name[1] = "Behemoth King";
  name[2] = "Ironclad Golem";
  name[3] = "Shadow Dragon";
  name[4] = "Soul Devourer";
  name[5] = "Chimera";
  name[6] = "Death Knight";
  name[7] = "Thunderbird";
  name[8] = "Giant Scorpion";
  name[9] = "Bloodsucker";

  return name[i];
}
