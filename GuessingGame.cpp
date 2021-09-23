#include <iostream>

using namespace std;

int main() {

  int b = 0;
  while (b == 0) { //while loop for game that loops when user wants to play again

    cout << "welcome to the guessing game, enter your guesses" << endl;

    srand(time(NULL));
    int num = rand() % 101;

    int guess;
    int a = 0;
    int trys = 0;
    while(a == 0) {
      cin >> guess;
      trys++;
      if (guess == num) { //breaks out of while loop and displays number of tries
        a = 1;
        cout << "correct!" << endl << "it took you " << trys << " trys" << endl;
      }
      if (guess > num) { //states if guess is too high
        cout << "too high" << endl;
      }
      if (guess < num) { //states if guess is too low
        cout << "too low" << endl;
      }
    }

    //asks if user wants to play again
    cout << "want to play again?" << endl;
    char cont;
    cin >> cont;

    if (cont == 'n') { //breaks out of game while loop if user doesn't want to play again
      b = 1;
    }
  }

  return 0;
}
