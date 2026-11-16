#include<iostream>
using namespace std;
int main(){
    int totaldays=900;
    int year=totaldays/365;
    int days=totaldays%365;
    int month=days/30;
    int day=days%30;
    cout<<year<<"years"<<month<<"months"<<day<<"days";
}