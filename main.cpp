#include <iostream>
#include <string.h>
#include "women.h"
#include "men.h"
#include "kids.h"
#include "receipt.h"
#include "sale.h"
#include "menu.h"
#include "kidssale.h"
#include "newarrival.h"
#include "mensale.h"
#include "userchoice.h"




using namespace std;
///----------------------------------------------CLOTHING STORE MANAGEMENT-------------------------------------------------///
///---------------------------------------GROUP MEMBERS: ANEESA TAYYAB, ZAIN ABBAS-----------------------------------------///
///---------------------------------------REGISTRATION: FA19-BCE-056, FA19-BCE-023-----------------------------------------///

int main()
{
    userchoice u;
    menu m;
    m.ShowMenu();
    m.CustomerType(); /// ----concept of Encapsulation----///
    char ch2;
    ch2 = m.MenuChoice();

    if((ch2=='w')||(ch2=='W')) /// shopping for women
    {
        u.WomenChoice();
    }

    if(ch2=='m'||ch2=='M') ///shopping for men
    {
        u.menChoice();
    }

    if(ch2=='k'||ch2=='K') ///shopping for kids
    {
        u.kidsChoice();
    }

    return 0;
}
