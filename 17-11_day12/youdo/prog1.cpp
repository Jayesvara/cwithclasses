#include<iostream>
using namespace std;

int previewTicketPrice(int price){
    price = price + 20;
    return price;
}

int main(){
    int price;
    cin>>price;

    int preview = previewTicketPrice(price);

    cout<<price<<" "<<preview;

    return 0;
}