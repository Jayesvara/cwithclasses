#include<iostream>
using namespace std;
int main(){
int days=1200;
int y=days/365;
days%=365;
int m=days/30;
days%=30;
cout<<y<<" years "<<m<<" months "<<days<<" days";
}