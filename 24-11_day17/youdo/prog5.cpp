#include<iostream>
using namespace std;

class CouponWallet
{
    private:
    int balance;

    public:
    CouponWallet(int b)
    {
        balance=b;
    }

    void redeem(int n,int wallet)
    {
        if(n>0 && n<=balance)
        {
            balance=balance-n;
            cout<<"Accepted | Wallet "<<wallet<<" balance: "<<balance<<endl;
        }
        else
        {
            cout<<"Rejected | Wallet "<<wallet<<" balance: "<<balance<<endl;
        }
    }
};

int main()
{
    int b1,b2,n,r;

    cout<<"Enter the opening balance for Wallet 1: ";
    cin>>b1;

    cout<<"Enter the opening balance for Wallet 2: ";
    cin>>b2;

    CouponWallet w1(b1),w2(b2);

    cout<<"Enter the request count for Wallet 1: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter coupons for Wallet 1, request "<<i<<": ";
        cin>>r;

        w1.redeem(r,1);
    }

    cout<<"Enter the request count for Wallet 2: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter coupons for Wallet 2, request "<<i<<": ";
        cin>>r;

        w2.redeem(r,2);
    }

    return 0;
}