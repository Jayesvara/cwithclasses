#include<iostream>
using namespace std;

void showDemoMarks(){
    int marks = 50;
    cout<<marks<<endl;
}

int main(){
    int marks;
    cin>>marks;

    showDemoMarks();

    cout<<marks;

    return 0;
}