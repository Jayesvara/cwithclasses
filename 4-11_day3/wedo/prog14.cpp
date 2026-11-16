#include<iostream>
using namespace std;
int main(){
    int books=40;
    int price=18;
    int profit=25;
    int totalprofit=(profit*books)-(price*books);
    cout<<"total profit is "<<totalprofit;
    return 0;
}