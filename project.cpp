#include<iostream>
using namespace std;
void WelcomeScreen();
void pastry_shop();
void ExitScreen();
struct address
{
	char street;
	int house;
	string city;
};
struct pay
{
	string name;
	float account;
    int pin;
};
void print(address ad);
void print (pay am);
int main()
{
    WelcomeScreen();
    int choice;
a:
    cout << "\n \n Please select any \n \n";
    cout << "1. Check all avalible pastry \n ";
    cout << "2. ExitScreen\n \n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        pastry_shop();
            cout << "How do you wand to pay : " << endl;
            cout << "1. Online \n ";
            cout << "2. Cash on Delivery \n \n";
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1)
                {
                pay am;
    cout<<"Enter name ";
    cin>>am.name;
    cout<<"Enter  ";
    cin>>am.account;
    cout<<"Enter  ";
    cin>>am.pin;
                }
            else if (choice == 2)
                {
                    ExitScreen();    
                }
            else
                {
                    cout << "\tInvalid input";
                }
        goto c;
    }
    else if (choice == 2)
    {
        ExitScreen();    
    }
    else
    {
        cout << "\tInvalid input";
    }
c:  
    cout<<"tell us about the delivery place :"<<endl;     
	address ad;
    cout<<"Enter House no. ";
    cin>>ad.house;
    cout<<"Enter your city ";
    cin>>ad.city;
    cout<<"Enter street no. ";
    cin>>ad.street;
    goto b;
b:    
    char selection;
    cout << "\n \n Do you want to continue?(y/n)  " << endl;
    cout << "\n Enter your choice: ";
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
    cout << "WELCOME TO RESERVATION MENU";
}
void pastry_shop()
{
	int option , plat ,choice ;
	int j = 0;
    double amt[100];
    cout << "Menu for avalible pastry :" << endl;
    cout << "1. Butterscotch pastry" << endl;
    cout << "2. Oreo pastry" << endl;
    cout << "3. Vanilla pastry" << endl;
    cout << "4. Blueberry pastry" << endl;
    cout << "5. Black forest pastry" << endl << endl;
    cout << "Enter your choice: ";
    cin >> option;
    switch (option)
    {
    case 1:
        if (option == 1)
            cout << "How many pastry do you want to order : " ;
            cin >> plat;
            for (int w = 1; w <= plat; w++)
            {
                    amt[j] = 450;	
			}
			cout << "The price of 1 pastry is:" << amt[j] << endl;
            cout << "Your Total bill  is: Rs " << (amt[j] * plat) << endl;
        break;
    case 2:
        if (option == 2)
            cout << "How many pastry do you want to order : " << endl;
            cin >> plat;
            for (int w = 1; w <= plat; w++)
            {
                    amt[j] = 360;	
			}
			cout << "The price of 1 pastry is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * plat) << endl;
        break;
    case 3:
        if (option == 3)
            cout << "How many pastry do you want to order : " << endl;
            cin >> plat;
            for (int w = 1; w <= plat; w++)
            {
                    amt[j] = 280;	
			}
			cout << "The price of 1 pastry is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * plat) << endl;
                    cout << "Enjoy your food ;)" << endl;
        break;
    case 4:
        if (option == 4)
            cout << "How many pastry do you want to order : " << endl;
            cin >> plat;
            for (int w = 1; w <= plat; w++)
            {
                    amt[j] = 480;	
			}
			cout << "The price of 1 pastry is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * plat) << endl;
                    cout << "Enjoy your food ;) " << endl;
        break;
        case 5:
        if (option == 5)
            cout << "How many pastry do you want to order : " << endl;
            cin >> plat;
            for (int w = 1; w <= plat; w++)
            {
                    amt[j] = 630;	
			}
			cout << "The price of 1 pastry is:" << amt[j] << endl;
                    cout << "Your Total bill  is: Rs " << (amt[j] * plat) << endl;
                    cout << "Enjoy your food ;)" << endl;
        break;
    } 
}
void ExitScreen()
{
    cout << "\n \n THANK YOU ";
     cout << "Enjoy your food ;)" << endl;
    exit(0);
}