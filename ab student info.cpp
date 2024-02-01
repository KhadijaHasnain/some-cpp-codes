#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int roll_no;
	char name[10];
	int age;
	char adress[50];
};
void studentage_14(struct student stu[], int x);
void studentage_14(struct student stu[], int x)
{
	for(int i=0;i<10;i++)
	{
		 
		if (stu[i].age==14)
		{
			cout<<"Name: "<<stu[i].name<<endl;
		}
	}
}
void studenteven_rno(struct student stu[], int x);
void studenteven_rno(struct student stu[],int x)
{
	cout<<"Student with even roll no"<<endl;
	for(int i=0;i<x;i++)
	{
		if( stu[i].roll_no%2==0)
		{
			cout<<"Name: "<<stu[i].name<<endl;
		}
	}
}
void studentinfo(struct student stu[], int x);
void studentinfo(struct student stu[],int x)
{
	int roll;
	cout<<"Enter roll no:"<<endl;
	cin>>roll;
	cout<<"Student details with given roll no:"<<endl;
	for(int i=0;i<x;i++)
	{
		if(stu[i].roll_no==roll)
		{
			cout<<"Roll no: "<<stu[i].roll_no<<endl;
			cout<<"Name: "<<stu[i].name<<endl;
			cout<<"Age: "<<stu[i].age<<endl;
			cout<<"Adress: "<<stu[i].adress<<endl;
		}
			
	}
}
int main ()
{
	int x=11;
	student stu[x];
	for (int i=0;i<x;i++)
	{
	cout<<"Information of the student "<<i+1<<endl;
	cout<<"Enter roll no of the student"<<endl;
	cin>>stu[i].roll_no;
	cout<<"Enter name of the student"<<endl;
	cin>>stu[i].name;
	cout<<"Enter age of the student"<<endl;
	cin>>stu[i].age;
	cout<<"Enter address of the student"<<endl;
	cin>>stu[i].adress;
	}
	for (int i=0;i<10;i++)
	{
	studentage_14(stu,x);
    studenteven_rno(stu,x);
    studentinfo(stu,x);
	}
    return 0;
}






