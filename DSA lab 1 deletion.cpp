#include <iostream>
using namespace std;
int main()
{
	// get array from user
	int max = 5 ;
	int size = 10; 
	int array[size] ;
	for(int i=0 ; i <= max ; i++)
	{
		cout<<"enter : ";
		cin>>array[i];
	}
	// display that array
	cout <<"array is : " ;
		for(int n=0 ; n <=max ; n++)
	{
	    cout<<array[n] <<" ";
	}
	cout<<endl;
	// deletion in array
	int loc ;
	cout<<"location: ";
    cin>> loc;
	if (loc<=max)
	{
		for(int k=loc ; k<=max ; k++)
	{
	    array[k] = array[k+1];
	}
	// result
	cout<<"Result \n";
		for(int m=0 ; m<=max-1 ; m++)
	{
	    cout<<array[m] <<" ";
	}
    }
    else
    {
    	cout<<"out of bound";
    }
return 0;
}

