#include<iostream>
using namespace std;

int area(int side){
    return side*side;
}

int area(int length,int width){
    return length*width;
}

int main(){
    int s,l,w;
    cin>>s>>l>>w;

    cout<<area(s)<<" "<<area(l,w);
}