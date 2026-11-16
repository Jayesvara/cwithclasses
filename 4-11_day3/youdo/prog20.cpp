#include<iostream>
using namespace std;
int main(){
int s=5000;
int h=s/3600;
int m=(s%3600)/60;
int sec=s%60;
cout<<h<<" hours "<<m<<" minutes "<<sec<<" seconds";
}