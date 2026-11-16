#include<iostream>
using namespace std;
int main(){
    int chocolates=50;
    int distribute=7;
    int get=chocolates/distribute;
    int remaining=chocolates%distribute;
    cout<<"each child gets: "<<get<<endl;
    cout<<"remaining is "<<remaining<<endl;
    return 0;

}