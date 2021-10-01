/* 
------------------------------------------------------------------------------------------------
USERNAME: VaibhavMogha
DESCRIPTION: This program accepts days as integer and display total number of years, months and days in it.
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Day_Fun(int days)
{
	int y,m,d;
	y=days/365;
	days=days%365;
	m=days/30;
	d=days%30;
    cout<<"For normal year\n";
	cout<<"Years : "<<y<<"\nMonths : "<<m<<"\nDays : "<<d;
    cout<<"\n\nFor leap year:\n";
	cout<<"Years : "<<y<<"\nMonths : "<<m<<"\nDays : "<<d-1;
   
}
int main()
{
	int v;
	cout<<"Enter no. of days : ";
	cin>>v;
	Day_Fun(v);
	return 0;
}
