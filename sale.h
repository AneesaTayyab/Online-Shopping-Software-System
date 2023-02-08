using namespace std;

class sale:public women,public receipt
{
public:
    int SaleValue;
    int GetSale()
    {
        cout<<"\nThere is 30% and 50% off on selected items"<<endl;
        cout<<"\nWhich category would you like to view(30%/50%): ";
        cin>>SaleValue;
        return SaleValue;
    }
    void ShowWomen30()
    {
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |             ITEM NAME               | ORIGINAL PRICE | 30% off |"<<endl;
        cout<<"\n |    11    | Yellow printed Un-stitched shirt    |       1500     |   1050  |"<<endl;
        cout<<"\n |    12    | Blue embriodery Stitched shirt      |       2000     |   1400  |"<<endl;
        cout<<"\n |    13    |          White Handbag              |       3000     |   2100  |"<<endl;
        cout<<"\n |    14    |        Plain White Trouser          |       1420     |   1015  |"<<endl;
        cout<<"\n |    15    |     Orange Printed Duppatta         |       1000     |   700   |"<<endl;
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
    }
    void ShowWomen50()
    {
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
        cout<<"\n |ITEM CODE |             ITEM NAME               | ORIGINAL PRICE | 50% off |"<<endl;
        cout<<"\n |    21    | Stitched Suit 2-piece white printed |       3500     |   1750  |"<<endl;
        cout<<"\n |    22    | UnStitched shirt Pink embriodery    |       2000     |   1000  |"<<endl;
        cout<<"\n |    23    |          Fancy Red Clutch           |       3000     |   1500  |"<<endl;
        cout<<"\n |    24    |        Plain Black Trouser          |       1300     |   650   |"<<endl;
        cout<<"\n |    25    |        Red Printed Duppatta         |       1000     |   500   |"<<endl;
        for(int i=1; i<79; i++)
        {
            cout<<"-";
        }
    }
    void SaleBuy()
    {
        cout<<"\nEnter the ITEM CODE Which you want to buy:    "<<endl;
        int itemCode;
        cin>>itemCode;

        if(itemCode==11)
        {
            cout<<"You have bought Yellow printed Un-stitched shirt for Rs.1050"<<endl;
            wsalecost = 1050;
            salecost+=wsalecost;
        }
        else if(itemCode==12)
        {
            cout<<"You have bought Blue embriodery Stitched shirt for Rs.1400"<<endl;
            wsalecost = 1400;
            salecost+=wsalecost;
        }
        else if(itemCode==13)
        {
            cout<<"You have bought White Handbag for Rs.2100"<<endl;
            wsalecost = 2100;
            salecost+=wsalecost;
        }
        else if(itemCode==14)
        {
            cout<<"You have bought Plain White Trouser for Rs.1015"<<endl;
            wsalecost = 1015;
            salecost+=wsalecost;
        }
        else if(itemCode==15)
        {
            cout<<"You have bought Orange Printed Duppatta  for Rs.700"<<endl;
            wsalecost = 700;
            salecost+=wsalecost;
        }
        else if(itemCode==21)
        {
            cout<<"You have bought  Stitched Suit 2-piece white printed for Rs.1750"<<endl;
            wsalecost = 1750;
            salecost+=wsalecost;
        }
        else if(itemCode==22)
        {
            cout<<"You have bought UnStitched shirt Pink embriodery  for Rs.1000"<<endl;
            wsalecost = 1000;
            salecost+=wsalecost;
        }
        else if(itemCode==23)
        {
            cout<<"You have bought Fancy Red Clutch for Rs.1500"<<endl;
            wsalecost = 1500;
            salecost+=wsalecost;
        }
        else if(itemCode==24)
        {
            cout<<"You have bought Plain Black Trouser  for Rs.650"<<endl;
            wsalecost = 650;
            salecost+=wsalecost;
        }
        else if(itemCode==25)
        {
            cout<<"You have bought Red Printed Duppatta for Rs.500"<<endl;
            wsalecost = 500;
            salecost+=wsalecost;
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


