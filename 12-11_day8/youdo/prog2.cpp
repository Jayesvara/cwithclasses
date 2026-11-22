#include<iostream>
using namespace std;

void showDemoMarks(){
    int marks=50;
    cout<<marks<<" / ";
}

int main(){
    int marks;
    cin>>marks;

    showDemoMarks();
    cout<<marks;
}