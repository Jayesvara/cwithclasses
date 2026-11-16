#include<iostream>
using namespace std;
int main(){
    int students=1250;
    int each=45;
    int full=students/each;
    int leftover=students%each;
    cout<<"Total filled is "<<full<<endl;
    cout<<"Left over students"<<leftover<<endl;
    return 0;
}