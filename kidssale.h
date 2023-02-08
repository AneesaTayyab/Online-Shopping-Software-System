using namespace std;

class kidssale:public kids,public receipt
{
public:
    void Showkids30()
    {
        for(int i=1; i<107; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |        GIRLS      |ORIGINAL PRICE| 30% off |ITEM CODE|     BOYS     |ORIGINAL PRICE| 30% off|"<<endl;
        cout<<"\n |    311   |    T-shirt(pink)  |     1200     |   840   |    411  | shirt(yellow)|     1300     |   910  |"<<endl;
        cout<<"\n |    322   |   Blouse(yellow)  |     1800     |   1260  |    422  |trouser(black)|     1000     |   700  |"<<endl;
        cout<<"\n |    333   |     Frock(blue)   |     2200     |   1540  |    433  | pyjama(brown)|     1000     |   700  |"<<endl;
        cout<<"\n |    344   |  Jumpsuit(purple) |     3000     |   2100  |    444  | jeans(skin)  |     1300     |   910  |"<<endl;
        cout<<"\n |    355   |    Kurti(skin)    |     1900     |   1330  |    455  | kurta(blue)  |     1400     |   980  |"<<endl;
        for(int i=1; i<107; i++)
        {
            cout<<"-";
        }
    }
    void salebuy30()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;
        if(itemCode==311)
        {
            cout<<"You have bought T-shirt (pink) for Rs.840"<<endl;
            ksalecost = 840;
            salecost+=ksalecost;
        }
        else if(itemCode==322)
        {
            cout<<"You have bought Blouse(yellow) for Rs.1250"<<endl;
            ksalecost = 1250;
            salecost+=ksalecost;
        }
        else if(itemCode==333)
        {
            cout<<"You have bought Frock(blue) for Rs.1540"<<endl;
            ksalecost = 1540;
            salecost+=ksalecost;
        }
        else if(itemCode==344)
        {
            cout<<"You have bought Jumpsuit (purple)r for Rs.2100"<<endl;
            ksalecost = 2100;
            salecost+=ksalecost;
        }
        else if(itemCode==355)
        {
            cout<<"You have bought kurti (skin)  for Rs.1330"<<endl;
            ksalecost = 1330;
            salecost+=ksalecost;
        }
        else if(itemCode==411)
        {
            cout<<"You have bought shirt(yellow) for Rs.910"<<endl;
            ksalecost = 910;
            salecost+=ksalecost;
        }
        else if(itemCode==422)
        {
            cout<<"You have bought Trouser(black) for Rs.700"<<endl;
            ksalecost = 700;
            salecost+=ksalecost;
        }
        else if(itemCode==433)
        {
            cout<<"You have bought pyjama(brown) for Rs.700"<<endl;
            ksalecost = 700;
            salecost+=ksalecost;
        }
        else if(itemCode==444)
        {
            cout<<"You have bought jeans(skin)r for Rs.910"<<endl;
            ksalecost = 910;
            salecost+=ksalecost;
        }
        else if(itemCode==455)
        {
            cout<<"You have bought kurta(blue) for Rs.980"<<endl;
            ksalecost = 980;
            salecost+=ksalecost;
        }
    }
    void Showkids50()
    {
        for(int i=1; i<107; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |      GIRLS     |ORIGINAL PRICE| 50% off |ITEM CODE|     BOYS     |ORIGINAL PRICE| 50% off|"<<endl;
        cout<<"\n |    511   |  Trouser(pink) |     1200     |   600   |    611  |  belt(skin)  |     400      |   200  |"<<endl;
        cout<<"\n |    522   |  skirt(yellow) |     1800     |   900   |    622  |trouser(black)|     1400     |   700  |"<<endl;
        cout<<"\n |    533   |  Tights(blue)  |     1600     |   800   |    633  | shlwar(brown)|     2000     |   1000 |"<<endl;
        cout<<"\n |    544   |  Maxi(purple)  |     3000     |   1500  |    644  | shorts(skin) |     800      |   400  |"<<endl;
        cout<<"\n |    555   |   Socks(skin)  |     500      |   250   |    655  | polos(blue)  |     1400     |   700  |"<<endl;
        for(int i=1; i<107; i++)
        {
            cout<<"-";
        }
    }
    void salebuy50()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;
        if(itemCode==511)
        {
            cout<<"You have bought trouser (pink) for Rs.600"<<endl;
            ksalecost = 600;
            salecost+=ksalecost;
        }
        else if(itemCode==522)
        {
            cout<<"You have bought skirt(yellow) for Rs.900"<<endl;
            ksalecost = 900;
            salecost+=ksalecost;
        }
        else if(itemCode==533)
        {
            cout<<"You have bought Tights (blue) for Rs.800"<<endl;
            ksalecost = 800;
            salecost+=ksalecost;
        }
        else if(itemCode==544)
        {
            cout<<"You have bought Maxi (purple)r for Rs.1500"<<endl;
            ksalecost = 1500;
            salecost+=ksalecost;
        }
        else if(itemCode==555)
        {
            cout<<"You have bought socks (skin)  for Rs.250"<<endl;
            ksalecost = 1330;
            salecost+=ksalecost;
        }
        else if(itemCode==611)
        {
            cout<<"You have bought belt (skin) for Rs.200"<<endl;
            ksalecost = 200;
            salecost+=ksalecost;
        }
        else if(itemCode==622)
        {
            cout<<"You have bought Trouser(black) for Rs.700"<<endl;
            ksalecost = 700;
            salecost+=ksalecost;
        }
        else if(itemCode==633)
        {
            cout<<"You have bought shalwar(brown) for Rs.1000"<<endl;
            ksalecost = 1000;
            salecost+=ksalecost;
        }
        else if(itemCode==644)
        {
            cout<<"You have bought shorts(skin)r for Rs.400"<<endl;
            ksalecost = 400;
            salecost+=ksalecost;
        }
        else if(itemCode==655)
        {
            cout<<"You have bought polos(blue) for Rs.700"<<endl;
            ksalecost = 700;
            salecost+=ksalecost;
        }
    }
    void CalculateReceipt()
    {
        cout<<"\n********************************"<<endl;
        cout<<"Your Total is Rs. "<<salecost<<endl;
        cout<<"Adding 7.5% GST"<<endl;
        salecost=((salecost/100)*7.5)+salecost;
        cout<<"Your Grand Total is: "<<salecost<<endl;
        cout<<"Thanks for shopping here!,Visit us again soon!"<<endl;
        cout<<"********************************"<<endl;
    }
};
