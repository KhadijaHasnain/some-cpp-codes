#include<iostream>
using namespace std;
void WelcomeScreen();
void flightSchedule();
void reserveTicket();
void time();
void addFlight();
void delFlight();
void ExitScreen();
int main()
{
    WelcomeScreen();
    int choice;
a:
    cout << "   ======================================" << endl;
    cout << "\t\tWELCOME TO TICKET RESERVATION " << endl;
    cout << "   ======================================" << endl;
    cout << "\t\t\tEnter your choice \n";
    cout << "\t\t\t1. Flight schedule\n ";
    cout << "\t\t\t2. Reserve ticket\n ";
    cout << "\t\t\t3. Add flight\n";
    cout << "\t\t\t4. Del flight\n";
    cout << "\t\t\t5. Time\n";
    cout << "\t\t\t6. ExitScreen\n";

    cout << "\t\tEnter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        flightSchedule();
        goto B;
    }
    else if (choice == 2)
    {
        reserveTicket();
        goto B;
    }
    else if (choice == 3)
    {
        addFlight();
        goto B;
    }

    else if (choice == 4)
    {
        delFlight();
        goto B;
    }
    else if (choice == 5)
    {
        time();
        goto B;
    }
    else if (choice == 6)
    {
        ExitScreen();
        
    }

    else
    {
        cout << "\tInvalid input";
    }
B:
    char selection;
    cout << "\tDo you want to continue?(y/n)  " << endl;
    cout << "\tPress 'Y' for yes\n\tpress any key for ExitScreen" << endl;
    cout << "\tEnter your choice: ";
    cin >> selection;
    if (selection == 'y' || selection == 'Y')
    {
        goto a;
    }
    else
    {
        ExitScreen();
    }
    return 0;
}
void WelcomeScreen()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ ___ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                      WELCOME TO                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                   AIRLINE RESERVATION SYSTEM                          |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                        PROJECT                                        |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                             Submitted By: Ahmed Ali-005               |@@\n";
    cout << "\t\t\t\t\t@@|                                                           Madiha Shahid-015           |@@\n";
    cout << "\t\t\t\t\t@@|                                             Submitted To: Sir Waleed                  |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|___|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}
void flightSchedule()
{
    cout << "\tThe following types of flight are available right now:" << endl;

    cout << "\tDomestic Flights\n\tInternational Flights" << endl;

    cout << "\tIn the Domestic following cities we have:" << endl;

    cout << "\n\t*\n\tlahore \n\n\tTiming for flight avaiable is:\n\n\t7AM\t12PM\t5AM\n\n*";

    cout << "\n\t*\n\tkarachi\n\n\tTiming for flight avaiable is:\n\n\t7AM\t12PM\t5AM\n\n*";

    cout << "\n\t*\n\tQuetta\n\n\tTiming for flight avaiable is:\n\t7AM\t12PM\t5AM\n\n*";

    cout << "\n\t*\n\tGilgit\n\n\tTiming for flight avaiable is:\n\t7AM\t12PM\t5AM\n \n*";

    cout << "\tIn the International following countries are available:" << endl;

    cout << "\n\t*\n\tAustrailia\n\n\tTiming for flight avaiable is:\n\n\t7AM\t12PM\t5AM\n\n*";

    cout << "\n\t*\n\tEngland\n\n\tTiming for flight avaiable is:\n\n\t7AM\t12PM\t5AM\n\n*";

    cout << "\n\t*\n\tItaly\n \n\tTiming for flight avaiable is:\n\n\t7AM\t12PM\t5AM\n\n*";

    cout << "\n\t*\n\tTurkey\n\n\tTiming for flight avaiable is:\n\n\t7AM\t12PM\t5AM\n\n*";


}
void reserveTicket()
{
    int a, o,  i, age[100], option, choice,  choose, b, destination, add, s, route, l, city, tell, n, y, d;
    int j = 0;
    double amt[100];
    double cnic[100], pass[100];
    char first[100], last[100], af, del, askClass;

    cout << "\n\t\t ——————————————————— \n";
    cout << "\t\tWelcome to the Islamabad Airport\n";
    cout << "\t ——————————————————— \n";
    cout << "\tIn which AIRLINE you want to travel" << endl << endl;
    cout << "\t1)PIA" << endl;
    cout << "\t2)AIR BLUE" << endl;
    cout << "\t3)ARAB EMIRATES" << endl;
    cout << "\t4)QATAR AIRWAYS" << endl;
    cout << "\tEnter your choice: ";
    cin >> option;

    switch (option)
    {
    case 1:
        if (option == 1)
            cout << "\n\t\tWELCOME TO PIA AIR RESERVATION SYSTEM" << endl;
        break;
    case 2:
        if (option == 2)
            cout << "\n\t\tWELCOME TO AIRBLUE AIR RESERVATION SYSTEM" << endl;
        break;
    case 3:
        if (option == 3)
            cout << "\n\t\tWELCOME TO ARAB EMIRATES AIR RESERVATION SYSTEM" << endl;
        break;
    case 4:
        if (option == 4)
            cout << "\n\t\tWELCOME TO QATAR AIRWAYS AIR RESERVATION SYSTEM" << endl;
        break;
    }
    //Domestic and International
    cout << "\tPress B for bussiness class else any key for economy\n";
    cin >> askClass;
    if (askClass == 'B' || askClass == 'b')
    {
        cout << "\tEnter the following information:" << endl;
        int d, w;
        char first[100];
        cout << "\n\tHow many tickets do u want?\n";
        cin >> d;

        for (int w = 1; w <= d; w++)
        {
            cout << "\tEnter the First name: ";
            cin.ignore();
            cin.getline(first, 100);
            cout << "\tEnter the Last name: ";
            cin.getline(last, 100);
            cout << "\tEnter the age: ";
            cin >> age[w];
            cout << "\tEnter the CNIC no: ";
            cin >> cnic[w];
            cout << "\tEnter the passport no: ";
            cin >> pass[w];
        }
        cout << "\tDo u need domestic or international:" << endl;
        cout << "\tPress 1 for domestic:" << endl;
        cout << "\tPress 2 for international:" << endl;
        cout << "\tEnter:";
        cin >> tell;
        switch (tell)
    case 1:
        {
            cout << "\tIn domestic following flights are available:" << endl;
            cout << "\t1)lahore" << endl;
            cout << "\t2)karachi" << endl;
            cout << "\t3)Quetta" << endl;
            cout << "\t4)Gilgit" << endl;
            cout << "\t\t ** \t" << endl;
            cout << "\tpress 1 for lahore" << endl;
            cout << "\tpress 2 for karachi" << endl;
            cout << "\tpress 3 for Quetta " << endl;
            cout << "\tpress 4 for Gilgit" << endl;
            cout << "\t\t ** \t" << endl;
            cout << "\tEnter your destination name: ";
            cin >> n;
            if (n == 1)
            {
                cout << "\tDo u want round trip or one way:" << endl << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route";
                cin >> route;
                if (route == 1)
                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 26450;
                    cout << "\tThe price of ticket for lahore is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for lahore" << endl;
                }
                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 15560;
                    cout << "\tThe price of ticket for lahore is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for lahore" << endl;
                }
            }
            else if (n == 2)
            {
                cout << "\tDo u want round trip or one way:" << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route";
                cin >> route;
                if (route == 1)
                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 16280;
                    cout << "\tThe price of ticket for karachi is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for karachi" << endl;
                }
                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 10200;
                    cout << "\tThe price of ticket for karachi is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for karachi" << endl;
                }
            }
            else if (n == 3)
            {
                cout << "\tDo u want round trip or one way:" << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route";
                cin >> route;
                if (route == 1)
                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 29080;
                    cout << "\tThe price of ticket for Quetta is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Quetta" << endl;
                }
                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 52460;
                    cout << "\tThe price of ticket for Quetta is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Quetta" << endl;
                }
            }
            else if (n == 4)
            {
                cout << "\tDo u want round trip or one way:" << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route: ";
                cin >> route;

                if (route == 1)

                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 18450;
                    cout << "\tThe price of ticket for Gilgit is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Gilgit" << endl;
                }

                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 11230;
                    cout << "\tThe price of ticket for Gilgit is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Gilgit" << endl;
                }
            }
            break;

    case 2:
    {
        cout << "\tIn international following flights are available:" << endl;
        cout << "\t1)Austrailia" << endl;
        cout << "\t2)England" << endl;
        cout << "\t3)Italy" << endl;
        cout << "\t4)Turkey" << endl;
        cout << "\t\t ** \t" << endl;
        cout << "\t\tPress 1 for Austrailia" << endl;
        cout << "\t\tPress 2 for England" << endl;
        cout << "\t\tPress 3 for Italy " << endl;
        cout << "\t\tPress 4 for Turkey" << endl;
        cout << "\t\t ** \t" << endl;
        cout << "\tEnter your destination name:";
        cin >> o;
        if (o == 1)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route";
            cin >> route;
            if (route == 1)
            {
                cout << "\tRound Trip" << endl;
                amt[j] = 429400;
                cout << "\tThe price of ticket for Austrailia is:" << amt[j] << endl;
                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for Austrailia" << endl;
            }

            else if (route == 2)
            {
                cout << "\tOne Way" << endl;
                amt[j] = 281000;
                cout << "\tThe price of ticket for Austrailia is:" << amt[j] << endl;
                cout << "  \tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for Austrailia" << endl;
            }
        }
        else if (o == 2)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route: ";
            cin >> route;
            if (route == 1)
            {
                cout << "\tRound Trip" << endl;
                amt[j] = 162400;
                cout << "\tThe price of ticket for England is:" << amt[j] << endl;
                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for England" << endl;
            }
            else if (route == 2)
            {
                cout << "\tOne Way" << endl;
                amt[j] = 97200;
                cout << "\tThe price of ticket for England is:" << amt[j] << endl;
                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for England" << endl;
            }
        }
        else if (o == 3)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route: ";
            cin >> route;
            if (route == 1)
            {
                cout << "\tRound Trip" << endl;
                amt[j] = 261240;
                cout << "\tThe price of ticket for Italy is:" << amt[j] << endl;
                cout << "\n\tRates for Italy  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for Italy" << endl;
            }
            else if (route == 2)
            {
                cout << "\tOne Way" << endl;

                amt[j] = 149200;

                cout << "\tThe price of ticket for Italy is:" << amt[j] << endl;

                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;

                cout << "\tYour booking is confirmed for Italy" << endl;
            }
        }
        else if (o == 4)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route";
            cin >> route;

            if (route == 1)
            {
                cout << "\tRound Trip" << endl;

                amt[j] = 108260;

                cout << "\tThe price of ticket for Turkey is:" << amt[j] << endl;

                cout << "\tYour Total bill  is  is: Rs " << (amt[j] * d) << endl;

                cout << "\tYour booking is confirmed for Turkey" << endl;
            }

            else if (route == 2)
            {

                cout << "\tOne Way" << endl;

                amt[j] = 64260;

                cout << "\tThe price of ticket for Turkey is:" << amt[j] << endl;

                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;

                cout << "\tYour booking is confirmed for Turkey" << endl;
            }

        }
        else
        {
            cout << "\tInvalid" << endl;
        }
    }
        }
    }
    else
    {
        cout << "\tEnter the following information:" << endl;
        int d, w;
        char first[100];
        cout << "\n\tHow many tickets do u want?\n";
        cin >> d;

        for (int w = 1; w <= d; w++)
        {
            cout << "\tEnter the First name: ";
            cin.ignore();
            cin.getline(first, 100);
            cout << "\tEnter the Last name: ";
            cin.getline(last, 100);
            cout << "\tEnter the age: ";
            cin >> age[w];
            cout << "\tEnter the CNIC no: ";
            cin >> cnic[w];
            cout << "\tEnter the passport no: ";
            cin >> pass[w];
        }
        cout << "\tDo u need domestic or international:" << endl;
        cout << "\tPress 1 for domestic:" << endl;
        cout << "\tPress 2 for international:" << endl;
        cout << "\tEnter:";
        cin >> tell;
        switch (tell)
    case 1:
        {
            cout << "\tIn domestic following flights are available:" << endl;
            cout << "\t1)lahore" << endl;
            cout << "\t2)karachi" << endl;
            cout << "\t3)Quetta" << endl;
            cout << "\t4)Gilgit" << endl;
            cout << "\t\t ** \t" << endl;
            cout << "\tPress 1 for lahore" << endl;
            cout << "Press 2 for karachi" << endl;
            cout << "\tPress 3 for Quetta " << endl;
            cout << "\tPress 4 for Gilgit" << endl;
            cout << "\t\t ** \t" << endl;
            cout << "Enter your destination name: ";
            cin >> n;
            if (n == 1)
            {
                cout << "\tDo u want round trip or one way:" << endl << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route";
                cin >> route;
                if (route == 1)
                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 20790;
                    cout << "\tThe price of ticket for lahore is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for lahore" << endl;
                }
                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 13280;
                    cout << "\tThe price of ticket for lahore is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for lahore" << endl;
                }
            }
            else if (n == 2)
            {
                cout << "\tDo u want round trip or one way:" << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route";
                cin >> route;
                if (route == 1)
                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 15000;
                    cout << "\tThe price of ticket for karachi is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for karachi" << endl;
                }
                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 8230;
                    cout << "\tThe price of ticket for karachi is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for karachi" << endl;
                }
            }
            else if (n == 3)
            {
                cout << "\tDo u want round trip or one way:" << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route";
                cin >> route;
                if (route == 1)
                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 42470;
                    cout << "\tThe price of ticket for Quetta is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Quetta" << endl;
                }
                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 23240;
                    cout << "\tThe price of ticket for Quetta is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Quetta" << endl;
                }
            }
            else if (n == 4)
            {
                cout << "\tDo u want round trip or one way:" << endl;
                cout << "\tPress 1 for round trip" << endl;
                cout << "\tPress 2 for one way" << endl;
                cout << "\tEnter your route: ";
                cin >> route;

                if (route == 1)

                {
                    cout << "\tRound Trip" << endl;
                    amt[j] = 14080;
                    cout << "\tThe price of ticket for Gilgit is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Gilgit" << endl;
                }

                else if (route == 2)
                {
                    cout << "\tOne Way" << endl;
                    amt[j] = 8020;
                    cout << "\tThe price of ticket for Gilgit is:" << amt[j] << endl;
                    cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "\tYour booking is confirmed for Gilgit" << endl;
                }
            }
            break;
    case 2:
    {
        cout << "\tIn international following flights are available:" << endl;
        cout << "\t1)Austrailia" << endl;
        cout << "\t2)England" << endl;
        cout << "\t3)Italy" << endl;
        cout << "\t4)Turkey" << endl;
        cout << "\t\t ** \t" << endl;
        cout << "\t\tPress 1 for Austrailia" << endl;
        cout << "\t\tPress 2 for England" << endl;
        cout << "\t\tPress 3 for Italy " << endl;
        cout << "\t\tPress 4 for Turkey" << endl;
        cout << "\t ** \t" << endl;
        cout << "\tEnter your destination name:";
        cin >> o;
        if (o == 1)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route";
            cin >> route;
            if (route == 1)
            {
                cout << "\tRound Trip" << endl;
                amt[j] = 319640;
                cout << "\tThe price of ticket for Austrailia is:" << amt[j] << endl;
                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for Austrailia" << endl;
            }

            else if (route == 2)
            {
                cout << "\tOne Way" << endl;
                amt[j] = 230200;
                cout << "\tThe price of ticket for Austrailia is:" << amt[j] << endl;
                cout << "  \tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for Austrailia" << endl;
            }
        }
        else if (o == 2)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route: ";
            cin >> route;
            if (route == 1)
            {
                cout << "\tRound Trip" << endl;
                amt[j] = 134000;
                cout << "\tThe price of ticket for England is:" << amt[j] << endl;
                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for England" << endl;
            }
            else if (route == 2)
            {
                cout << "\tOne Way" << endl;
                amt[j] = 82200;
                cout << "\tThe price of ticket for England is:" << amt[j] << endl;
                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for England" << endl;
            }
        }
        else if (o == 3)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route: ";
            cin >> route;
            if (route == 1)
            {
                cout << "\tRound Trip" << endl;
                amt[j] = 210420;
                cout << "\tThe price of ticket for Italy is:" << amt[j] << endl;
                cout << "\n\tRates for Italy  is: Rs " << (amt[j] * d) << endl;
                cout << "\tYour booking is confirmed for Italy" << endl;
            }
            else if (route == 2)
            {
                cout << "\tOne Way" << endl;

                amt[j] = 132200;

                cout << "\tThe price of ticket for Italy is:" << amt[j] << endl;

                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;

                cout << "\tYour booking is confirmed for Italy" << endl;
            }
        }
        else if (o == 4)
        {
            cout << "\tDo u want round trip or one way:" << endl;
            cout << "\tPress 1 for round trip" << endl;
            cout << "\tPress 2 for one way" << endl;
            cout << "\tEnter your route";
            cin >> route;

            if (route == 1)
            {
                cout << "\tRound Trip" << endl;

                amt[j] = 65300;

                cout << "\tThe price of ticket for Turkey is:" << amt[j] << endl;

                cout << "\tYour Total bill  is  is: Rs " << (amt[j] * d) << endl;

                cout << "\tYour booking is confirmed for Turkey" << endl;
            }

            else if (route == 2)
            {

                cout << "\tOne Way" << endl;

                amt[j] = 43040;

                cout << "\tThe price of ticket for Turkey is:" << amt[j] << endl;

                cout << "\tYour Total bill  is: Rs " << (amt[j] * d) << endl;

                cout << "\tYour booking is confirmed for Turkey" << endl;
            }

        }
        else
        {
            cout << "\tinvalid" << endl;
        }
    }
        }
    }
}
void addFlight()
{
    char af;
    int A;

    cout<<"press y for yes \n press n for no"<<endl;
    cout << "\tDo u want to add the flight?";
    cin >> af;

    if (af == 'y')
    {

        reserveTicket();
    }

    else if (af == 'n')
    {
        cout << "\tokay" << endl;
        cout << "\n";
    }
}
void delFlight()
{
    char del;
    int d;
    {
        cout<<"press y for yes \n press n for no"<<endl;
        cout << "\tDo u want to del the flight"<<endl;
        cin >> del;
        if (del == 'y')
        {

            d = 0;
            cout << "\tYour booking is cancelled" << endl;
            cout << "\n";

        }
        else if (del == 'n')
        {
            cout << "\tYour booking is confirmed" << endl;
            cout << "\n";
        }

    }
}
void time()
{
    int time;
    {
        cout << "\tThe available Timing for the flight is:" << endl;
        cout << "\t\t7AM\t12PM\t5AM" << endl;
        cout<<"press 1 for 7AM \n press 2 for 12PM \n press 3 for 5AM "<<endl;
        cout << "\tTiming:";
        cin >> time;
        if (time == 1)
        {
            cout << "\tYour timing for the flight would be:7AM" << endl;
        }
        else if (time == 2)
        {
            cout << "\tYour timing for the flight would be:12PM" << endl;
        }
        else if (time == 3)
        {
            cout << "\tYour timing for the flight would be:5AM" << endl;
        }
        else
        {
            cout << "\tinvalid" << endl;
        }
    }
}
void ExitScreen()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ ___ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                               AIRLINE RESERVATION SYSTEM                              |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|___|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    cout << "\n";
    system("pause");
    exit(0);
}