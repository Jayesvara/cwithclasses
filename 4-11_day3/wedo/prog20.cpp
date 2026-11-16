#include<iostream>
using namespace std;
int main(){
    int seconds=7384;
    int hour=seconds/3600;
    int rem=seconds%3600;
    int min=rem/60;
    int sec=rem%60;
    cout<<hour<<":"<<min<<":"<<sec;

}