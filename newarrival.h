using namespace std;

class NewArrival:public women, public receipt,public men,public kids
{
public:
    void n_a_women()
    {
        for(int i=1; i<60; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |             ITEM NAME               | PRICE |"<<endl;
        cout<<"\n |    31    |    Unstitched 2-piece Pink&White    | 2500  |"<<endl;
        cout<<"\n |    32    |    3-piece Blue embriodery Suit     | 4000  |"<<endl;
        cout<<"\n |    33    |            Red Handbag              | 2300  |"<<endl;
        cout<<"\n |    34    |        Fancy White Trouser          | 2420  |"<<endl;
        cout<<"\n |    35    |      Red Embrioded Duppatta         | 1600  |"<<endl;
        cout<<"\n |    36    | Stitched Suit 3-piece Orange printed| 4500  |"<<endl;
        cout<<"\n |    37    | UnStitched 2-piece Pink embriodery  | 2400  |"<<endl;
        cout<<"\n |    38    |        White printed facemask       | 1300  |"<<endl;
        cout<<"\n |    39    |        Black Long Coat              | 6600  |"<<endl;
        cout<<"\n |    40    |        Women Denim Jacket           | 5000  |"<<endl;
        for(int i=1; i<60; i++)
        {
            cout<<"-";
        }
    }
    void NewArrivalCost()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;

        if(itemCode==31)
        {
            cout<<"You have bought Unstitched 2-piece Pink&White for Rs.2500"<<endl;
            wsalecost = 2500;
            salecost+=wsalecost;
        }
        else if(itemCode==32)
        {
            cout<<"You have bought 3-piece Blue embriodery Suit for Rs.4000"<<endl;
            wsalecost = 4000;
            salecost+=wsalecost;
        }
        else if(itemCode==33)
        {
            cout<<"You have bought Red Handbag for Rs.2300"<<endl;
            wsalecost = 2300;
            salecost+=wsalecost;
        }
        else if(itemCode==34)
        {
            cout<<"You have bought Fancy White Trouser for Rs.2420"<<endl;
            wsalecost = 2420;
            salecost+=wsalecost;
        }
        else if(itemCode==35)
        {
            cout<<"You have bought Red Embrioded Duppatta for Rs.1600"<<endl;
            wsalecost = 1600;
            salecost+=wsalecost;
        }
        else if(itemCode==36)
        {
            cout<<"You have bought  Stitched Suit 3-piece Orange printed for Rs.4500"<<endl;
            wsalecost = 4500;
            salecost+=wsalecost;
        }
        else if(itemCode==37)
        {
            cout<<"You have bought UnStitched 2-piece Pink embriodery for Rs.2400"<<endl;
            wsalecost = 2400;
            salecost+=wsalecost;
        }
        else if(itemCode==38)
        {
            cout<<"You have bought White printed facemask for Rs.1300"<<endl;
            wsalecost = 1300;
            salecost+=wsalecost;
        }
        else if(itemCode==39)
        {
            cout<<"You have bought Black Long Coat for Rs.6600"<<endl;
            wsalecost = 6600;
            salecost+=wsalecost;
        }
        else if(itemCode==40)
        {
            cout<<"You have bought Women Denim Jacket  for Rs.5000"<<endl;
            wsalecost = 5000;
            salecost+=wsalecost;
        }
    }

    void n_a_kids()
    {
        for(int i=1; i<86; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |      GIRLS     |    PRICE     |ITEM CODE|     BOYS     |    PRICE     | "<<endl;
        cout<<"\n |    711   |Frock embriodery|     2800     |   811   |  Wallet(skin)|     1000     | "<<endl;
        cout<<"\n |    722   |  skirt(yellow) |     2200     |   822   |trouser(black)|     1400     | "<<endl;
        cout<<"\n |    733   |  Tights(blue)  |     1600     |   833   | shlwar(brown)|     2200     | "<<endl;
        cout<<"\n |    744   |  Maxi(purple)  |     3000     |   844   | shorts(skin) |     1200     | "<<endl;
        cout<<"\n |    755   |   Socks(skin)  |     500      |   855   | polos(blue)  |     1900     | "<<endl;
        for(int i=1; i<86; i++)
        {
            cout<<"-";
        }
    }
    void newarrivalcost_kids()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;
        if(itemCode==711)
        {
            cout<<"You have bought trouser (pink) for Rs.2800"<<endl;
            ksalecost = 2800;
            salecost+=ksalecost;
        }
        else if(itemCode==722)
        {
            cout<<"You have bought skirt(yellow) for Rs.2000"<<endl;
            wsalecost = 2000;
            salecost+=ksalecost;
        }
        else if(itemCode==733)
        {
            cout<<"You have bought Tights (blue) for Rs.1600"<<endl;
            wsalecost = 1600;
            salecost+=ksalecost;
        }
        else if(itemCode==744)
        {
            cout<<"You have bought Maxi (purple)r for Rs.3000"<<endl;
            wsalecost = 3000;
            salecost+=ksalecost;
        }
        else if(itemCode==755)
        {
            cout<<"You have bought socks (skin)  for Rs.500"<<endl;
            ksalecost = 500;
            salecost+=ksalecost;
        }
        else if(itemCode==811)
        {
            cout<<"You have bought belt (skin) for Rs.1000"<<endl;
            ksalecost = 1000;
            salecost+=ksalecost;
        }
        else if(itemCode==822)
        {
            cout<<"You have bought Trouser(black) for Rs.1400"<<endl;
            wsalecost = 1400;
            salecost+=ksalecost;
        }
        else if(itemCode==833)
        {
            cout<<"You have bought shalwar(brown) for Rs.2200"<<endl;
            wsalecost = 2200;
            salecost+=ksalecost;
        }
        else if(itemCode==844)
        {
            cout<<"You have bought shorts(skin)r for Rs.1200"<<endl;
            wsalecost = 1200;
            salecost+=ksalecost;
        }
        else if(itemCode==855)
        {
            cout<<"You have bought polos(blue) for Rs.1900"<<endl;
            wsalecost = 1900;
            salecost+=ksalecost;
        }
    }

    void n_a_men()
    {
        for(int i=1; i<60; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |             ITEM NAME               | PRICE |"<<endl;
        cout<<"\n |    71    |   Unstitched shlwar kameez(black)   | 2500  |"<<endl;
        cout<<"\n |    72    |         Fancy WaistCoat(Red)        | 7000  |"<<endl;
        cout<<"\n |    73    |         Sherwani(mehroon,skin)      | 15000 |"<<endl;
        cout<<"\n |    74    |         Velvet WaistCoat(black)     | 2500  |"<<endl;
        cout<<"\n |    75    |  Stitched shlwar kameez(navy blue)  | 2700  |"<<endl;
        cout<<"\n |    76    |             Chapli(black)           | 2500  |"<<endl;
        cout<<"\n |    77    |               Fragrance             | 3000  |"<<endl;
        for(int i=1; i<60; i++)
        {
            cout<<"-";
        }
    }
    void newarrivalcost_men()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;

        if(itemCode==71)
        {
            cout<<"You have bought Unstitched shlwar kameez(black) for Rs.2500"<<endl;
            msalecost = 2500;
            salecost+=msalecost;
        }
        else if(itemCode==72)
        {
            cout<<"You have bought Fancy WaistCoat(Red) for Rs.7000"<<endl;
            msalecost = 7000;
            salecost+=msalecost;
        }
        else if(itemCode==73)
        {
            cout<<"You have bought Sherwani(mehroon,skin) for Rs.15000"<<endl;
            msalecost = 15000;
            salecost+=msalecost;
        }
        else if(itemCode==74)
        {
            cout<<"You have bought Velvet WaistCoat(black) for Rs.2500"<<endl;
            msalecost = 2500;
            salecost+=msalecost;
        }
        else if(itemCode==75)
        {
            cout<<"You have bought Stitched shalwar kameez(navy blue) for Rs.2700"<<endl;
            msalecost = 2700;
            salecost+=msalecost;
        }
        else if(itemCode==76)
        {
            cout<<"You have bought Chapli(black) for Rs.2500"<<endl;
            msalecost = 2500;
            salecost+=msalecost;
        }
        else if(itemCode==77)
        {
            cout<<"You have bought Fragrance for Rs.3000"<<endl;
            msalecost = 3000;
            salecost+=msalecost;
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

