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
	// insertion in array
	int loc , value;
	cout<<"location: ";
    cin>> loc;
    	cout<<"value: ";
	cin>> value;
	if (loc<=max)
	{
		for(int k=max ; k>=loc ; k--)
	{
	    array[k+1] = array[k];
	}
	array[loc] = value;
	// result
	cout<<"Result \n";
		for(int m=0 ; m<=max+1 ; m++)
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

