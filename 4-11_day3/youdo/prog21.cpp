#include<iostream>
using namespace std;
int main(){
int amount=4860;
int a=amount/500;
amount%=500;
int b=amount/100;
amount%=100;
int c=amount/50;
amount%=50;
int d=amount/10;
cout<<"500: "<<a<<endl;
cout<<"100: "<<b<<endl;
cout<<"50: "<<c<<endl;
cout<<"10: "<<d;
}