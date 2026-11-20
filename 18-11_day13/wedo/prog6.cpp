#include <iostream>
using namespace std;

void addBonus(int* score) {
    *score += 5;
}

int main() {
    int score;
    cin >> score;

    addBonus(&score);

    cout << score << endl;

    return 0;
}
