#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Dice {
private:
    int value;
public:
    Dice(){
        value = 0;
    }
    void roll() { cout << rand() % 6 + 1 << " "; }
};

int main() {
    SetConsoleOutputCP(65001);
    srand(time(NULL)); 

    Dice dice1, dice2, dice3, dice4;

    for (int i = 1; i <= 5; i++) {
       cout << "Кидок " << i << ": ";
       dice1.roll();
       dice2.roll();
       dice3.roll();
       dice4.roll();
       cout << endl;
    }

    return 0;
}