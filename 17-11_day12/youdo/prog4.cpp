#include<iostream>
using namespace std;

int area(int side){
    return side*side;
}

int area(int length,int width){
    return length*width;
}

int main(){
    int side,length,width;
    cin>>side>>length>>width;
    cout<<area(side)<<endl;
    cout<<area(length,width);
}