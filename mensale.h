using namespace std;

class mensale:public men,public receipt
{
public:
    void showmen30()
    {
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |             ITEM NAME               | ORIGINAL PRICE | 30% off |"<<endl;
        cout<<"\n |    91    |          Chequered Shirt(red)       |       1700     |   1190  |"<<endl;
        cout<<"\n |    92    |           Cotton pent(brown)        |       2500     |   1750  |"<<endl;
        cout<<"\n |    93    |                Jeans                |       1700     |   1190  |"<<endl;
        cout<<"\n |    94    |              Denim shirt            |       1600     |   1120  |"<<endl;
        cout<<"\n |    95    |              Belt(black)            |       600      |   420   |"<<endl;
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
    }
    void salebuymen()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;

        if(itemCode==91)
        {
            cout<<"You have bought Chequered Shirt(red) for Rs.1190"<<endl;
            msalecost = 1190;
            salecost+=msalecost;
        }
        else if(itemCode==92)
        {
            cout<<"You have bought Cotton pent(brown) for Rs.1750"<<endl;
            msalecost = 1750;
            salecost+=msalecost;
        }
        else if(itemCode==93)
        {
            cout<<"You have bought Jeans for Rs.1190"<<endl;
            msalecost = 1190;
            salecost+=msalecost;
        }
        else if(itemCode==94)
        {
            cout<<"You have bought Denim shirt for Rs.1120"<<endl;
            msalecost = 1120;
            salecost+=msalecost;
        }
        else if(itemCode==95)
        {
            cout<<"You have bought Belt(black)  for Rs.420"<<endl;
            msalecost = 420;
            salecost+=msalecost;
        }
        else if(itemCode==35)
        {
            cout<<"You have bought  joggers for Rs.2500"<<endl;
            msalecost = 1750;
            salecost+=msalecost;
        }
        else if(itemCode==34)
        {
            cout<<"You have bought shalwar kameez(blue) for Rs.1150"<<endl;
            msalecost = 1000;
            salecost+=msalecost;
        }
        else if(itemCode==33)
        {
            cout<<"You have bought Jeans(blue) for Rs.1000"<<endl;
            msalecost = 1500;
            salecost+=msalecost;
        }
        else if(itemCode==32)
        {
            cout<<"You have Formal shirt(green)  for Rs.1000"<<endl;
            msalecost = 650;
            salecost+=msalecost;
        }
        else if(itemCode==31)
        {
            cout<<"You have bought T-shirt(skin) for Rs.750"<<endl;
            msalecost = 750;
            salecost+=msalecost;
        }
    }
    void showmen50()
    {
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |              ITEM NAME              | ORIGINAL PRICE | 50% off |"<<endl;
        cout<<"\n |    31    |             T-shirt(skin)           |       1500     |   750   |"<<endl;
        cout<<"\n |    32    |          Formal shirt(green)        |       2000     |   1000  |"<<endl;
        cout<<"\n |    33    |              Jeans(blue)            |       2000     |   1000  |"<<endl;
        cout<<"\n |    34    |           shalwar kameez(blue)      |       2300     |   1150  |"<<endl;
        cout<<"\n |    35    |                joggers              |       5000     |  2500   |"<<endl;
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
    }
};
