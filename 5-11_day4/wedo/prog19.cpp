#include<iostream>
using namespace std;
int main(){
int n=7384;
int h=n/3600;
n=n%3600;
int m=n/60;
int s=n%60;
cout<<h<<" hours "<<m<<" minutes "<<s<<" seconds";
return 0;
}