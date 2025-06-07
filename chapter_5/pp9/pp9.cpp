hi#include <cctype>
#include <ctime>
#include <iostream>
#include <vector>

int get_wager(int player_money) {
  int wager;

  do {
    std::cout << "Players current bank: " << player_money << std::endl;
    std::cout << "How much would the player like to wager? Please enter a "
                 "valid wager. "
              << std::endl;
    std::cin >> wager;

    if (wager > player_money) {
      std::cout << "That is not a valid wager" << std::endl;
      std::cout << "Wager: " << wager
                << " is greather than players bank: " << player_money
                << std::endl;
    }

  } while (wager > player_money);

  return wager;
}
// input: players total amount of money.
// output: players wager if valid.

int get_player_starting_money() {
  int starting_amount;
  do {
    std::cout << "How much money will we be playing with today?" << std::endl;
    std::cin >> starting_amount;

    if (starting_amount <= 0) {
      std::cout << "Starting amount must be greater than 0 " << std::endl;
      std::cout << "Please enter another starting amount. " << std::endl;
    }
  } while (starting_amount <= 0);
  return starting_amount;
}
// input: nothing
// output: the amount of money the player will be starting with

int dice_roll() {
  std::vector<int> dice_sides = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};

  int dice_roll =
      dice_sides[std::rand() % dice_sides.size()]; // randomNumber % dice_sides
  std::cout << "DEBUG dice_roll " << dice_roll << std::endl;
  return dice_roll;
}
// input: nothing
// output: which side the dice rolled on

int players_turn() {
  int players_roll = dice_roll();
  return players_roll;
}

int house_turn() {
  int house_roll = dice_roll();
  return house_roll;
}

void initializeRandom() { std::srand(static_cast<unsigned int>(std::time(0))); }

void game_play(int &players_money, int players_wage) {
  int players_score = 0;
  int house_score = 0;
  char player_continue;
  bool player_bust = false;
  bool house_bust = false;

  initializeRandom();

  while (house_score <= 17) {
    house_score = house_turn() + house_score;
    std::cout << "House score " << house_score << std::endl;
  }

  if (house_score > 21) {
    std::cout << "House score: " << house_score << std::endl;
    std::cout << "House bust " << std::endl;
    house_bust = true;
  }

  do {
    players_score = players_turn() + players_score;
    std::cout << "Players current score " << players_score << std::endl;

    if (players_score <= 21) {
      std::cout << "Would the player like to go again?[Y/n] " << std::endl;
      std::cin >> player_continue;
    }

    if (players_score > 21) {
      std::cout << "Player bust " << std::endl;
      std::cout << "Players score " << players_score << std::endl;
      player_bust = true;
      player_continue = 'n';
    }

  } while (std::tolower(player_continue) == 'y');

  if (house_bust == true && player_bust == true) {
    std::cout << "Player and house tied. No money for anyone. " << std::endl;
  }
  if (house_bust == true && player_bust == false) {
    players_money = players_money + (players_wage * 2);
    std::cout << "Player wins: " << players_wage * 2 << std::endl;
    std::cout << "Players new total " << players_money << std::endl;
  }

  if (player_bust == true && house_bust == false) {
    players_money = players_money - players_wage;
    std::cout << "Player loses " << players_wage << std::endl;
    std::cout << "Players new total " << players_money << std::endl;
  }
}

int main() {
  int starting_amount = 0;

  std::cout << "This program plays the game of black jack against the house. "
            << std::endl;
  std::cout << "How much money would you like to start with? " << std::endl;
  std::cin >> starting_amount;

  int wager_amount = get_wager(starting_amount);
  std::cout << "The wager amount is " << wager_amount << std::endl;

  game_play(starting_amount, wager_amount);

  return 0;
}
