#include <iostream>
using namespace std;
int addScores(int first, int second);
int main() {
    int score1, score2;

    cout << "Enter two quiz scores: ";
    cin >> score1 >> score2;

    int total = addScores(score1, score2);
    cout << "Total score: " << total << endl;
    return 0;
}
int addScores(int first, int second) {
    return first + second;
}
