#include<iostream>
#include<string.h>
#include<conio.h>

#define max 100
using namespace std;

class Customer
{
public:
char name[100];
char address[100];
char phone[12];
char from_date[20];
char to_date[20];
float payment_advance;
int booking_id;
};


class Room
{
public:
char type;
char stype;
char ac;
int roomNumber;
int rent;
int status;

class Customer cust;
class Room addRoom(int);
void searchRoom(int);
void deleteRoom(int);
void displayRoom(Room);
};

Room rooms[max];
int count=0;


 Room Room::addRoom(int rno)
{
Room room;
room.roomNumber=rno;
cout<<"\n  Type AC/Non-AC (A/N) : ";
cin>>room.ac;
cout<<"\n  Type Comfort (S/N) : ";
cin>>room.type;
cout<<"\n  Type Size (B/S) : ";
cin>>room.stype;
cout<<"\n  Daily Rent : ";
cin>>room.rent;
room.status=0;

cout<<"\n Room Added Successfully....";
getch();
return room;
}


void Room::searchRoom(int rno)
{
int i,found=0;
for(i=0;i<count;i++)
{
if(rooms[i].roomNumber==rno)
{
found=1;
break;
}
}
if(found==1)
{
cout<<"  Room Details\n";
if(rooms[i].status==1)
{
cout<<"\n  Room is Reserved ! !";
}
else
{
cout<<"\n  Room is available";
}
displayRoom(rooms[i]);
getch();
}
else
{
cout<<"\n  Room not found ! !";
getch();
}
}

void Room::displayRoom(Room tempRoom)
{
cout<<"\n Room Number: \t"<<tempRoom.roomNumber;
cout<<"\n Type AC/Non-AC (A/N) "<<tempRoom.ac;
cout<<"\n Type Comfort (S/N) "<<tempRoom.type;
cout<<"\n Type Size (B/S) "<<tempRoom.stype;
cout<<"\n Rent: "<<tempRoom.rent;
}


class HotelMgnt:protected Room
{
public:
void checkIn();
void getAvailRoom();
void searchCustomer(char *);
void checkOut(int);
void guestSummaryReport();
};


void HotelMgnt::guestSummaryReport(){

if(count==0)
{
	cout<<"\n No Guest in Hotel ! !";
}	
for(int i=0;i<count;i++)
{
if(rooms[i].status==1)
{
cout<<"\n Customer First Name : "<<rooms[i].cust.name;
cout<<"\n Room Number : "<<rooms[i].roomNumber;
cout<<"\n Address (only city) : "<<rooms[i].cust.address;
cout<<"\n Phone : "<<rooms[i].cust.phone;
cout<<"\n---------------------------------------";	
}
	
}

getch();
}

void HotelMgnt::checkIn()
{
int i,found=0,rno;

Room room;
cout<<"\n  Enter Room number : ";
cin>>rno;
for(i=0;i<count;i++)
{
if(rooms[i].roomNumber==rno)
{
found=1;
break;
}
}
if(found==1)
{
if(rooms[i].status==1)
{
cout<<"\n  Room is already Booked ! !";
getch();
return;
}

cout<<"\n  Enter booking id: ";
cin>>rooms[i].cust.booking_id;

cout<<"\n  Enter Customer Name (First Name): ";
cin>>rooms[i].cust.name;

cout<<"\n  Enter Address (only city): ";
cin>>rooms[i].cust.address;

cout<<"\n  Enter Phone Number: ";
cin>>rooms[i].cust.phone;

cout<<"\n  Enter checkin Date: ";
cin>>rooms[i].cust.from_date;

cout<<"\n  Enter checkout  Date: ";
cin>>rooms[i].cust.to_date;


cout<<"\n  Enter Advance Payment: ";
cin>>rooms[i].cust.payment_advance;

rooms[i].status=1;

cout<<"\n  Customer Checked-in Successfully....";
getch();
}
}


void HotelMgnt::getAvailRoom()
{
int i,found=0;
for(i=0;i<count;i++)
{
if(rooms[i].status==0)
{
displayRoom(rooms[i]);
cout<<"\n\n  Press enter for next room";
found=1;
getch();
}
}
if(found==0)
{
cout<<"\n  All rooms are reserved ! !";
getch();
}
}


void HotelMgnt::searchCustomer(char *pname)
{
int i,found=0;
for(i=0;i<count;i++)
{
if(rooms[i].status==1 && stricmp(rooms[i].cust.name,pname)==0)
{
cout<<"\n  Customer Name: "<<rooms[i].cust.name;
cout<<"\n  Room Number: "<<rooms[i].roomNumber;

cout<<"\n\n  Press enter for next record";
found=1;
getch();
}
}
if(found==0)
{
cout<<"\n  Person not found ! !";
getch();
}
}


void HotelMgnt::checkOut(int roomNum)
{
int i,found=0,days,rno;
float billAmount=0;
for(i=0;i<count;i++)
{
if(rooms[i].status==1 && rooms[i].roomNumber==roomNum)
{
	
found=1;
//getch();
break;
}
}
if(found==1)
{
cout<<"\n  Enter Number of Days:\t";
cin>>days;
billAmount=days * rooms[i].rent;

cout<<"\n\t##################################\n";
cout<<"\n\t         CheckOut Details \n";
cout<<"\n\t##################################\n";
cout<<"\n  Customer Name : "<<rooms[i].cust.name;
cout<<"\n  Room Number : "<<rooms[i].roomNumber;
cout<<"\n  Address : "<<rooms[i].cust.address;
cout<<"\n  Phone : "<<rooms[i].cust.phone;
cout<<"\n  Total Amount Due : "<<billAmount<<" /";
cout<<"\n  Advance Paid: "<<rooms[i].cust.payment_advance<<" /";
cout<<"\n  Total Payable: "<<billAmount-rooms[i].cust.payment_advance<<"/ only";

rooms[i].status=0;
}
getch();
}


void manageRooms()
{
Room room;
int opt,rno,i,flag=0;
char ch;
do
{
system("cls");
cout<<"\n  ####################";
cout<<"\n      Manage Rooms ";
cout<<"\n  ####################";
cout<<"\n  1. Add Room";
cout<<"\n  2. Search Room";
cout<<"\n  3. Back to Main Menu";
cout<<"\n\n  Enter Option: ";
cin>>opt;


switch(opt)
{
case 1:
cout<<"\n  Enter Room Number: ";
cin>>rno;
//i=0;
for(i=0;i<count;i++)
{
if(rooms[i].roomNumber==rno)
{
flag=1;
}
}
if(flag==1)
{
cout<<"\n  Room Number is Present.\n  Please enter unique Number";
flag=0;
getch();
}
else
{
rooms[count]=room.addRoom(rno);
count++;
}
break;
case 2:
cout<<"\n  Enter room number: ";
cin>>rno;
room.searchRoom(rno);
break;
case 3:
break;
default:
cout<<"\n  Please Enter correct option ! !";
break;
}
}while(opt!=3);
}
//using namespace std;
int main()
{
 HotelMgnt hm;
int opt,rno;
char ch;
char pname[100];

system("cls");

do
{
system("cls");
cout<<"\t######################################################################################################\n";
cout<<"\t\t\t\t\t             SUNSHINE HOTEL \n";
cout<<"\t######################################################################################################\n";
cout<<"\n  1. Manage Rooms";
cout<<"\n  2. Check-In Room";
cout<<"\n  3. Available Rooms";
cout<<"\n  4. Search Customer";
cout<<"\n  5. Check-Out Room";
cout<<"\n  6. Guest Summary Report";
cout<<"\n  7. Exit";
cout<<"\n\n  Enter Option: ";
cin>>opt;
switch(opt)
{
case 1:
manageRooms();
break;
case 2:
if(count==0)
{
cout<<"\n  Rooms data is not available.\n  Please add the rooms first.";
getch();
}
else
hm.checkIn();
break;
case 3:
if(count==0)
{
cout<<"\n  Rooms data is not available.\n  Please add the rooms first.";
getch();
}
else
hm.getAvailRoom();
break;
case 4:
if(count==0)
{
cout<<"\n  Rooms are not available.\n  Please add the rooms first.";
getch();
}
else
{
cout<<"  Enter Customer Name: ";
cin>>pname;
hm.searchCustomer(pname);
}
break;
case 5:
if(count==0)
{
cout<<"\n  Rooms are not available.\n  Please add the rooms first.";
getch();
}
else
{
cout<<"  Enter Room Number : ";
cin>>rno;
hm.checkOut(rno);
}
break;
case 6:
hm.guestSummaryReport();	
break;
case 7:
cout<<"\n  THANK YOU :)";
break;
default:
cout<<"\n  Please Enter correct option";
break;
}
}while(opt!=7);

getch();
}

