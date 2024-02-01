#include<iostream>
using namespace std;
void WelcomeScreen();
void flightSchedule();
void reserveTicket();
void delFlight();
void ExitScreen();
int main()
{
    WelcomeScreen();
    int choice;
a:
    cout << "Enter the key \n";
    cout << "1. Flight schedule\n ";
    cout << "2. Reserve ticket\n ";
    cout << "3. Del flight\n";
    cout << "4. ExitScreen\n";
    cout << "Enter your choice: ";
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
        delFlight();
        goto B;
    }
    else if (choice == 4)
    {
        ExitScreen();     
    }
    else
    {
        cout << "Invalid entry";
    }
B:
    char selection;
    cout <<"Do you want to continue?" << endl;
    cout << "Press 'Y' for yes\npress any key to Exit" << endl;
    cout << "Enter your choice: ";
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
    cout << " WELCOME TO AIRLINE RESERVATION  SYSTEM " ;                   
}
void flightSchedule()
{
    cout << "These flights are available:" << endl;
    cout << "\nLahore \nTiming for flights are:\t7AM\t12PM\t5AM"; 
    cout << "\nKarachi\nTiming for flights are:\t7AM\t12PM\t5AM";  
    cout << "\nItaly\n Timing for flights are:\t7AM\t12PM\t5AM";  
    cout << "\nTurkey\nTiming for flights are:\t7AM\t12PM\t5AM";
}
void reserveTicket()
{
    int a, o,  i, age[100], option, choice,  choose, b, destination, add, s, route, l, city, tell, n, y, d;
    int j = 0;
    double amt[100];
    double cnic[100], pass[100];
    char first[100], last[100], af, del;
    cout <<"Welcome to Islamabad Airport\n";
    cout <<"Which AIRLINE do you like"<< endl;
    cout << "1. PIA" << endl;
    cout << "2. AIR BLUE" << endl;
    cout << "Enter your choice: ";
    cin >> option;
    switch (option)
    {
    case 1:
        if (option == 1)
            cout <<"WELCOME TO PIA RESERVATION SYSTEM" << endl;
        break;
    case 2:
        if (option == 2)
            cout <<"WELCOME TO AIRBLUE RESERVATION SYSTEM" << endl;
        break;
    }
    cout << "Enter the following information:" << endl;
        int w;
        cout << "How many tickets do u want?\n";
        cin >> d;
        for (int w = 1; w <= d; w++)
        {
            cout << "Enter the First name: ";
            cin.ignore();
            cin.getline(first, 100);
            cout << "Enter the Last name: ";
            cin.getline(last, 100);
            cout << "Enter the age: ";
            cin >> age[w];
            cout << "Enter the CNIC no: ";
            cin >> cnic[w];
            cout << "Enter the passport no: ";
            cin >> pass[w];
        }
        cout << "Press 1 for domestic:" << endl;
        cout << "Press 2 for international:" << endl;
        cout << "Enter:";
        cin >> tell;
        switch (tell)
    case 1:
        {
            cout << "In domestic following flights are available:" << endl;
            cout << "1. Lahore" << endl;
            cout << "2. Karachi" << endl;
            cout << "Enter your destination name: ";
            cin >> n;
            if (n == 1)
            {
                cout << "Do u want round trip or one way:" << endl << endl;
                cout << "Press 1 for round trip" << endl;
                cout << "Press 2 for one way" << endl;
                cout << "Enter: ";
                cin >> route;
                if (route == 1)
                {
                    amt[j] = 26450;
                    cout << "The price of ticket for round trip to lahore is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "Your booking is confirmed for lahore" << endl;
                }
                else if (route == 2)
                {
                    amt[j] = 15560;
                    cout << "The price of one way ticket for lahore is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "Your booking is confirmed for lahore" << endl;
                }
            }
            else if (n == 2)
            {
                cout << "Press 1 for round trip" << endl;
                cout << "Press 2 for one way" << endl;
                cout << "Enter: ";
                cin >> route;
                if (route == 1)
                {
                    amt[j] = 16280;
                    cout << "The price of round trip ticket for karachi is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "Your booking is confirmed for karachi" << endl;
                }
                else if (route == 2)
                {
                    amt[j] = 10200;
                    cout << "The price of one way ticket for karachi is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * d) << endl;
                    cout << "Your booking is confirmed for karachi" << endl;
                }
            }
            break;
    case 2:
    {
        cout << "In international following flights are available:" << endl;
        cout << "1. Italy" << endl;
        cout << "2. Turkey" << endl;
        cout << "\Enter your destination: ";
        cin >> o;
            if (o == 1)
        {
            cout << "Press 1 for round trip" << endl;
            cout << "Press 2 for one way" << endl;
            cout << "Enter : ";
            cin >> route;
            if (route == 1)
            {
                amt[j] = 261240;
                cout << "The price of round trip ticket for Italy is:" << amt[j] << endl;
                cout << "Your total bill is: Rs " << (amt[j] * d) << endl;
                cout << "Your booking is confirmed for Italy" << endl;
            }
            else if (route == 2)
            {
                amt[j] = 149200;
                cout << "The price of one way ticket for Italy is:" << amt[j] << endl;
                cout << "Your Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "Your booking is confirmed for Italy" << endl;
            }
        }
        else if (o == 2)
        {
            cout << "Press 1 for round trip" << endl;
            cout << "Press 2 for one way" << endl;
            cout << "Enter :";
            cin >> route;
            if (route == 1)
            {
                amt[j] = 108260;
                cout << "The price of round trip ticket for Turkey is:" << amt[j] << endl;
                cout << "Your Total bill  is  is: Rs " << (amt[j] * d) << endl;
                cout << "Your booking is confirmed for Turkey" << endl;
            }
            else if (route == 2)
            {
                amt[j] = 64260;
                cout << "The price of one way ticket for Turkey is:" << amt[j] << endl;
                cout << "Your Total bill  is: Rs " << (amt[j] * d) << endl;
                cout << "Your booking is confirmed for Turkey" << endl;
            }
        }
        else
        {
            cout << "Invalid Entery" << endl;
        }
    }
        }
    }
void delFlight()
{
    char del;
    int d;
    {
        cout<<"press y for yes \n press n for no"<<endl;
        cout << "Do u want to del the flight"<<endl;
        cin >> del;
        if (del == 'y')
        {
            d = 0;
            cout << "Your booking is cancelled" << endl;
            cout << "\n";
        }
        else if (del == 'n')
        {
            cout << "Your booking is confirmed" << endl;
            cout << "\n";
        }
    }
}
void ExitScreen()
{
    cout <<"THANK YOU FOR USING AIRLINE RESERVATION SYSTEM ";
    system("pause");
    exit(0);
}