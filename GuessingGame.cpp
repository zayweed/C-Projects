#include <iostream>

using namespace std;

bool check_num(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (isdigit(str[i]) == false) {
      return false;
    }
  }
  return true;
}

int main() {

  int b = 0;
  while (b == 0) {

    cout << "welcome to the guessing game, enter your guesses" << endl;

    srand(time(NULL));
    int num = rand() % 101;

    string guessa;
    int a = 0;
    int trys = 0;
    while(a == 0) {
      cin >> guessa;
      if (check_num(guessa) == false) {
        cout << "invalid input, try again" << endl;
        continue;
      }
      trys++;
      int guess = stoi(guessa);
      if (guess == num) {
        a = 1;
        cout << "correct!" << endl << "it took you " << trys << " trys" << endl;
      }
      if (guess > num) {
        cout << "too high" << endl;
      }
      if (guess < num) {
        cout << "too low" << endl;
      }
    }

    cout << "want to play again?" << endl;
    char cont;
    cin >> cont;

    if (cont == 'n') {
      b = 1;
    }
  }

  return 0;
}
