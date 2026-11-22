#include<iostream>
using namespace std;

int perimeter(int side){
    return 4*side;
}

int perimeter(int length,int width){
    return 2*(length+width);
}

int main(){
    int s,l,w;
    cin>>s>>l>>w;

    cout<<perimeter(s)<<" "<<perimeter(l,w);
}