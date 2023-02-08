using namespace std;

class menu
{
public:
    void ShowMenu()
    {
        for(int i=1; i<55; i++)
        {
            cout<<" *~* ";
        }
        cout<<endl<<endl;
        for(int i=1; i<7; i++)
        {
            cout<<"\t";
        }
        cout<<"WELCOME TO KHAADI CLOTHING STORE :)\n"<<endl;
        for(int i=1; i<55; i++)
        {
            cout<<" *~* ";
        }
        cout<<"\n\nHERE IS OUR CATALOGUE! HAVE A LOOK PLEASE!\n\n\n";
        for(int i=1; i<116; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tWOMEN\t\t\t|\t\t\tMEN\t\t\t|\t\tKIDS\t\t  |\n";
        for(int i=1; i<116; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tNew Arrivals\t\t|\t\tNew Arrivals\t\t\t|\tGirl\t|\tBoy\t  |\n";
        for(int i=1; i<82; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tStitched\t\t|\t\tStitched\t\t\t|\t    Stitched\t\t  |\n";
        cout<<endl<<"|`Fancy\t\t\t\t|`Kurta\t\t\t\t\t\t|`Skirts\t|`Jackets\t  |\n|`Casual\t\t\t|`Waistcoat\t\t\t\t\t|`Tops\t\t|`Shirts\t  |\n|`Embriodered\t\t\t|`Jeans\t\t\t\t\t\t|`Frocks\t|`pants\t\t  |\n";
        for(int i=1; i<82; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tUnstitched\t\t|\t\tUnstitched\t\t\t|\t   Unstitched\t\t  |\n";
        cout<<"|`1piece\t\t\t|`Kurta\t\t\t\t\t\t|\t-\t|\t-\t  |\n";
        cout<<"|`2piece\t\t\t|`kameez shalwar\t\t\t\t|\t-\t|\t-\t  |\n";
        cout<<"|`3piece\t\t\t|`Sherwani\t\t\t\t\t|\t-\t|\t-\t  |\n";
        for(int i=1; i<82; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tJewelery\t\t|\t\tFragrances\t\t\t|\t      Shoes\t\t  |\n";
        for(int i=1; i<82; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tScarves\t\t\t|\t\tDenim Shoes\t\t\t|`Jumpsuits\t|`Trousers\t  |\n";
        for(int i=1; i<116; i++)
        {
            cout<<"-";
        }
        cout<<endl<<"|\tSALE\t\t\t|\t\tSALE\t\t\t\t|\t     SALE\t\t  |\n";
        for(int i=1; i<116; i++)
        {
            cout<<"-";
        }
    }
    void CustomerType()
    {
        cout<<"\n\n\nAre you a regular customer or new here: (r/n)? ";
        char ch;
        cin>>ch;
        if(ch=='r') {}
        else if(ch=='n')
        {
            cout<<"\nHave some directions!..go upward for men's section, downward for basement and straight forward for women's section!"<<endl<<endl;
        }
        else
        {
            cout<<"\nChoose between r or n.!";
        }
    }
    char MenuChoice()
    {
        cout<<"\nDo you want to shop from Women,Men or Kids(w/m/k)? ";
        char ch1;
        cin>>ch1;
        return ch1;
    }
    char ShopMore()
    {
        cout<<"\nDo you wanna shop more or checkout?(y/n)";
        char shopchoice;
        cin>>shopchoice;
        return shopchoice;
    }
    char customerchoice()
    {
        cout<<endl<<"Are you interested in buying something(y/n)?\n";
        char ch4;
        cin >> ch4;
        return ch4;
    }
};
