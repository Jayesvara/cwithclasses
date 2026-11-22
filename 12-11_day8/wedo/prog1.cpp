#include<iostream>
using namespace std;

int addBonus(int score){
    score=score+5;
    return score;
}

int main(){
    int n;
    cin>>n;

    cout<<n<<" "<<addBonus(n);
}