using namespace std;

class userchoice:public men,public kids,public receipt,public menu
{
public:
    women w;
    kids kk;
    sale s;
    menu m;
    NewArrival n;
    kidssale k;
    men men1;
    mensale r; /// ----concept of Composition----///
    char ch4;
    int ch5;
    char ch6;
    char ch7,ch11,ch8,ch9,ch10;

    void WomenChoice()
    {
        ch4=w.get();
        if((ch4=='n')||(ch4=='N')) ///new arrivals
        {
            n.n_a_women();
            ch9 = m.customerchoice();
            if((ch9=='y')||(ch9=='Y'))
            {
                n.NewArrivalCost();
                n.CalculateReceipt();
                ch10 = m.ShopMore();
                if((ch10=='y')||(ch10=='Y'))
                {
                    ch11=m.MenuChoice();
                    if(ch11=='w')
                    {
                        WomenChoice();
                    }
                    else if(ch11=='m')
                    {
                        menChoice();
                    }
                    else if(ch11=='k')
                    {
                        kidsChoice();
                    }
                }
                else if((ch10=='n')||(ch10=='N'))
                {
                    cout<<"\nThanks for visiting us!See you soon"<<endl;
                }
            }
            else if((ch9=='n')||(ch9=='N'))
            {
                ch11 = m.ShopMore();
                if((ch11=='y')||(ch11=='Y'))
                {
                    char ch12 =m.MenuChoice();
                    if(ch12=='w')
                    {
                        WomenChoice();
                    }
                    else if(ch12=='m')
                    {
                        menChoice();
                    }
                    else if(ch12=='k')
                    {
                        kidsChoice();
                    }
                }
                else if((ch11=='n')||(ch11=='N'))
                {
                    cout<<"\nThanks for visiting us!See you soon"<<endl;
                }
            }
        }
        else if((ch4=='s')||(ch4=='S')) ///sale
        {
            ch5 = s.GetSale();
            if(ch5==30)                       ///30% sale
            {
                s.ShowWomen30();
                ch6=m.customerchoice();
                if((ch6=='y')||(ch6=='Y'))
                {
                    s.SaleBuy();
                    s.CalculateReceipt();
                    ch7 = m.ShopMore();
                    if((ch7=='y')||(ch7=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                    }
                    else if((ch7=='n')||(ch7=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
                else if((ch6=='n')||(ch6=='N'))
                {
                    ch8 = m.ShopMore();
                    if((ch8=='y')||(ch8=='Y'))
                    {
                        char ch13 = m.MenuChoice();
                        if(ch13=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch13=='m')
                        {
                            menChoice();
                        }
                        else if(ch13=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if((ch8=='n')||(ch8=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
            }
            else if(ch5==50)                   ///50% sale
            {
                s.ShowWomen50();
                ch6=m.customerchoice();
                if((ch6=='y')||(ch6=='Y'))
                {
                    s.SaleBuy();
                    s.CalculateReceipt();
                    ch7 = m.ShopMore();
                    if((ch7=='y')||(ch7=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if((ch7=='n')||(ch7=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
                else if((ch6=='n')||(ch6=='N'))
                {
                    ch8 = m.ShopMore();
                    if((ch8=='y')||(ch8=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if((ch8=='n')||(ch8=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
            }
        }
    }


///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///


    void menChoice()
    {
        ch4=men1.get();
        if(ch4=='n' || ch4=='N')  ///NEW ARRIVALS
        {
            n.n_a_men();
            ch9=m.customerchoice();
            if(ch9=='y' || ch9=='Y')
            {
                n.newarrivalcost_men();
                ch10=m.ShopMore();
                if(ch10=='y' || ch10=='Y')
                {
                    ch11=m.MenuChoice();
                    if(ch11=='w')
                    {
                        WomenChoice();
                    }
                    if(ch11=='m')
                    {
                        menChoice();
                    }
                    if(ch11=='k')
                    {
                        kidsChoice();
                    }
                }
                else if(ch10=='n'||ch10=='N')
                {
                    n.CalculateReceipt();
                }
            }
            if(ch9=='n' || ch9=='N')
            {
                ch11=m.ShopMore();
                if(ch11=='y'|| ch11=='Y')
                {
                    ch11=m.MenuChoice();
                    if(ch11=='w')
                    {
                        WomenChoice();
                    }
                    if(ch11=='m')
                    {
                        menChoice();
                    }
                    if(ch11=='k')
                    {
                        kidsChoice();
                    }
                }
                else if(ch11=='n' || ch11=='N')
                {
                    cout<<"\nThanks for visiting us! see you soon!\n";
                }
            }
        }
        if(ch4=='s' || ch4=='S')  ///SALE
        {
            ch5=s.GetSale();
            if(ch5==30) /// 30% sale
            {
                r.showmen30();
                ch6=m.customerchoice();
                if(ch6=='y' || ch6=='Y')
                {
                    r.salebuymen();
                    r.CalculateReceipt();
                    ch7=m.ShopMore();
                    if(ch7=='y' || ch7=='Y')
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if(ch7=='n' || ch7=='N')
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
                else if(ch6=='n' || ch6=='N')
                {
                    ch8=m.ShopMore();
                    if(ch8=='y' || ch8=='Y')
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        if(ch11=='m')
                        {
                            menChoice();
                        }
                        if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if(ch8=='n' || ch8=='N')
                    {
                        cout<<"\nThanks for visiting us! see you soon!\n";
                    }
                }
            }
            else if(ch5==50) /// 50% sale
            {
                r.showmen50();
                ch6=m.customerchoice();
                if(ch6=='y' || ch6=='Y')
                {
                    r.salebuymen();
                    r.CalculateReceipt();
                    ch7=m.ShopMore();
                    if(ch7=='y' || ch7=='Y')
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        if(ch11=='m')
                        {
                            menChoice();
                        }
                        if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if(ch7=='n' || ch7=='N')
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
                else if(ch6=='n' || ch6=='N')
                {
                    ch8=m.ShopMore();
                    if(ch8=='y' || ch8=='Y')
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        if(ch11=='m')
                        {
                            menChoice();
                        }
                        if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if(ch8=='n' || ch8=='N')
                    {
                        cout<<"\nThanks for visiting us! see you soon!\n";
                    }
                }
            }
        }
    }



///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///
///-------------------------------------------------------------------------------------------------------------------------------------------------///


    void kidsChoice()
    {
        ch4=kk.get();
        if((ch4=='n')||(ch4=='N')) ///new arrivals
        {
            {
                n.n_a_kids();
                ch9 = m.customerchoice();
                if((ch9=='y')||(ch9=='Y'))
                {
                    n.newarrivalcost_kids();
                    n.CalculateReceipt();
                    ch10 = m.ShopMore();
                    if((ch10=='y')||(ch10=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if((ch10=='n')||(ch10=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
                else if((ch9=='n')||(ch9=='N'))
                {
                    ch11 = m.ShopMore();
                    if((ch11=='y')||(ch11=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        if(ch11=='m')
                        {
                            menChoice();
                        }
                        if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if((ch11=='n')||(ch11=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
            }
        }
        else if((ch4=='s')||(ch4=='S'))         /// sale
        {
            ch5 = s.GetSale();
            if(ch5==30)           /// 30% sale
            {
                k.Showkids30();
                ch6=m.customerchoice();
                if((ch6=='y')||(ch6=='Y'))
                {
                    k.salebuy30();
                    k.CalculateReceipt();
                    ch7 = m.ShopMore();
                    if((ch7=='y')||(ch7=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                    }
                    else if((ch7=='n')||(ch7=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
            }
            else if((ch6=='n')||(ch6=='N'))
            {
                ch8 = m.ShopMore();
                if((ch8=='y')||(ch8=='Y'))
                {
                    ch11=m.MenuChoice();
                    if(ch11=='w')
                    {
                        WomenChoice();
                    }
                    if(ch11=='m')
                    {
                        menChoice();
                    }
                    if(ch11=='k')
                    {
                        kidsChoice();
                    }
                }
                else if((ch8=='n')||(ch8=='N'))
                {
                    cout<<"\nThanks for visiting us!See you soon"<<endl;
                }
            }
            else if(ch5==50)           /// 50% sale
            {
                k.Showkids50();
                ch6=m.customerchoice();
                if((ch6=='y')||(ch6=='Y'))
                {
                    k.salebuy50();
                    k.CalculateReceipt();
                    ch7 = m.ShopMore();
                    if((ch7=='y')||(ch7=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                    }
                    else if((ch7=='n')||(ch7=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
                else if((ch6=='n')||(ch6=='N'))
                {
                    ch8 = m.ShopMore();
                    if((ch8=='y')||(ch8=='Y'))
                    {
                        ch11=m.MenuChoice();
                        if(ch11=='w')
                        {
                            WomenChoice();
                        }
                        else if(ch11=='k')
                        {
                            kidsChoice();
                        }
                        else if(ch11=='m')
                        {
                            menChoice();
                        }
                    }
                    else if((ch8=='n')||(ch8=='N'))
                    {
                        cout<<"\nThanks for visiting us!See you soon"<<endl;
                    }
                }
            }
        }
    }
};

