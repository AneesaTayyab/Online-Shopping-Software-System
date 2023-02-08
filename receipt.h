using namespace std;

class receipt
{
public:
    int salecost;
    int ksalecost;
    int msalecost;
    int wsalecost;
    receipt()
    {
        salecost=0;
        ksalecost=0;
        msalecost=0;
        wsalecost=0;
    }
    virtual void CalculateReceipt()
    {

    }
};
