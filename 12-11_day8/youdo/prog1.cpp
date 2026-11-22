#include<iostream>
using namespace std;

int previewTicketPrice(int price){
    price=price+20;
    return price;
}

int main(){
    int n;
    cin>>n;

    cout<<n<<" "<<previewTicketPrice(n);
}