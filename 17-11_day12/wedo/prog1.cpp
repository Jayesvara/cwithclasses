#include <iostream>
using namespace std;

int addBonus(int score) {
    score = score + 5;
    return score;
}

int main() {
    int score;
    cin >> score;
    int per = addBonus(score);
    cout << per;
    return 0;
}
