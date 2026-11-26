#include<iostream>
using namespace std;

class LabInventory
{
    private:
    int stock;

    public:
    LabInventory(int s)
    {
        stock=s;
    }

    void issueKits(int n)
    {
        if(n>0 && n<=stock)
        {
            stock=stock-n;
            cout<<"Accepted ";
        }
        else
        {
            cout<<"Rejected ";
        }

        cout<<stock<<endl;
    }
};

int main()
{
    LabInventory l(20);
    int n,request;

    cout<<"Enter the number of requests: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the number of kits for request "<<i<<": ";
        cin>>request;

        l.issueKits(request);
    }

    return 0;
}