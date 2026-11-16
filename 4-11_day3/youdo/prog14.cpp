#include<iostream>
using namespace std;
int main(){
    int buyscount=25;
    int buysfor=8;
    int sellsfor=11;
    int profit=(buyscount*sellsfor)-(buyscount*buysfor);
    cout<<"The profit earned is "<<profit;
    return 0;


}