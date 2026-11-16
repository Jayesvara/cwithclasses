#include<iostream>
using namespace std;
 int greatestScore(int a, int b, int c);

 int main(){
    int a,b,c;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout<<"Enter c";
    cin>>c;
    if (a>=b)&&(a>=c){
        cout<<a;
    }
    else if (b>=a)&&(b>=c){
        cout<<b;
    }
    else {
        cout<<c;
    }
    int big=greatestScore(int a, int b, int c);
    cout<<big;
    return 0;
    int greatestScore(int a, int b, int c);
    return big;


 }