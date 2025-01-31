#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

void shoot(bool &targetAlive, double accuracy) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(0.0, 1.0);
  double random_number = dis(gen);

  targetAlive = (accuracy > random_number);
}

enum Characters { CHARLIE, BOB, AARON, NONE };

Characters startDuel(bool &charlie, bool &bob, bool &aaron,
                     double charlieAccuracy, double bobAccuracy,
                     double aaronAccuracy) {
  std::vector<Characters> players = {CHARLIE, BOB, AARON};

  while ((charlie + bob + aaron > 1)) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(players.begin(), players.end(), gen);

    for (Characters shooter : players) {
      if (shooter == CHARLIE && charlie) {
        if (bob) {
          shoot(bob, charlieAccuracy);
        } else {
          shoot(aaron, charlieAccuracy);
        }
      } else if (shooter == BOB && bob) {
        if (charlie) {
          shoot(charlie, bobAccuracy);
        } else {
          shoot(aaron, bobAccuracy);
        }
      } else if (shooter == AARON && aaron) {
        if (charlie) {
          shoot(charlie, aaronAccuracy);
        } else {
          shoot(bob, aaronAccuracy);
        }
      }
    }
    std::cout << "Status: " << " Charlie " << charlie << " Bob " << bob
              << " Aaron " << aaron << std::endl;
  }

  if (charlie)
    return CHARLIE;
  if (bob)
    return BOB;
  if (aaron)
    return AARON;

  return NONE;
}

int main() {
  double charlieAccuracy = 1.0;
  double bobAccuracy = 0.5;
  double aaronAccuracy = 0.3;
  int count = 0;
  int charlieWins = 0;
  int bobWins = 0;
  int aaronWins = 0;

  while (count < 1000) {
    bool charlieAlive = true;
    bool bobAlive = true;
    bool aaronAlive = true;

    Characters winner = startDuel(charlieAlive, bobAlive, aaronAlive,
                                  charlieAccuracy, bobAccuracy, aaronAccuracy);

    switch (winner) {
    case CHARLIE:
      std::cout << "Charlie is the winner " << std::endl;
      charlieWins++;
      break;
    case BOB:
      std::cout << "Bob is the winner " << std::endl;
      bobWins++;
      break;
    case AARON:
      std::cout << "Aarron is the winnner " << std::endl;
      aaronWins++;
      break;
    case NONE:
      std::cout << "Nobody is the winner and this should never happen "
                << std::endl;
      break;
    }

    count++;
  }

  std::cout << "Total wins for every player " << std::endl;
  std::cout << "Charlie: " << charlieWins << std::endl;
  std::cout << "Bob: " << bobWins << std::endl;
  std::cout << "Aaron: " << aaronWins << std::endl;

  std::cout << "The probability of Charlie winning "
            << (static_cast<double>(charlieWins) / 1000) << std::endl;
  std::cout << "The probability of Bob winning "
            << (static_cast<double>(bobWins) / 1000) << std::endl;
  std::cout << "The probabliity of Aaron winning "
            << (static_cast<double>(aaronWins) / 1000) << std::endl;

  return 0;
}
